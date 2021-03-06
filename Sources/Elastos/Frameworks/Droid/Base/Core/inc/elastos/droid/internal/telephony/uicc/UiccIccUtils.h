//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#ifndef __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_UICCICCUTILS_H__
#define __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_UICCICCUTILS_H__

#include "elastos/droid/ext/frameworkext.h"
#include "elastos/core/Object.h"

using Elastos::Droid::Graphics::IBitmap;

namespace Elastos {
namespace Droid {
namespace Internal {
namespace Telephony {
namespace Uicc {

/**
  * Various methods, useful for dealing with SIM data.
  */
class UiccIccUtils
    : public Object
    , public IIccUtils
{
public:
    CAR_INTERFACE_DECL();

    /**
      * Many fields in GSM SIM's are stored as nibble-swizzled BCD
      *
      * Assumes left-justified field that may be padded right with 0xf
      * values.
      *
      * Stops on invalid BCD value, returning string so far
      */
    static CARAPI_(String) BcdToString(
        /* [in] */ ArrayOf<Byte>* data,
        /* [in] */ Int32 offset,
        /* [in] */ Int32 length);

    /**
      * Decode cdma byte into String.
      */
    static CARAPI_(String) CdmaBcdToString(
        /* [in] */ ArrayOf<Byte>* data,
        /* [in] */ Int32 offset,
        /* [in] */ Int32 length);

    /**
      * Decodes a GSM-style BCD byte, returning an int ranging from 0-99.
      *
      * In GSM land, the least significant BCD digit is stored in the most
      * significant nibble.
      *
      * Out-of-range digits are treated as 0 for the sake of the time stamp,
      * because of this:
      *
      * TS 23.040 section 9.2.3.11
      * "if the MS receives a non-integer value in the SCTS, it shall
      * assume the digit is set to 0 but shall store the entire field
      * exactly as received"
      */
    static CARAPI_(Int32) GsmBcdByteToInt(
        /* [in] */ Byte b);

    /**
      * Decodes a CDMA style BCD byte like {@link #gsmBcdByteToInt}, but
      * opposite nibble format. The least significant BCD digit
      * is in the least significant nibble and the most significant
      * is in the most significant nibble.
      */
    static CARAPI_(Int32) CdmaBcdByteToInt(
        /* [in] */ Byte b);

    /**
      * Decodes a string field that's formatted like the EF[ADN] alpha
      * identifier
      *
      * From TS 51.011 10.5.1:
      *   Coding:
      *       this alpha tagging shall use either
      *      -    the SMS default 7 bit coded alphabet as defined in
      *          TS 23.038 [12] with bit 8 set to 0. The alpha identifier
      *          shall be left justified. Unused bytes shall be set to 'FF'; or
      *      -    one of the UCS2 coded options as defined in annex B.
      *
      * Annex B from TS 11.11 V8.13.0:
      *      1)  If the first octet in the alpha string is '80', then the
      *          remaining octets are 16 bit UCS2 characters ...
      *      2)  if the first octet in the alpha string is '81', then the
      *          second octet contains a value indicating the number of
      *          characters in the string, and the third octet contains an
      *          8 bit number which defines bits 15 to 8 of a 16 bit
      *          base pointer, where bit 16 is set to zero and bits 7 to 1
      *          are also set to zero.  These sixteen bits constitute a
      *          base pointer to a "half page" in the UCS2 code space, to be
      *          used with some or all of the remaining octets in the string.
      *          The fourth and subsequent octets contain codings as follows:
      *          If bit 8 of the octet is set to zero, the remaining 7 bits
      *          of the octet contain a GSM Default Alphabet character,
      *          whereas if bit 8 of the octet is set to one, then the
      *          remaining seven bits are an offset value added to the
      *          16 bit base pointer defined earlier...
      *      3)  If the first octet of the alpha string is set to '82', then
      *          the second octet contains a value indicating the number of
      *          characters in the string, and the third and fourth octets
      *          contain a 16 bit number which defines the complete 16 bit
      *          base pointer to a "half page" in the UCS2 code space...
      */
    static CARAPI_(String) AdnStringFieldToString(
        /* [in] */ ArrayOf<Byte>* data,
        /* [in] */ Int32 offset,
        /* [in] */ Int32 length);

    static CARAPI_(Int32) HexCharToInt32(
        /* [in] */ Char32 c);

    /**
      * Converts a hex String to a byte array.
      *
      * @param s A string of hexadecimal characters, must be an even number of
      *          chars long
      *
      * @return byte array representation
      *
      * @throws RuntimeException on invalid format
      */
    static CARAPI_(AutoPtr< ArrayOf<Byte> >) HexStringToBytes(
        /* [in] */ const String& s);

    /**
      * Converts a byte array into a String of hexadecimal characters.
      *
      * @param bytes an array of bytes
      *
      * @return hex string representation of bytes array
      */
    static CARAPI_(String) BytesToHexString(
        /* [in] */ ArrayOf<Byte>* bytes);

    /**
      * Convert a TS 24.008 Section 10.5.3.5a Network Name field to a string
      * "offset" points to "octet 3", the coding scheme byte
      * empty string returned on decode error
      */
    static CARAPI_(String) NetworkNameToString(
        /* [in] */ ArrayOf<Byte>* data,
        /* [in] */ Int32 offset,
        /* [in] */ Int32 length);

    /**
      * Convert a TS 131.102 image instance of code scheme '11' into Bitmap
      * @param data The raw data
      * @param length The length of image body
      * @return The bitmap
      */
    static CARAPI_(AutoPtr<IBitmap>) ParseToBnW(
        /* [in] */ ArrayOf<Byte>* data,
        /* [in] */ Int32 length);

    /**
      * a TS 131.102 image instance of code scheme '11' into color Bitmap
      *
      * @param data The raw data
      * @param length the length of image body
      * @param transparency with or without transparency
      * @return The color bitmap
      */
    static CARAPI_(AutoPtr<IBitmap>) ParseToRGB(
        /* [in] */ ArrayOf<Byte>* data,
        /* [in] */ Int32 length,
        /* [in] */ Boolean transparency);

    static CARAPI_(AutoPtr< ArrayOf<Byte> >) StringToAdnStringField(
        /* [in] */ const String& alphaTag);

    static CARAPI_(AutoPtr< ArrayOf<Byte> >) StringToAdnStringField(
        /* [in] */ const String& alphaTag,
        /* [in] */ Boolean isUcs2);

private:
    static CARAPI_(Int32) BitToRGB(
        /* [in] */ Int32 bit);

    static CARAPI_(AutoPtr< ArrayOf<Int32> >) MapTo2OrderBitColor(
        /* [in] */ ArrayOf<Byte>* data,
        /* [in] */ Int32 valueIndex,
        /* [in] */ Int32 length,
        /* [in] */ ArrayOf<Int32>* colorArray,
        /* [in] */ Int32 bits);

    static CARAPI_(AutoPtr< ArrayOf<Int32> >) MapToNon2OrderBitColor(
        /* [in] */ ArrayOf<Byte>* data,
        /* [in] */ Int32 valueIndex,
        /* [in] */ Int32 length,
        /* [in] */ ArrayOf<Int32>* colorArray,
        /* [in] */ Int32 bits);

    static CARAPI_(AutoPtr< ArrayOf<Int32> >) GetCLUT(
        /* [in] */ ArrayOf<Byte>* rawData,
        /* [in] */ Int32 offset,
        /* [in] */ Int32 number);

public:
    static const String LOGTAG;
};

} // namespace Uicc
} // namespace Telephony
} // namespace Internal
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_UICCICCUTILS_H__

