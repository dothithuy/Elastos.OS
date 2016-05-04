/*
 * Copyright (C) 2006 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.android.internal.telephony;

/**
 * {@hide}
 */
public interface MmiCode
{
	/**
	 * {@hide}
	 */
    public enum State {
        PENDING,
        CANCELLED,
        COMPLETE,
        FAILED
    }


    /**
     * @return Current state of MmiCode request
     */
    public State GetState();

    /**
     * @return Localized message for UI display, valid only in COMPLETE
     * or FAILED states. NULL otherwise
     */

    public CharSequence GetMessage();

    /**
     * @return Phone associated with the MMI/USSD message
     */
    public Phone GetPhone();

    /**
     * Cancels pending MMI request.
     * State becomes CANCELLED unless already COMPLETE or FAILED
     */
    CARAPI Cancel();

    /**
     * @return TRUE if the network response is a REQUEST for more user input.
     */
    public Boolean IsUssdRequest();

    /**
     * @return TRUE if an outstanding request can be canceled.
     */
    public Boolean IsCancelable();
}