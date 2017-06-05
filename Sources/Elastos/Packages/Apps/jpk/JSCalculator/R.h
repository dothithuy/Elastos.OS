/* AUTO-GENERATED FILE.  DO NOT MODIFY.
 *
 * This class was automatically generated by the
 * aapt tool from the resource data it found.  It
 * should not be modified by hand.
 */

#ifndef __Elastos_Droid_Calculator2_R_H__
#define __Elastos_Droid_Calculator2_R_H__
#include <elatypes.h>
namespace Elastos {
namespace Droid {
namespace Calculator2 {
class ECO_PUBLIC R {
    public: class array {
        public: static const int operatorDescs = 0x7f080000;
    };
    public: class attr {
        /** <p>Must be a dimension value, which is a floating point number appended with a unit such as "<code>14.5sp</code>".
Available units are: px (pixels), dp (density-independent pixels), sp (scaled pixels based on preferred font size),
in (inches), mm (millimeters).
<p>This may also be a reference to a resource (in the form
"<code>@[<i>package</i>:]<i>type</i>:<i>name</i></code>") or
theme attribute (in the form
"<code>?[<i>package</i>:][<i>type</i>:]<i>name</i></code>")
containing a value of this type.
         */
        public: static const int maxTextSize = 0x7f010001;
        /** <p>Must be a dimension value, which is a floating point number appended with a unit such as "<code>14.5sp</code>".
Available units are: px (pixels), dp (density-independent pixels), sp (scaled pixels based on preferred font size),
in (inches), mm (millimeters).
<p>This may also be a reference to a resource (in the form
"<code>@[<i>package</i>:]<i>type</i>:<i>name</i></code>") or
theme attribute (in the form
"<code>?[<i>package</i>:][<i>type</i>:]<i>name</i></code>")
containing a value of this type.
         */
        public: static const int minTextSize = 0x7f010000;
        /** <p>Must be a dimension value, which is a floating point number appended with a unit such as "<code>14.5sp</code>".
Available units are: px (pixels), dp (density-independent pixels), sp (scaled pixels based on preferred font size),
in (inches), mm (millimeters).
<p>This may also be a reference to a resource (in the form
"<code>@[<i>package</i>:]<i>type</i>:<i>name</i></code>") or
theme attribute (in the form
"<code>?[<i>package</i>:][<i>type</i>:]<i>name</i></code>")
containing a value of this type.
         */
        public: static const int stepTextSize = 0x7f010002;
    };
    public: class color {
        /**  Default background color for the status bar. 
         */
        public: static const int calculator_accent_color = 0x7f050000;
        /**  Color to indicate an error has occured. 
         */
        public: static const int calculator_error_color = 0x7f050001;
        /**  Background color of the calculator display. 
         */
        public: static const int display_background_color = 0x7f050002;
        /**  Text color for the formula in the calculator display. 
         */
        public: static const int display_formula_text_color = 0x7f050003;
        /**  Text color for the result in the calculator display. 
         */
        public: static const int display_result_text_color = 0x7f050004;
        /**  Background color for the advanced pad. 
         */
        public: static const int pad_advanced_background_color = 0x7f050007;
        /**  Ripple color when a button is pressed in a pad. 
         */
        public: static const int pad_button_advanced_ripple_color = 0x7f05000b;
        /**  Text color for a button in the advanced pad. 
         */
        public: static const int pad_button_advanced_text_color = 0x7f050009;
        /**  Ripple color when a button is pressed in a pad. 
         */
        public: static const int pad_button_ripple_color = 0x7f05000a;
        /**  Text color for a button in a pad. 
         */
        public: static const int pad_button_text_color = 0x7f050008;
        /**  Background color for the numeric pad. 
         */
        public: static const int pad_numeric_background_color = 0x7f050005;
        /**  Background color for the operator pad. 
         */
        public: static const int pad_operator_background_color = 0x7f050006;
    };
    public: class dimen {
        /**  The margin between the pad pages when displayed using a view pager. 
         */
        public: static const int pad_page_margin = 0x7f060000;
    };
    public: class drawable {
        public: static const int pad_button_advanced_background = 0x7f020000;
        public: static const int pad_button_background = 0x7f020001;
    };
    public: class id {
        public: static const int clr = 0x7f0a0020;
        public: static const int const_e = 0x7f0a000c;
        public: static const int const_pi = 0x7f0a000b;
        public: static const int dec_point = 0x7f0a001b;
        public: static const int del = 0x7f0a001f;
        public: static const int digit_0 = 0x7f0a001c;
        public: static const int digit_1 = 0x7f0a0018;
        public: static const int digit_2 = 0x7f0a0019;
        public: static const int digit_3 = 0x7f0a001a;
        public: static const int digit_4 = 0x7f0a0015;
        public: static const int digit_5 = 0x7f0a0016;
        public: static const int digit_6 = 0x7f0a0017;
        public: static const int digit_7 = 0x7f0a0012;
        public: static const int digit_8 = 0x7f0a0013;
        public: static const int digit_9 = 0x7f0a0014;
        public: static const int display = 0x7f0a0001;
        public: static const int eq = 0x7f0a001d;
        public: static const int formula = 0x7f0a0002;
        public: static const int fun_cos = 0x7f0a0006;
        public: static const int fun_ln = 0x7f0a0008;
        public: static const int fun_log = 0x7f0a0009;
        public: static const int fun_sin = 0x7f0a0005;
        public: static const int fun_tan = 0x7f0a0007;
        public: static const int lparen = 0x7f0a000e;
        public: static const int op_add = 0x7f0a0024;
        public: static const int op_div = 0x7f0a0021;
        public: static const int op_fact = 0x7f0a000a;
        public: static const int op_mul = 0x7f0a0022;
        public: static const int op_pow = 0x7f0a000d;
        public: static const int op_sqrt = 0x7f0a0010;
        public: static const int op_sub = 0x7f0a0023;
        public: static const int pad_advanced = 0x7f0a0004;
        public: static const int pad_numeric = 0x7f0a0011;
        public: static const int pad_operator = 0x7f0a001e;
        public: static const int pad_pager = 0x7f0a0000;
        public: static const int result = 0x7f0a0003;
        public: static const int rparen = 0x7f0a000f;
    };
    public: class layout {
        public: static const int activity_calculator = 0x7f040008;
        public: static const int activity_calculator_land = 0x7f040000;
        public: static const int activity_calculator_port = 0x7f040001;
        public: static const int activity_calculator_tablet_port = 0x7f040002;
        public: static const int display = 0x7f040003;
        public: static const int pad_advanced = 0x7f040004;
        public: static const int pad_numeric = 0x7f040005;
        public: static const int pad_operator_one_col = 0x7f040006;
        public: static const int pad_operator_two_col = 0x7f040007;
    };
    public: class mipmap {
        public: static const int ic_launcher_calculator = 0x7f030000;
    };
    public: class string {
        public: static const int advanced = 0x7f07004b;
        /**  Name of the application. [CHAR_LIMIT=NONE] 
         */
        public: static const int app_name = 0x7f07000d;
        public: static const int basic = 0x7f07004a;
        public: static const int clear = 0x7f070041;
        public: static const int clearDesc = 0x7f07005b;
        public: static const int clear_history = 0x7f07004c;
        /**  Clear operation to clear the currently entered expression. [CHAR_LIMIT=3] 
         */
        public: static const int clr = 0x7f070020;
        /**  Constant for Euler's number (i.e. "2.7182…"). [CHAR_LIMIT=1] 
         */
        public: static const int const_e = 0x7f070000;
        /**  Constant for pi (i.e. "3.1415…"). [CHAR_LIMIT=1] 
         */
        public: static const int const_pi = 0x7f070001;
        public: static const int cos = 0x7f070043;
        public: static const int cosDesc = 0x7f07005e;
        /**  Decimal separator (e.g. "1.23"). [CHAR_LIMIT=1] 
         */
        public: static const int dec_point = 0x7f070010;
        /**  Delete operation to remove last entered token. [CHAR_LIMIT=3] 
         */
        public: static const int del = 0x7f070021;
        public: static const int delDesc = 0x7f07005a;
        /**  Content description for "clr" button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_clr = 0x7f070033;
        /**  Content description for 'e' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_const_e = 0x7f070022;
        /**  Content description for 'π' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_const_pi = 0x7f070023;
        /**  Content description for '.' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_dec_point = 0x7f070024;
        /**  Content description for "del" button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_del = 0x7f070034;
        /**  Content description for '=' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_eq = 0x7f070035;
        /**  Content description for 'cos' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_fun_cos = 0x7f070027;
        /**  Content description for 'ln' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_fun_ln = 0x7f070028;
        /**  Content description for 'log' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_fun_log = 0x7f070029;
        /**  Content description for 'sin' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_fun_sin = 0x7f07002a;
        /**  Content description for 'tan' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_fun_tan = 0x7f07002b;
        /**  Content description for '(' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_lparen = 0x7f070025;
        /**  Content description for '+' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_op_add = 0x7f07002c;
        /**  Content description for '÷' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_op_div = 0x7f07002d;
        /**  Content description for '!' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_op_fact = 0x7f07002e;
        /**  Content description for '×' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_op_mul = 0x7f07002f;
        /**  Content description for '^' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_op_pow = 0x7f070030;
        /**  Content description for '√' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_op_sqrt = 0x7f070031;
        /**  Content description for '-' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_op_sub = 0x7f070032;
        /**  Content description for ')' button. [CHAR_LIMIT=NONE] 
         */
        public: static const int desc_rparen = 0x7f070026;
        public: static const int digit0 = 0x7f070037;
        public: static const int digit1 = 0x7f070038;
        public: static const int digit2 = 0x7f070039;
        public: static const int digit3 = 0x7f07003a;
        public: static const int digit4 = 0x7f07003b;
        public: static const int digit5 = 0x7f07003c;
        public: static const int digit6 = 0x7f07003d;
        public: static const int digit7 = 0x7f07003e;
        public: static const int digit8 = 0x7f07003f;
        public: static const int digit9 = 0x7f070040;
        /**  Decimal representation of zero (e.g. "0", "10", "1.0", "1e0"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_0 = 0x7f070011;
        /**  Decimal representation of one (e.g. "1", "11", "1.1", "1e1"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_1 = 0x7f070012;
        /**  Decimal representation of two (e.g. "2", "22", "2.2", "2e2"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_2 = 0x7f070013;
        /**  Decimal representation of three (e.g. "3", "33", "3.3", "3e3"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_3 = 0x7f070014;
        /**  Decimal representation of four (e.g. "4", "44", "4.4", "4e4"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_4 = 0x7f070015;
        /**  Decimal representation of five (e.g. "5", "55", "5.5", "5e5"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_5 = 0x7f070016;
        /**  Decimal representation of six (e.g. "6", "66", "6.6", "6e6"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_6 = 0x7f070017;
        /**  Decimal representation of seven (e.g. "7", "77", "7.7", "7e7"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_7 = 0x7f070018;
        /**  Decimal representation of eight (e.g. "8", "88", "8.8", "8e8"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_8 = 0x7f070019;
        /**  Decimal representation of eight (e.g. "9", "99", "9.9", "9e9"). [CHAR_LIMIT=1] 
         */
        public: static const int digit_9 = 0x7f07001a;
        public: static const int divDesc = 0x7f070054;
        public: static const int dotDesc = 0x7f070058;
        public: static const int e = 0x7f070045;
        public: static const int eDesc = 0x7f07005f;
        /**  Equals operator (e.g. "1 + 2 = ?"). [CHAR_LIMIT=1] 
         */
        public: static const int eq = 0x7f07000b;
        public: static const int equalDesc = 0x7f070061;
        public: static const int error = 0x7f070036;
        /**  Error displayed when expression evaluates to NaN. [CHAR_LIMIT=14] 
         */
        public: static const int error_nan = 0x7f07000e;
        /**  Error displayed when expression contains a syntax error. [CHAR_LIMIT=14] 
         */
        public: static const int error_syntax = 0x7f07000f;
        public: static const int factorialDesc = 0x7f070050;
        /**  Abbrev. name of cosine function (e.g. "cos(π)". [CHAR_LIMIT=3] 
         */
        public: static const int fun_cos = 0x7f07001b;
        /**  Natural logarithm function (e.g. "ln(2)"). [CHAR_LIMIT=3] 
         */
        public: static const int fun_ln = 0x7f07001c;
        /**  Logarithm function (e.g. "log(10)"). [CHAR_LIMIT=3] 
         */
        public: static const int fun_log = 0x7f07001d;
        /**  Abbrev. name of sine function (e.g. "sin(π)". [CHAR_LIMIT=3] 
         */
        public: static const int fun_sin = 0x7f07001e;
        /**  Abbrev. name of tangent function (e.g. "tan(π)". [CHAR_LIMIT=3] 
         */
        public: static const int fun_tan = 0x7f07001f;
        /**  Result displayed when expression evaluates to infinity. [CHAR_LIMIT=1] 
         */
        public: static const int inf = 0x7f07000c;
        public: static const int leftParen = 0x7f070048;
        public: static const int leftParenDesc = 0x7f07004e;
        public: static const int lg = 0x7f070047;
        public: static const int lgDesc = 0x7f070052;
        public: static const int ln = 0x7f070046;
        public: static const int lnDesc = 0x7f070051;
        /**  Left parenthesis (e.g. "log(", "2 × (3 - 1)". [CHAR_LIMIT=1] 
         */
        public: static const int lparen = 0x7f070002;
        public: static const int minusDesc = 0x7f070057;
        public: static const int mulDesc = 0x7f070055;
        /**  Addition operator (e.g. "1 + 2"). [CHAR_LIMIT=1] 
         */
        public: static const int op_add = 0x7f070004;
        /**  Divide operator (e.g. "1 ÷ 2"). [CHAR_LIMIT=1] 
         */
        public: static const int op_div = 0x7f070005;
        /**  Factorial operator (e.g. "2!"). [CHAR_LIMIT=1] 
         */
        public: static const int op_fact = 0x7f070006;
        /**  Multiply operator (e.g. "1 × 2"). [CHAR_LIMIT=1] 
         */
        public: static const int op_mul = 0x7f070007;
        /**  Power operator (e.g. "1 ^ 2"). [CHAR_LIMIT=1] 
         */
        public: static const int op_pow = 0x7f070008;
        /**  Square root operator (e.g. "√1"). [CHAR_LIMIT=1] 
         */
        public: static const int op_sqrt = 0x7f070009;
        /**  Subtraction operator (e.g. "1 - 2"). [CHAR_LIMIT=1] 
         */
        public: static const int op_sub = 0x7f07000a;
        public: static const int piDesc = 0x7f070060;
        public: static const int plusDesc = 0x7f070056;
        public: static const int powerDesc = 0x7f070059;
        public: static const int rightParen = 0x7f070049;
        public: static const int rightParenDesc = 0x7f07004f;
        /**  Right parenthesis (e.g. "log(2)", "(3 - 1) × 2". [CHAR_LIMIT=1] 
         */
        public: static const int rparen = 0x7f070003;
        public: static const int sin = 0x7f070042;
        public: static const int sinDesc = 0x7f07005d;
        public: static const int sqrtDesc = 0x7f070053;
        public: static const int tan = 0x7f070044;
        public: static const int tanDesc = 0x7f07005c;
        public: static const int text_copied_toast = 0x7f07004d;
    };
    public: class style {
        public: static const int CalculatorTheme = 0x7f090000;
        public: static const int DisplayEditTextStyle = 0x7f090001;
        public: static const int DisplayEditTextStyle_Formula = 0x7f090004;
        public: static const int DisplayEditTextStyle_Result = 0x7f090005;
        public: static const int PadButtonStyle = 0x7f090002;
        public: static const int PadButtonStyle_Advanced = 0x7f090006;
        public: static const int PadButtonStyle_Numeric = 0x7f090007;
        public: static const int PadButtonStyle_Numeric_Equals = 0x7f090008;
        public: static const int PadButtonStyle_Operator = 0x7f090009;
        public: static const int PadButtonStyle_Operator_Text = 0x7f09000a;
        public: static const int PadLayoutStyle = 0x7f090003;
        public: static const int PadLayoutStyle_Advanced = 0x7f09000b;
        public: static const int PadLayoutStyle_Numeric = 0x7f09000c;
        public: static const int PadLayoutStyle_Operator = 0x7f09000d;
        public: static const int PadLinearLayoutStyle = 0x7f09000e;
    };
    public: class styleable {
        /** Attributes that can be used with a CalculatorEditText.
           <p>Includes the following attributes:</p>
           <table>
           <colgroup align="left" />
           <colgroup align="left" />
           <tr><th>Attribute</th><th>Description</th></tr>
           <tr><td><code>{@link #CalculatorEditText_maxTextSize Elastos.Droid.Calculator2:maxTextSize}</code></td><td></td></tr>
           <tr><td><code>{@link #CalculatorEditText_minTextSize Elastos.Droid.Calculator2:minTextSize}</code></td><td></td></tr>
           <tr><td><code>{@link #CalculatorEditText_stepTextSize Elastos.Droid.Calculator2:stepTextSize}</code></td><td></td></tr>
           </table>
           @see #CalculatorEditText_maxTextSize
           @see #CalculatorEditText_minTextSize
           @see #CalculatorEditText_stepTextSize
         */
        public: static const int CalculatorEditText[3];
        /**
          <p>This symbol is the offset where the {@link Elastos.Droid.Calculator2.R.attr#maxTextSize}
          attribute's value can be found in the {@link #CalculatorEditText} array.


          <p>Must be a dimension value, which is a floating point number appended with a unit such as "<code>14.5sp</code>".
Available units are: px (pixels), dp (density-independent pixels), sp (scaled pixels based on preferred font size),
in (inches), mm (millimeters).
<p>This may also be a reference to a resource (in the form
"<code>@[<i>package</i>:]<i>type</i>:<i>name</i></code>") or
theme attribute (in the form
"<code>?[<i>package</i>:][<i>type</i>:]<i>name</i></code>")
containing a value of this type.
          @attr name android:maxTextSize
        */
        public: static const int CalculatorEditText_maxTextSize = 1;
        /**
          <p>This symbol is the offset where the {@link Elastos.Droid.Calculator2.R.attr#minTextSize}
          attribute's value can be found in the {@link #CalculatorEditText} array.


          <p>Must be a dimension value, which is a floating point number appended with a unit such as "<code>14.5sp</code>".
Available units are: px (pixels), dp (density-independent pixels), sp (scaled pixels based on preferred font size),
in (inches), mm (millimeters).
<p>This may also be a reference to a resource (in the form
"<code>@[<i>package</i>:]<i>type</i>:<i>name</i></code>") or
theme attribute (in the form
"<code>?[<i>package</i>:][<i>type</i>:]<i>name</i></code>")
containing a value of this type.
          @attr name android:minTextSize
        */
        public: static const int CalculatorEditText_minTextSize = 0;
        /**
          <p>This symbol is the offset where the {@link Elastos.Droid.Calculator2.R.attr#stepTextSize}
          attribute's value can be found in the {@link #CalculatorEditText} array.


          <p>Must be a dimension value, which is a floating point number appended with a unit such as "<code>14.5sp</code>".
Available units are: px (pixels), dp (density-independent pixels), sp (scaled pixels based on preferred font size),
in (inches), mm (millimeters).
<p>This may also be a reference to a resource (in the form
"<code>@[<i>package</i>:]<i>type</i>:<i>name</i></code>") or
theme attribute (in the form
"<code>?[<i>package</i>:][<i>type</i>:]<i>name</i></code>")
containing a value of this type.
          @attr name android:stepTextSize
        */
        public: static const int CalculatorEditText_stepTextSize = 2;
    };
};
};
};
};

#endif // __Elastos_Droid_Calculator2_R_H__
