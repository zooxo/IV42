/*

//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8

This software is protected by the BSD 3-Clause License and
copyright (c) 2015-2021, SwissMicros. All rights reserved.

Changes and additions are protected by the BSD 3-Clause License
and made by deetee, (c) 2022. All rights reserved.

//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8

```
Welcome to IV42 - A Programable Calculator for the DM42 Hardware based on FORTH

____________________

 PREAMBLE
____________________

The DM42 calculator is a genuine device. A brilliant LCD display, good keys, a
USB disk and a powerful processor - all low powered by a single battery cell.
On the very stable operating system (DMCP) runs Free42 - a perfect simulator of
the legendary HP42 calculator. Using an 128-bit floating point library makes it
the "most precise calculator in the world".

As the DM42 is an "open system" it is possible to run other software on top of
the operating system (DMCP). And that is, where IV42 comes in. IV42 is a small,
fast, simple, convenient and powerful calculator that integrates to the DM42
hardware (primarily the keyboard layout) in an optimal way. There is no need for
particular key labels or stencils!

IV42 has a slightly different approach to operate a scientific RPN calculator:

First - IV42 is FORTH orientated. It operates a big stack (actual 26 registers
from A to Z). Main part of FORTH is the dictionary, an alphabetical sorted
list of all commands and user programs. By the way the name IV or IVEE stands
for the roman number 4, which was also a reason for naming FORTH (4th
generation of programming languages).

The second and most obvious difference is the (very) big number display. IV42
shows the top of the stack (TOS) in an unusual big design. So it is possible
to operate the calculator under very bad light conditions.

The third difference are the 18 (!) function keys (3 rows of 6 top keys). So
you can fast and easy access commands, physical constants, unit conversions,
user programs or even ascii characters.

The fourth difference is, that IV42 always calculates with complex numbers.
Aside from all functions it is even possible to handle complex matrices or
complex hexadecimal numbers.

The fifth mentionable difference is the use of an exclusive ON/OFF key (EXIT)
like HP used it for the voyager series.

In addition IV42 offers of course many features like the original calculator:
* Programming (edit or load/save user programs from/to USB disk)
* Calculus (value, slope, root, integral and plot of a function)
* Physical constants (CODATA)
* Useful conversion functions
* Assignable function keys
* Hexadecimal numbers
* Matrices
* Statistics, line best fit, probabilities, normal distribution
* ...

Have fun!
deetee


____________________

 INSTALLATION
____________________

Please note that you will loose all user data of your DM42 (ie. user programs or
settings) - make a backup!

Install IV42:

 * First load IV42-xxx.pgm and (for desired later back switch to DM42)
   DM42-x.xx.pgm (technical.swissmicros.com/dm42/firmware/) to the root directory
   of the USB disk.
 * In your DM42 calculator goto SETUP (SHIFT-0)
 * Enter menu point [5. System >]
 * Goto system menu with [2. Enter System Menu]
 * Leave DM42 and switch back to the operating system (DMCP) with
   [3. Reset to DMCP menu]
 * Load another program with [3. Load Program]
 * Select the IV42 program [IV42-xxx.pgm]
 * [Confirm with ENTER]
 * [Press any key to start]
 * [Press EXIT to continue ...]
 * You are running IV42 - have fun!

Reinstall DM42:

 * Switch back to the operating system (DMCP) with SETUP (SHIFT-0)
 * Load another program with [3. Load Program]
 * Select the DM42 program [DM42-x.xx.pgm]
 * [Confirm with ENTER]
 * [Press any key to start]
 * [Press EXIT to continue ...]
 * You are running DM42 - thanks for trying IV42


____________________

 HELP FILE
____________________

To view the HTML help file (iv42help.htm) execute the command HELP or press the
button [CUSTOM]. To view a help image (iv42help.bmp) execute the command IMG or
press the button [v]. Please note that both files have to be on the USB disk in
the folder IV42.


____________________

 DISPLAY
____________________

In general the display consists of three sections (status line, TOS and F-keys).
Please note that you can invert the display for each section by using the
command DISP or pressing the button [DISP].

The status line shows on the left side text/error messages (see chapter
messages), titles or the alpha stack and on the right side system annunciators
(see chapter annunciators).

The TOS section shows the number on the top of the stack in big digits. Please
note that you can view the TOS with all available digits (double format) in the
status line by selecting SHOW or [SHOW].

In the F-key section you can see the labels for all 18 (3 rows with 6 keys)
function keys.

Finally there are specific display structures for plotting functions (see
chapter plotting) or editing programs (see chapter programming).


____________________

 MESSAGES
____________________

 ERROR       Infinite operation
 FILE ERROR  File loading error
 HOLD        Program on hold
 LOADED      File loaded
 LOOP ERROR  Loop, nest or condition error
 NO PROGRAM  Desired program not loaded
 NO SPACE    No space to insert
 RUNNING     Running (solve, integrate, plot calculation)
 SAVED       File saved
 STOPPED     Program stopped


____________________

 ANNUNCIATORS
____________________

Annunciators (6 most right characters of status line): AxCR09

 A Stack level (A-Z, ! stack floated)
 x HEX view
 C Complex number
 R Complex number input mode (Rectangular or Polar)
 0 HYP-flag (h), menu level or complex view (real, imaginary, absolute, °angle)
 9 Battery level (9...>=3V, 0...<=2.5V)
   Note: At level 0 you get serious problems accessing the USB disk.


____________________

 DICTIONARY
____________________

The most important part of a FORTH system is the dictionary where all commands
(words) and user program names are listed in an alphabetical order. You can
call the dictionary with the command DICT, the button [CATALOG] or simply by
pressing the key [^]. To select the demanded command press the appropriate
F-key.

Please note that you can assign every command or user program to the top
F-keys to execute it with one (with SHIFT at least two) keypress(es).


____________________

 REALLY SUPER KEY
____________________

Because of the good position on the keyboard the R/S key ('Really Super Key') is
used multifunctional.

Per default it works as DUP or [ENTER] key to optimize fast 'number crunching'.

But if TOS is a complex number (note the C annunciator) the R/S key enters (and
leaves) the complex view mode (see chapter Complex Numbers).

In any menu (ie dictionary) the R/S key works like DROP or [<=] to exit the menu.

If an user program interrupts (HOLD) (for intermediate calculations) the R/S key
continues the execution of the user program.

Last, but not least - if you prepare a screenshot (with [SHIFT] and [DISP]
simultaneously) - the next pressed R/S key makes a screenshot.


____________________

 BROWSING MENUS
____________________

Menus (dictionary, constants, selecting ascii character) use the 18 function
keys to choose the appropriate selection. For navigation use special keys:

 [^] prev   [7] 2 x prev   [8] home       [<=] exit menu
 [v] next   [4] 2 x next   [5] end
            [1] 2 x prev   [2] 2 x next
            [0] prev       [.] next       [R/S] exit menu

Every other key exits the menu.


____________________

 COMPLEX NUMBERS
____________________

IV42 calculates always with complex numbers (in rectangular form).

The desired complex number input mode (Rectangular or Polar) can be selected
with Cmod or [MODES] - have also a look to the R or P annunciator.

If a complex number is on the TOS the C annunciator will be shown.

To enter a complex number enter the real part (R mode) respectively absolute
value (P mode) and the imaginary part (R mode) respectively angle (P mode) to
the stack and press CPLX or [COMPLEX]. This works vice versa.
Please note that only the real part (R mode) or absolute value (P mode) will be
shown on the display.

To view all parts of a complex number switch with R/S or [R/S] to the complex
number viewing mode. Another annunciator (real, imaginary, absolute, °angle)
appears. In this menu the following keys have special functions:

 [ENTER] push value to stack and exit mode
 [^] prev part   [7] real part       [8] imaginary part   [<=] exit mode
 [v] next part   [4] absolute part   [5] angle part
                 [0] prev part       [.] next             [R/S] exit mode


____________________

 PROGRAMMING
____________________

IV42 offers 18 slots to manage user programs. You can save every user program to
USB disk or load a program from USB disk to a slot.

To select a program slot press Psel or [GTO] and choose a slot. The following
operations can be done with a selected program:

 Pdel           Delete the selected program
 Pedt [PRGM]    Edit the selected program (see below)
 Pfcn [PGM.FCN] Top f key menu for programs (see below)
 Plod [SST]     Load a program from USB disk to the selected slot
 Pren           Rename the selected program (must be exactly 4 characters)
 Psav [BST]     Save the selected program to USB disk

With Pfcn or [PGM.FCN] you can open a special top f-key menu for editing (EDIT),
renaming (REN) deleting (DEL), loading (LOAD) or saving (SAVE) a program.

The program editor lists up to 6 steps of the user program. In addition it shows
the line number, the name and size of the program. Also the current position
(cursor) and the 'byte-position' are apparent. On the bottom of the screen
special top f-keys are offered to insert a command from the dictionary (INS), to
move the cursor fast (PG^, PGv, HOME, END) and to delete a step (DEL).
Of course you can use the cursor keys ([^] or [v]) to move the cursor up or down.
Please note that there is a fast way to insert numbers and some commands by
pressing the appropriate key or shifted key directly.
Drop [<=] or R/S [R/S] exits the editor.


____________________

 CALCULUS
____________________

To examine a mathematical function y=f(x) write a program to calculate this
function (see chapter programming).

If this program is selected (Psel or [GTO]) you can calculate a function value
(execute the program name or [XEQ]), find a root (Fslv or[SOLVER]), integrate
(Fint or [INTEGRAL]), calculate the slope (Fslp) or plot the function (Fplt or
[PRINT]).

Please note that you have to prepare initial values to the stack first (a
x-value for calculating a function value, a start value for solving, a lower and
upper limit for integrating, an x-value for calculating the slope or a lower and
upper limit for plotting).


____________________

 PLOTTING
____________________

When plotting a function (see chapter Calculus) the following keys have special
functions:

 [^] zoom in
 [v] zoom out      [0] leftshift x-limits   [.] rightshift x-limits

Every other key exits plotting.

Please note that leaving a function plot pushes the current values of the
lower/upper x-limit and minimum/maximum function value (y) to the stack.


____________________

 MATRICES
____________________

IV42 can handle 3x3 matrices (+, -, *, /, det, transpose, invert, load
elements from the stack, save elements to the stack).

Open the matrix menu with MAT od [MATRIX]. In the status line you see the name
of the main matrix A or the supporting matrix B (switch with [SHIFT]), the
number of the row and column and the ASSIGN- or VIEW-mode (switch with [E]).

The top f-keys did change to supporting matrix functions:

 DET   Push the determinant of A to the stack
 TRANS Transpose the selected (A or B) matrix
 COPY  Copy the selected matrix (A or B) to the other (B or A)
 LOAD  Pop 9 values from the stack to the matrix (TOS => 3|3)
 SAVE  Push all 9 matrix values to the stack (3|3 => TOS)
 MCLR  Clears matrix A and B

In addition the following keys are available:

 [SHIFT]   Toggle matrix A and B
 [E]       Toggle ASSIGN and VIEW mode
 [^][v]    Up/down one row
 [0][.]    Left/right one col
 [/]       Invert matrix A
 [*]       A*B
 [-]       A-B
 [+]       A+B
 [x><y]    Swap matrix A and B
 [ENTER]   Pushes viewed (VIEW mode) matrix element to stack
 [<=][R/S] Exit matrix mode

PLease note that the matrix elements can be acessed by the cursor keys up or
down ([^] or [v]), left or right ([0] or [.]) respectively the corresponding
number keys 1-9 in a direct way.
For example to assign a number to A(1|3) enter the number, open the matrix menu
([MATRIX]), select matrix A ([SHIFT]) and ASSIGN ([E]) and push [9] (row 1,
column 3). To view the matrix element A(1|3) select matrix A ([SHIFT]) and VIEW
([E]) and push [9].


____________________

 CONVERSIONS
____________________

IV42 is able to convert common units (see commands starting with '>').

But there is also a comfortable menu to choose the desired conversion:
Enter the number to convert to the TOS and press [CONVERT] (or execute CONV) and
select one of the following 18 function keys (convert to ...):

 km  mi    m  ft    cm  in
 kg  lbs   l  gal   °F  °C
 deg rad   h  hms   kW  HP


____________________

 COMMANDS AND KEYS
____________________

Please note the abbreviations TOS (Top Of Stack) and TOS-1 (next element on
the stack), TOS-2, ...

CMD  KEY           EXPLANATION
--------------------------------------------------------------------------------
     [EXIT]    ... Exclusive ON/OFF key
     [SHIFT]   ... Shift key or toggle matrix A<=>B (see chapter matrices)
0-9.           ... Digits and decimal point
+ - * /        ... Basic operations
%    [%]       ... Percent (TOS / TOS-1 * 100%)
%C             ... Percent change ((TOS - TOS-1) / TOS-1 *100%)
<>? <? =? >?   ... Conditions (not equal, less then, equal, greater then)
>KM  >MI       ... Convert Kilometer an Miles
>M   >FT       ... Convert Meter and Feet
>CM  >IN       ... Convert Centimeter and Inches
>KG  >LBS      ... Convert Kilogram and Pounds
>L   >GAL      ... Convert Liter and Gallons
>C   >F        ... Convert Celsius and Fahrenheit
>DEG >RAD      ... Convert Degrees and Radians
>H   >HMS      ... Convert Hours and Hours.MinutesSeconds
>KW  >HP       ... Convert Kilowatt and Horsepowers
ABS            ... Absolute value of TOS
ACOS [ACOS]    ... Arcus cosine (inverse)
AND            ... Logical AND
ASGN [ASSIGN]  ... Assign command to top F-Key (TOS, 1-12)
ASIN [ASIN]    ... Arcus sine (inverse)
ATAN [ATAN]    ... Arcus tangent (inverse)
BEG            ... Begin a BEGIN-UNTIL-loop
CHS  [+/-]     ... Change sign (negate)
CLK            ... Runs TIME until break ([R/S] or [<=])
CLR  [CLEAR]   ... Clear stack
CONS [FLAGS]   ... Physical constants (CODATA)
CONV [CONVERT] ... Unit conversions
COS  [COS]     ... Cosine (of angle in degrees)
CPLX [COMPLEX] ... Enter/deenter complex number (TOS-1, TOS)(see Cmod, R/S)
Cmod [MODES]   ... Toggle complex number input mode (Rectangular or Polar)
DICT [CATALOG] ... Dictionary
DISP [DISP]    ... Change display color or screenshot (hold SHIFT)
DROP [<=]      ... Drop TOS
DUP  [ENTER]   ... Enter number input or duplicate TOS
E    [E]       ... Scientific notation
ELSE           ... Execute following code if IF failed
EXP  [e^x]     ... Exponential value
F1-F12         ... Top F-keys (2x6)
FRAC           ... Fractional value of TOS
Fint [INTGRT]  ... Integrate selected user program (from TOS-1 to TOS)
Fplt [PRINT]   ... Plot selected user program (from TOS-1 to TOS)
Fslp           ... Slope of selected user program at TOS
Fslv [SOLVE]   ... Solve selected user program (close to start value TOS)
HELP [CUSTOM]  ... Browse html file /IV42/iv42help.htm
HEX            ... Toggle HEX DEC view
HOLD           ... Interrupt program execution (R/S key continues)
HYP            ... Switch trigonometic to hyperbolic functions (and vice versa)
IF             ... Execute following code if true
INT            ... Integer value of TOS
INV  [1/x]     ... Inverse
IMG  [v]       ... View help image /IV42/iv42help.bmp
KEY?           ... Interrupt program execution until keypress
LN   [LN]      ... Natural logarithm
LN!            ... Natural logarithm of gamma of TOS
LOG  [LOG]     ... 10 based logarithm
L.R.           ... Linear regression (line best fit: y = TOS * x + TOS-1)
LSTx [LASTx]   ... Pushe last popped number to stack
MAT  [MATRIX]  ... Matrix menu
MOD            ... Modulo
NAND           ... Logical NAND
ND             ... Normal Distribution (PDF and CDF)
NOT            ... Logical NOT
OR             ... Logical OR
OVER           ... Copy TOS-1 to TOP
P/C  [PROB]    ... Permutations (nPr, TOS-1) and Combinations (nCr, TOS)
PAUS           ... Pause program execution for TOS * 250 ms and print screen
PI   [PI]      ... PI
PICK           ... Copy TOS-th stack element to stack
POL?           ... Check if complex mode is polar (1) or rectangular (0)
PVAL           ... Present value of given interest rate and periods
PW10 [10^x]    ... 10 raised to the power or TOS
PWR  [y^x]     ... TOS-1 raised to the power of TOS
Pdel           ... Delete selected user program
Pedt [PRGM]    ... Edit selected user program
Plod [SST]     ... Load user program from USB disk to selected program slot
Pfcn [PGM.FCN] ... Fade in top F-keys for treating selected programs
                   (EDIT, REN, DEL, LOAD, SAVE)
Pren           ... Rename selected user program (4 characters exactly)
Psav [BST]     ... Save selected user program to USB disk
Psel [GTO]     ... Select user program for further treatment
QEQN           ... Quadratic equation (xx + TOS-1 * x + TOS = 0)
R/S  [R/S]     ... 'Really Super Key'
RE?            ... Check if TOS is real (1) or complex (0)
RCL  [RCL]     ... Recall value from register TOS to stack
ROT  [Rv]      ... Rotate/move TOS-2 to TOS
SHFT [SHIFT]   ... Shift key or swap matrices A and B
SHOW [SHOW]    ... Show TOS in status line
SIN  [SIN]     ... Sine (of angle in degrees)
SQR  [x^2]     ... Square
SQRT [SQRT]    ... Square root
STAT [STAT]    ... Statistics: Mean value (TOS) and standard deviation (TOS-1)
STKS           ... Sum of all stack elements
STO  [STO]     ... Store TOS-1 to register TOS (0-9)
SUM+ [SUM+]    ... Enter X- or YX-data (STAT, LR)
                   (uses registers 5-9: 5XX, 6XY, 7n, 8X, 9Y)
SUM- [SUM-]    ... Remove X- or YX-data (STAT, LR)
SUMc           ... Clear statistic registers (register 5-9)
SWAP [x><y]    ... Swap TOS and TOS-1
TAN  [TAN]     ... Tangent (of angle in degrees)
THEN           ... Terminate IF/ELSE condition
TIME           ... Push time of RTC to stack (24h format)
Tclr           ... Clear alpha stack (see Tput)
Tput [ALPHA]   ... Push ascii character (TOS) to alpha stack (status line)
UNTL           ... Continue executing a BEGIN-UNTIL-loop until TOS is true
UP   [^]       ... Up (menu navigation) and [v] (down)
XEQ  [XEQ]     ... Execute selected user program


____________________

 PHYSICAL CONSTANTS
____________________

To enter the constants menu press [FLAGS] (or CONS).

 c    299792458         Speed of light
 g    9.80665           Acceleration of gravity
 G    6.67430e-11       Newton constant of gravity
 Vm   0.02271095464     Molar volume of ideal gas
 NA   6.02214076e23     Avogadro constant
 Rinf 10973731.568160   Rydberg constant
 e    1.602176634e-19   Elementary charge
 me   9.1093837015e-31  Electron mass
 mp   1.67262192369e-27 Proton mass
 mn   1.67492749804e-27 Neutron mass
 mmu  1.883531627e-28   Muon mass
 k    1.380649e-23      Boltzmann constant
 h    6.62607015e-34    Planck constant
 Phi0 2.067833848e-15   Magnetic flux quantum
 a0   5.29177210903e-11 Bohr radius
 eps0 8.8541878128e-12  Vacuum electric permittivity
 R    8.314462618       Molar gas constant
 F    96485.33212       Faraday constant
 mU   1.6605390666e-27  Atomic mass constant
 mu0  1.25663706212e-6  Vacuum magnetic permeability
 muB  9.2740100783e-24  Bohr magneton
 muN  5.0507837461e-27  Nuclear magneton
 mup  1.41060679736e-26 Proton magnetic moment
 mue  -9.2847647043e-24 Electron magnetic moment
 mun  -9.6623651e-27    Neutron magnetic moment
 mumu -4.4904483e-26    Muon magnetic moment
 re   2.8179403262e-15  Electron radius
 Z0   376.730313668     Impedance of vacuum
 alph 7.2973525693e-3   Fine structure constant
 sigm 5.670374419e-8    Stefan-Boltzmann constant
 t    273.15            Celsius temperature
 atm  101325            Standard atmosphere
 gamp 2.6752218744e8    Proton gyromagnetic ratio
 C1   3.741771852e-16   First radiation constant
 C2   1.438776877e-2    Second radiation constant
 G0   7.748091729       Conductance quantum


____________________

 ASCII TABLE
____________________

 DEC     |  0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5
     HEX |  0 1 2 3 4 5 6 7 8 9 a b c d e f
 ------------------------------------------
 032 20  |    ! " # $ % & ' ( ) * + , - . /
 048 30  |  0 1 2 3 4 5 6 7 8 9 : ; < = > ?
 064 40  |  @ A B C D E F G H I J K L M N O
 080 50  |  P Q R S T U V W X Y Z [ \ ] ^ _
 096 60  |  ` a b c d e f g h i j k l m n o
 112 70  |  p q r s t u v w x y z { | } ~

Special font characters:
 [] ... Up and down arrow
 `  ... Degree character '°'
 {} ... Left and right arrow
 ~  ... Small/narrow dot separator



```

//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8

____________________

 FONT, CMD, MP
____________________

6x7-font: S_12x28 (scale 2|4), M_18x42 (scale 3|6), L_36x84 (scale 6|12)


       MAXCMDI
          v
CMD  0...144 145 ... 163
             0   ...  17
             |--MAXPRG-|


             sizeof(mem)
                 v
MP   |--- mem ---|-MAXPRGLEN-|-MAXPRGLEN-| ... |
                    prgnr 0     prgnr 1    ...

*/


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  I N C L U D E S  &  P R O T O T Y P E S

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <dmcp.h>

#define TRUE  1
#define FALSE 0
#define byte uint8_t // Define type byte

static void _cdseek(void);
static void _dup(void);
static void _inv(void);
static void _mult(void);
static void _negate(void);
static void _storcl(byte);
static void loadprg(void);
static void saveprg(void);
static void execute(byte);
static void _swap(void);


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  D E F I N E S   &   C O N V E R S I O N S

#define BLACK 0xff // Color black
#define WHITE 0x00 // Color white

#define MAXSTRLEN 37 // Maximal size of string
#define STACKSIZE 26 // Stack size
#define REGISTER 10 // Number of registers for STO/RCL
#define ADDRSTACKSIZE 64 // ADDRESS STACK

#define FKEYNR 18 // Number of (virtual) F-Keys

#define MAXCMDK 86 // Number functions reachable with keys
#define MAXCMDI 144 // Number of intrinsic functions (multiple of 18)

#define TOSY1 49 // TOS y-coordinate 1
#define TOSY2 144 // TOS y-coordinate 2

#define MAXPRG 18 // Number of user programs
#define MAXPRGLEN 100 // Size of user program
#define NLEN 4 // Length of program names

#define PI 3.1415926535897932384626
#define RAD ((180.0)/(PI)) // 180/PI
#define ALMOSTZERO 1e-10 // Needed to determine 0 values (isreal())

#define VIEWMAX   4 // Maximal number of complex views
#define VIEWRE    1 // Complex view - rectangular
#define VIEWIM    2 // Complex view - imaginary
#define VIEWABS   3 // Complex view - absolute
#define VIEWANGLE 4 // Complex view - angle

#define _MA 0 // Matrix A
#define _MB 1 // Matrix B
#define _MC 2 // Matrix C

#define DELTAX 1E-4 // Delta for solver or slope
#define INTSTRIPES 10 // Number of Simpson stripes for integrating

#define PLTPIX 8 // Pixel size of plot spot
#define PLTX 50 //400/PLTPIX // Plot spots - x
#define PLTY 29 //240/PLTPIX // Plot spots - y

//  --Key------------------     --Key Code-------     --Function-------
//  F1  F2  F3  F4  F5  F6      38 39 40 41 42 43     25 26 27 28 29 30
//  SUM 1/X SQR LOG LN  XEQ     1  2  3  4  5  6      31 32 33 34 35 36
//  STO RCL ROT SIN COS TAN     7  8  9  10 11 12     37 38 39 40 41 42
//      ETR SWP CHS E   BSP        13 14 15 16 17        20 19 18 17 16
//      UP  7   8   9   /          18 19 20 21 22        21  7  8  9 15
//      DN  4   5   6   *          23 24 25 26 27        22  4  5  6 14
//      SH  1   2   3   -          28 29 30 31 32        23  1  2  3 13
//      EXT 0   .   RS  +          33 34 35 36 37        24  0 10 11 12

static const byte key2fn[]={0, //0 (not used) - Convert key to function
  31, 32, 33, 34, 35, 36, //  1(SUM)   ... 6(XEQ)
  37, 38, 39, 40, 41, 42, //  7(STO)   ... 12(TAN)
      20, 19, 18, 17, 16, // 13(ENTER) ... 17(BACKSPACE)
      21, 7,  8,  9,  15, // 18(UP)    ... 22(/)
      22, 4,  5,  6,  14, // 23(DOWN)  ... 27(*)
      23, 1,  2,  3,  13, // 28(SHIFT) ... 32(-)
      24, 0,  10, 11, 12, // 33(EXIT)  ... 38(+)
  25, 26, 27, 28, 29, 30  // 38(F1)    ... 43(F6)
};


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  U T I L S

#define ones(x) ((x)%10)       // Ones digit of integer
#define tens(x) (((x)/10)%10)  // Tens digit of integer
#define huns(x) (((x)/100)%10) // Huns digit of integer
#define _min(a,b) (((a)<(b)) ? (a) : (b)) // Minimum
#define _max(a,b) (((a)>(b)) ? (a) : (b)) // Maximum
#define i2c(x) ((x)+'0') // Converts int-digit (0-9) to char (+'0')

static double _abs(double f) { // Returns absolute
  return(f<0.0 ? -f : f);
}

static void beep(){ // Single beep
  start_buzzer_freq(1000*1000); sys_delay(10); stop_buzzer();
}

static void make_screenshot(){ // Make screenshot
  beep();
  if(create_screenshot(1)==2) wait_for_key_press(); // Wait if error
}

static byte isdig(char n){ // True, if n = 0...9
  return((n>='0' && n<='9') ? TRUE : FALSE);
}

static void strfill(char * s, char c, byte n){ // Fill string with n chars
  for(byte i=0; i<n; i++) s[i]=c;
  s[n]='\0';
}
static void strdelpos(char * s, byte n){ // Delete n-th char from string
  memcpy(s+n, s+n+1, strlen(s)-n);
}

static void strstrat(char * s, char * s1, byte pos){ // Write s1 to s at pos
  memcpy(s+pos, s1, strlen(s1));
}
static void strintat(char * s, byte n, byte pos){ // Int (<100) to s at pos
  s[pos+1]=i2c(ones(n)); if(n>9) s[pos]=i2c(tens(n));
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  G L O B A L   V A R I A B L E S

static byte color=0x04; // Color flags of STATUS (0x01), TOS (0x02), FKEY (0x04)
static byte isprintscreen=TRUE; // Print screen if TRUE
static byte isshift; // Shift status
static byte isedit;  // True, if number ist edited
static byte isshow=FALSE; // Shows TOS isn status line id true
static byte isfloated=FALSE; // True, if stack was floated
static byte ispolar=FALSE; // Show imaginary number in polar format
static byte isdict=FALSE; // True, if dictionary is demanded
static byte sel=0; // Menu selection number
static byte isassign=FALSE; // True, if a F-key should be assigned
static byte ishyp=FALSE; // True, if TRIG is interpreted as HYP
static byte isconvert=FALSE; // True for conversion menu
static byte isphys=FALSE; // True for physical constants menu (flags-key)
static byte isprg=FALSE; // True if program should be treated
static byte isprgsel=FALSE, isprgedit=FALSE, isprgins=FALSE; // Select, edit or insertstep
static byte isselasc=FALSE; // True when selecting an ascii character
static byte ishex=FALSE; // True when working with hex numbers
static byte isprintalpha=FALSE; // Print alpha if true
static int holdmp=0; // Holds mp, while user prg stops (continue with R/S)
static byte isscreen=FALSE; // Next R/S makes screenshot
static byte isimgview=FALSE; // View image

static char ed[MAXSTRLEN]; // Number editor string
static byte dotchar='.', expchar='E'; // Character of dot and exponent
static char sline[MAXSTRLEN+1]; // Line buffer string
static int mp=0; // Mempointer for builtin functions
static byte view=0; // Complex number view (1=re 2=im 3=abs 4=angle)
static byte fkeys[12]; // F-key commands
static byte cmdsort[MAXCMDI+MAXPRG]; // Alphabetically sorted commands for DICT
static char alpha[MAXSTRLEN]=""; // String for user text output
static byte pause=0; // Pause

static byte msgnr=0; // Message number
#define MSGASK 0
#define MSGSHIFT 1
#define MSGERROR 2
#define MSGNEST 3
#define MSGSPACE 4
#define MSGFILE 5
#define MSGSAVED 6
#define MSGLOADED 7
#define MSGSTOP 8
#define MSGHOLD 9
#define MSGPRG 10
#define MSGRUN 11
char * const msg[]={ // Message text
  "?","SHIFT","ERROR","LOOP ERROR", "NO SPACE",
  "FILE ERROR", "SAVED", "LOADED", "STOPPED", "HOLD",
  "NO PROGRAM", "RUNNING"
};

struct data {double r,i;}; // Structure for numbers

struct data lastx=(struct data){0.0, 0.0}; // LASTx
struct data reg[REGISTER]; // Register to STO and RCL

struct data ds[STACKSIZE]; // Data stack
static byte dp=0; // Data stack pointer

static int as[ADDRSTACKSIZE]; // Address stack
static byte ap = 0; // Address stack pointer

static byte cl=0; // Condition level

static double m[6][3][3]; // Matrices A:0/1 B:2/3 C:4/5
static byte ismat=FALSE, ismatview=FALSE; // Matrix and view mode
static byte msel=_MA; // Selected matrix (A or B)
static double mdet, mdeti; // Determinant of matrix
static byte matr=0, matc=0; // Row and col of selected matrix slot

static byte prg[MAXPRG][MAXPRGLEN]; // User programs
static char prgname[MAXPRG+1][NLEN]; // Program names (+1 to enable acces to last)
static byte psel=0; // Selected program
static byte pstart, pp, pend; // Program listing
static byte isprgloaded=FALSE; // Needed to evaluate if prg was loaded

static byte issolve=FALSE, isint=FALSE, isslope=FALSE; // SOLV/INT/SLOPE
static byte runs; // Solver/integrator cycle runs
static double inta, intb, intdelta, fx, fres; // INT (SLOPE) variables

static double plot[PLTX]; // Y-values of plot graph
static double plota, plotb, plotd, ymax, ymin; // Variables used for plotting
static byte isplot=FALSE, isplotcalc=FALSE; // Plotting or plot calculation

double const pc[]={ // Physical constants
  299792458, 9.80665, 6.67430e-11, 0.02271095464, 6.02214076e23, 10973731.568160,
  1.602176634e-19, 9.1093837015e-31, 1.67262192369e-27, 1.67492749804e-27, 1.883531627e-28, 1.380649e-23,
  6.62607015e-34, 2.067833848e-15, 5.29177210903e-11, 8.8541878128e-12, 8.314462618, 96485.33212,
  1.6605390666e-27, 1.25663706212e-6, 9.2740100783e-24, 5.0507837461e-27, 1.41060679736e-26, -9.2847647043e-24,
  -9.6623651e-27, -4.4904483e-26, 2.8179403262e-15, 376.730313668, 7.2973525693e-3, 5.670374419e-8,
  273.15, 101325, 2.6752218744e8, 3.741771852e-16, 1.438776877e-2, 7.748091729
};
char * const pcname[]={
  "c",    "g",    "G",    "Vm",   "NA",   "Rinf",
    // Speed of light, Acceleration of gravity, Newton constant of gravity,
    // Molar volume of ideal gas, Avogadro constant, Rydberg constant
  "e",    "me",   "mp",   "mn",   "mmu",  "k",
    // Elementary charge, Electron mass, Proton mass,
    // Neutron mass, Muon mass, Boltzmann constant
  "h",    "Phi0", "a0",   "eps0", "R",    "F",
    // Planck constant,  Magnetic flux quantum, Bohr radius,
    // Vacuum electric permittivity, Molar gas constant, Faraday constant
  "mU",   "mu0",  "muB",  "muN",  "mup",  "mue",
    // Atomic mass constant, Vacuum magnetic permeability, Bohr magneton,
    // Nuclear magneton, Proton magnetic moment, Electron magnetic moment
  "mun",  "mumu", "re",   "Z0",   "alph", "sigm",
    // Neutron magnetic moment, Muon magnetic moment, Electron radius,
    // Impedance of vacuum, Fine structure constant, Stefan-Boltzmann constant,
  "t",    "atm",  "gamp", "C1",   "C2",   "G0"
    // Celsius temperature, Standard atmosphere, Proton gyromagnetic ratio
    // First radiation constant, Second radiation constant, Conductance quantum
};


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  S T A C K   S U B R O U T I N E S

static void dpush(struct data c){ // Push number to data stack
  if(dp>=STACKSIZE){ // Float stack if full
    memmove(ds, ds+1, (STACKSIZE-1)*sizeof(struct data));
    dp--; isfloated=TRUE;
  }
  ds[dp++]=c;
}
static double dpushr(double f){ // Push real number to data stack
  dpush((struct data){f, 0});
  return(f);
}
static struct data dpop(void){ // Pop value from data stack
  if(dp){lastx=ds[dp-1]; return(ds[--dp]);}
  return((struct data){0.0, 0.0});
}
static double dpopr(void) { // Pop real number from data stack
  return(dp ? dpop().r : 0.0);
}

static void apush(int addr) { // Push address (int) to address stack
  if(ap>=ADDRSTACKSIZE) msgnr=MSGNEST; else as[ap++]=addr;
}
static int apop(void) { // Pop address (int) from address stack
  return(ap ? as[--ap] : 0);
}

static byte isreal(void) { // True, if TOS is real
  if(dp && _abs(ds[dp-1].i)>ALMOSTZERO) return(FALSE); // Imaginary part almost 0
  return(TRUE);
}
static double absolute(double a, double b) { // Returns abs value of complex
  a=_abs(a); b=_abs(b);
  if(a==0.0) return (b);
  else if(b==0.0) return (a);
  return(exp(0.5 * (log(a)+log(a+b/a*b))));
}
static double angle(double a, double b) { // Returns the angle of complex
  double tmp=atan(b/a)*RAD;
  if(a==0.0) return ((b<0.0) ? -90.0 : 90.0); // Special case imaginary
  else if(a<0.0) {
    return((b<0.0) ? (tmp-180.0) : (tmp+180.0)); // Quadrant 2 or 3
  }
  else return(tmp); // Quadrant 1 or 4
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  E D I T   I N P U T   S T R I N G

static void editfinish(void){ // Finish input edit string
  isedit=FALSE;
  if(ishex) dpushr(strtol(ed, NULL, 16)); // Hex-String to float
  else dpushr(atof(ed)); // String to float
}
static int editcat(char c, int len){ // Append character to edit string
  if(len<MAXSTRLEN){ed[len++]=c; ed[len]='\0';}
  return len;
}
static int editdel(char * at, int len){ // Delete first character
  memmove(at, at+1, len);
  return(len-1);
}
static int editins(char * at, char c, int len){ // Insert first character
  if(len<MAXSTRLEN){memmove(at+1, at, ++len); at[0]=c;}
  return len;
}
static void editadd(int key){ // Add key to editstring
  if(!isedit){ // Start editing
    ed[0]='\0';
    if(key==KEY_E) strcpy(ed,"1"); else if(!ishex) strcpy(ed,"0");
    isedit=TRUE;
  }
  int len=strlen(ed);
  char * dot=strchr(ed, dotchar), * exp=strchr(ed, expchar);
  switch(key){
    case KEY_DOT:
      if(dot || exp) return; // It has already dot or no dots in exponents
      len=editcat(dotchar, len);
      break;
    case KEY_E:
      if(!exp && !ishex) len=editcat(expchar, len); // Hex or it has already exponent
      return;
    case KEY_CHS:
      if(exp) // Change exp sign
        len=(exp[1]=='-') ? editdel(exp+1, len) : editins(exp+1, '-', len);
      else // Change mantissa sign
        len=(ed[0]=='-') ? editdel(ed, len) : editins(ed, '-', len);
      break;
    case KEY_BSP:
      ed[--len]=0;
      if(len==0){isedit=FALSE;} // Leave edit (last char was removed)
      break;
    default: // Numbers
      if(!dot &&
        ( (len==1 && ed[0]=='0') || (ed[len-1]=='0' && !isdig(ed[len-2])) ) )
        ed[--len]=0; // Remove redundant 0
      editcat(key2fn[key]+'0', len); // NonHEX
      if(ishex){ // HEX
        if(len){ // String long enough
          if(ed[len-1]=='.'){ // >9 found
            if(ed[len]>='1' && ed[len]<='6') ed[len-1]=ed[len]-'1'+'a'; // a-f
            ed[len--]='\0';
          }
        }
      }
      break;
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  B U I L T I N   F U N C T I O N S

#define _0 0 // Intrinsic commands
#define _1 1
#define _2 2
#define _3 3
#define _4 4
#define _5 5
#define _6 6
#define _7 7
#define _8 8
#define _9 9
#define _DOT 10
#define _ADD 12
#define _SUB 13
#define _MULT 14
#define _DIV 15
#define _DROP 16
#define _NEG 18
#define _SWAP 19
#define _DUP 20
#define _INV 32
#define _LN 35
#define _STO 37
#define _RCL 38
#define _ROT 39
#define _SIN 40
#define _EXP 78
#define _CMPLX 80
#define _PI 82
#define _ISREAL 86
#define _IF 87
#define _ELSE 88
#define _THEN 89
#define _EQ 90
#define _NE 91
#define _LT 92
#define _BEGIN 94
#define _UNTIL 95
#define _INT 102
#define _NAND 104
#define _PICK 108
#define _TIME 133
#define _ISPOLAR 138
#define _PAUSE 139
#define _SQR MAXCMDI+0 // Nonkeyed commands
#define _LOG MAXCMDI+1
#define _POW MAXCMDI+2
#define _POW10 MAXCMDI+3
#define _COS MAXCMDI+4
#define _TAN MAXCMDI+5
#define _SQRT MAXCMDI+6
#define _OVER MAXCMDI+7
#define _PERCENT MAXCMDI+8
#define _PERCENTCHANGE MAXCMDI+9
#define _ASIN MAXCMDI+10
#define _ACOS MAXCMDI+11
#define _ATAN MAXCMDI+12
#define _SINH MAXCMDI+13
#define _COSH MAXCMDI+14
#define _TANH MAXCMDI+15
#define _ASINH MAXCMDI+16
#define _ACOSH MAXCMDI+17
#define _ATANH MAXCMDI+18
#define _SUMCLR MAXCMDI+19
#define _SUMADD MAXCMDI+20
#define _SUMSUB MAXCMDI+21
#define _STAT MAXCMDI+22
#define _LR MAXCMDI+23
#define _FRAC MAXCMDI+24
#define _ABS MAXCMDI+25
#define _AND MAXCMDI+26
#define _NOT MAXCMDI+27
#define _OR MAXCMDI+28
#define _MI2KM MAXCMDI+29
#define _KM2MI MAXCMDI+30
#define _FT2M MAXCMDI+31
#define _M2FT MAXCMDI+32
#define _IN2CM MAXCMDI+33
#define _CM2IN MAXCMDI+34
#define _LBS2KG MAXCMDI+35
#define _KG2LBS MAXCMDI+36
#define _GAL2L MAXCMDI+37
#define _L2GAL MAXCMDI+38
#define _F2C MAXCMDI+39
#define _C2F MAXCMDI+40
#define _RAD2DEG MAXCMDI+41
#define _DEG2RAD MAXCMDI+42
#define _HMS2H MAXCMDI+43
#define _H2HMS MAXCMDI+44
#define _HP2KW MAXCMDI+45
#define _KW2HP MAXCMDI+46
#define _GAMMA MAXCMDI+47
#define _MOD MAXCMDI+48
#define _ND MAXCMDI+49
#define _PV MAXCMDI+50
#define _QE MAXCMDI+51
#define _PERMCOMB MAXCMDI+52
#define _CLOCK MAXCMDI+53

#define _ESC 254 // Escape (cmd => prg name)
#define _END 255 // Function delimiter

const byte mem[]={
  _END, // Necessary to prevent function starting with mp=0
  _DUP, _MULT, _END, //0 SQR =x*x
  _LN, _1, _0, _LN, _DIV, _END, //1 LOG =ln(x)/ln(10)
  _SWAP, _LN, _MULT, _EXP, _END, //2 POW a^b=exp(b*ln(a))
  _DUP, _DROP, _1, _0, _LN, _MULT, _EXP, _END, //3 POW10 10^x=exp(x*ln(10))
  _ISREAL, _IF, _9, _0, _ELSE, _PI, _2, _DIV, _THEN, _ADD, _SIN, _END, //4 COS =sin(x+PI/2)
  _DUP, _SIN, _SWAP, _COS, _DIV, _END, //5 TAN =sin(x)/cos(x)
  _DUP, _0, _NE, _IF, _LN, _2, _DIV, _EXP, _THEN, _END, //6 SQRT =exp(0.5*ln(x))

  _SWAP, _DUP, _ROT, _ROT, _END, //7 OVER
  _OVER, _DIV, _1, _0, _0, _MULT, _END, //8 % x/B*100%
  _OVER, _SUB, _OVER, _DIV, _1, _0, _0, _MULT, _END, //9 %change (x-B)/B*100%

  _DUP, _DUP, _MULT, _NEG, _1, _ADD, _SQRT, _SWAP, //10 ASIN =-i*ln(i*x+sqrt(1-x*x))
  _ISPOLAR, _IF, _1, _DUP, _DROP, _9, _0, _ELSE, _0, _DUP, _DROP, _1, _THEN, _CMPLX,
  _MULT, _ADD, _LN, // _DROP needed to remove doubled 0
  _ISPOLAR, _IF, _1, _DUP, _DROP, _9, _0, _ELSE, _0, _DUP, _DROP, _1, _THEN, _CMPLX,
  _NEG, _MULT,      // _ISPOLAR needed to enter 0+i or 1e90
  _ISREAL, _IF, _RAD2DEG, _THEN, _END,

  _ASIN, _NEG, //11 ACOS =PI/2-asin(x)
  _ISREAL, _IF, _9, _0, _ADD, _ELSE, _PI, _2, _DIV, _ADD, _THEN, _END,

  _DUP, _DUP, _MULT, _1, _ADD, _SQRT, _INV, _MULT, _ASIN, _END, //12 ATAN =asin(x/(sqrt(1+x*x)))

  _EXP, _DUP, _INV, _NEG, _ADD, _2, _DIV, _END, //13 SINH =(exp(x)-exp(-x))/2
  _EXP, _DUP, _INV, _ADD, _2, _DIV, _END, //14 COSH =(exp(x)+exp(-x))/2
  _DUP, _SINH, _SWAP, _COSH, _DIV, _END, //15 TANH =sinh(x)/cosh(x)
  _DUP, _DUP, _MULT, _1, _ADD, _SQRT, _ADD, _LN, _END, //16 ASINH =ln(x+sqrt(x*x+1))
  _DUP, _DUP, _MULT, _1, _SUB, _SQRT, _ADD, _LN, _END, //17 ACOSH =ln(x+sqrt(x*x-1))
  _DUP, _1, _ADD, _SWAP, _NEG, _1, _ADD, _DIV, _SQRT, _LN, _END, //18 ATANH =ln(sqrt((1+x)/(1-x)))

  _0, _DUP, _DROP, _5, _STO, _6, _STO, _7, _STO, _8, _STO, _9, _STO, _DROP, _END, //19 SUMCLR

  _7, _RCL, _1, _ADD, _7, _STO, _DROP, //20 SUM+ - n
  _DUP, _8, _RCL, _ADD, _8, _STO, _DROP,// X
  _DUP, _DUP, _MULT, _5, _RCL, _ADD, _5, _STO, _DROP,// XX
  _OVER, _MULT, _6, _RCL, _ADD, _6, _STO, _DROP, // XY
  _9, _RCL, _ADD, _9, _STO, _DROP, _7, _RCL, _END, // Y push(n)

  _7, _RCL, _1, _SUB, _7, _STO, _DROP, //21 SUM- - n
  _DUP, _8, _RCL, _SWAP, _SUB, _8, _STO, _DROP, // X
  _DUP, _DUP, _MULT, _5, _RCL, _SWAP, _SUB, _5, _STO, _DROP, // XX
  _OVER, _MULT, _6, _RCL, _SWAP, _SUB, _6, _STO, _DROP,// XY
  _9, _RCL, _SWAP, _SUB, _9, _STO, _DROP, _7, _RCL, _END, // Y

  _8, _RCL, _7, _RCL, _DIV, //22 STAT - mean (X/n)
  _DUP, _DUP, _MULT, _7, _RCL, _MULT, _NEG, _5, _RCL, _ADD, // stddev (XX-n*m^2)/(n-1)
  _7, _RCL, _1, _SUB, _DIV, _SQRT, _SWAP, _END,

  _6, _RCL, _7, _RCL, _MULT, _8, _RCL, _9, _RCL, _MULT, _SUB, //23 L.R. =ax+b - a
  _5, _RCL, _7, _RCL, _MULT, _8, _RCL, _DUP, _MULT, _SUB, _DIV,
  _DUP, _8, _RCL, _MULT, _NEG, _9, _RCL, _ADD, _7, _RCL, _DIV, _SWAP, _END, // b

  _DUP, _INT, _SUB, _END, //24 FRAC
  _DUP, _0, _LT, _IF, _NEG, _THEN, _END, //25 ABS
  _NAND, _DUP, _NAND, _END, //26 AND
  _DUP, _NAND, _END, //27 NOT
  _DUP, _NAND, _SWAP, _DUP, _NAND, _NAND, _END, //28 OR

  _1, _DOT, _6, _0, _9, _3, _4, _4, _MULT, _END, //29 MI>KM
  _1, _DOT, _6, _0, _9, _3, _4, _4, _DIV, _END, //30 KM>MI
  _3, _DOT, _2, _8, _0, _8, _3, _9, _8, _9, _5, _DIV, _END, //31 FT>M
  _3, _DOT, _2, _8, _0, _8, _3, _9, _8, _9, _5, _MULT, _END, //32 M>FT
  _2, _DOT, _5, _4, _MULT, _END, //33 IN>CM
  _2, _DOT, _5, _4, _DIV, _END, //34 CM>IN
  _2, _DOT, _2, _0, _4, _6, _2, _2, _6, _2, _1, _8, _DIV, _END, //35 LBS>KG
  _2, _DOT, _2, _0, _4, _6, _2, _2, _6, _2, _1, _8, _MULT, _END, //36 KG>LBS
  _3, _DOT, _7, _8, _5, _4, _1, _1, _7, _8, _4, _MULT, _END, //37 GAL>L
  _3, _DOT, _7, _8, _5, _4, _1, _1, _7, _8, _4, _DIV, _END, //38 L>GAL
  _3, _2, _SUB, _1, _DOT, _8, _DIV, _END, //39 F>C
  _1, _DOT, _8, _MULT, _3, _2, _ADD, _END, //40 C>F
  _PI, _DIV, _1, _8, _0, _MULT, _END, //41 RAD>DEG
  _1, _8, _0, _DIV, _PI, _MULT, _END, //42 DEG>RAD

  _DUP, _DUP, _INT, _SWAP, _OVER, _SUB, _1, _0, _0, _MULT, _INT, //43 HMS2H hh mm
  _ROT, _3, _PICK, _SUB, _1, _0, _0, _MULT, _OVER, _SUB, _1, _0, _0, _MULT, // ss
  _3, _6, _0, _0, _DIV, _SWAP, _6, _0, _DIV, _ADD, _ADD, _END,// ->s ->h

  _DUP, _3, _6, _0, _0, _MULT, _DUP, _ROT, _INT, //44 H2HMS - h->s
  _SWAP, _OVER, _3, _6, _0, _0, _MULT, _SUB, _6, _0, _DIV, _INT, // hh mm
  _ROT, _OVER, _6, _0, _MULT, _SUB, _3, _PICK, _3, _6, _0, _0, _MULT, _SUB, // ss
  _1, _0, _0, _0, _0, _DIV, _SWAP, _1, _0, _0, _DIV, _ADD, _ADD, _END, // hh.mmss

  _1, _DOT, _3, _5, _9, _6, _2, _1, _6, _1, _7, _3, _DIV, _END, //45 HP>KW
  _1, _DOT, _3, _5, _9, _6, _2, _1, _6, _1, _7, _3, _MULT, _END, //46KW>HP

  _1, _ADD, //47 GAMMALN =(ln(2*PI)-ln(z))/2+z*(ln(z+1/(12*z-1/10/z))-1)
  _DUP, _DUP, _DUP, _DUP, _1, _2, _MULT,
  _SWAP, _1, _0, _MULT, _INV, _SUB, _INV, _ADD, _LN, _1, _SUB, _MULT,
  _SWAP, _LN, _NEG, _2, _PI, _MULT, _LN, _ADD, _2, _DIV, _ADD, _END,

  _SWAP, _DUP, _ROT, _DUP, _ROT, _SWAP, _DIV, _INT, _MULT, _SUB, _END, //48 MODULO

  _DUP, _DUP, _DUP, _DUP, _MULT, _MULT, _DOT, _0, _7, _0, _5, _6, _MULT, //49 ND
  _SWAP, _1, _DOT, _5, _9, _7, _6, _MULT, _NEG, _ADD, _EXP, _1, _ADD, _INV, _SWAP,
  _DUP, _MULT, _NEG, _2, _DIV, _EXP, _2, _PI, _MULT, _SQRT, _INV, _MULT, _END,

  _OVER, _1, _ADD, _SWAP, _POW, _DUP, _1, _SUB, _SWAP, _DIV, _SWAP, _DIV, _END, //50 PV =((1+i)^n-1)/(1+i)^n/i

  _OVER, _2, _DIV, _DUP, _MULT, _SWAP, _SUB, _SQRT, _SWAP, _2, _DIV, _NEG, _SWAP, //51 QE x12=-p/2+-sqrt(p*p/4-q)
  _OVER, _OVER, _SUB, _ROT, _ROT, _ADD, _END,

  _DUP, _ROT, _SWAP, //52 PERM COMB
  _OVER, _ROT, _ROT, _SUB, _1, _ROT, _ROT, _SWAP, // PERM
  _BEGIN, _SWAP, _ROT, _1, _ROT, _ADD, _DUP, _ROT, _MULT,
  _SWAP, _ROT, _OVER, _OVER, _SWAP, _1, _ADD, _LT, _UNTIL, _DROP, _DROP,
  _DUP, _ROT, _1, _SWAP, // COMB
  _BEGIN, _ROT, _ROT, _DUP, _ROT, _SWAP, _DIV,
  _ROT, _ROT, _1, _ADD, _SWAP, _OVER, _1, _SUB,
  _OVER, _SWAP, _1, _ADD, _LT, _UNTIL, _DROP, _DROP, _END,

  _BEGIN, _TIME, _4, _PAUSE, _DROP, _UNTIL, _END, //53 CLOCK
};

static void seekmem(byte n) { // Find mem[]-address of n-th builtin function
  if(isedit) editfinish();
  mp=0; while (n+1-MAXCMDI) if(mem[mp++]==_END) n--;
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  P R O G R A M M I N G

static byte prglen(void){ // Returns length of selected program
  for(byte i=0; i<MAXPRGLEN; i++) if(prg[psel][i]==_END) return(i);
  return(MAXPRGLEN); // No _END found
}

static void strnamat(char * s, byte nr, byte pos){ // Write prgname to string
  for(byte i=0; i<NLEN; i++) s[pos+i]=prgname[nr][i];
}

static void ppins(byte c){ // Insert one character at pos pp
  if(pend<MAXPRGLEN-1){
    memmove(&prg[psel][pp+1], &prg[psel][pp], pend+1-pp);
    prg[psel][pp]=c; pend++; pp++;
  }
  else msgnr=MSGSPACE;
}
static void ppdel(void){ // Delete one character at pos pp
  if(pp<pend){
    memmove(&prg[psel][pp], &prg[psel][pp+1], pend-pp);
    pend--;
  }
}

static void ppup(void){ // Program pointer up
  if(pp>NLEN && prg[psel][pp-(NLEN+1)]==_ESC) pp-=(NLEN+1);
  else if(pp) pp--;
}
static void ppdown(void){ // Program pointer down
  if(pp+NLEN<pend && prg[psel][pp]==_ESC) pp+=(NLEN+1);
  else if(pp<pend) pp++;
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  F U N C T I O N   P O I N T E R   A R R A Y

static void _nop(void) {} // NOP - no operation

static void _n0(void){editadd(KEY_0);} // 0
static void _n1(void){editadd(KEY_1);} // 1
static void _n2(void){editadd(KEY_2);} // 2
static void _n3(void){editadd(KEY_3);} // 3
static void _n4(void){editadd(KEY_4);} // 4
static void _n5(void){editadd(KEY_5);} // 5
static void _n6(void){editadd(KEY_6);} // 6
static void _n7(void){editadd(KEY_7);} // 7
static void _n8(void){editadd(KEY_8);} // 8
static void _n9(void){editadd(KEY_9);} // 9
static void _dot(void){editadd(KEY_DOT);} // DOT
static void _rs(void){ // RS - Real Super Key
  if(holdmp){mp=holdmp; holdmp=0;} // Continue prg after stop
  else if(dp && !isreal()){view=(ispolar ? VIEWABS : VIEWRE);} // Complex view
  else _dup(); // Standard (DUP)
}

static void _absolute(void){seekmem(_ABS); // ABS
}
static void _acos(void){ // ACOS ACOSH
  if(ishyp){seekmem(_ACOSH); ishyp=FALSE;} else seekmem(_ACOS);
}
static void _add(void){ // ADD +
  if(isedit) editfinish();
  struct data b=dpop(), a=dpop();
  dpush((struct data){a.r+b.r, a.i+b.i});
}
static void _assign(void){ // ASSIGN
  if(isedit) editfinish();
  struct data a=dpop(); dpush(a);
  if(a.r>0 && a.r<13){sel=0; isassign=isdict=TRUE;} // Assign
}
static void _asin(void){ // ASIN ASINH
  if(ishyp){seekmem(_ASINH); ishyp=FALSE;} else seekmem(_ASIN);
}
static void _atan(void){ // ATAN ATANH
  if(ishyp){seekmem(_ATANH); ishyp=FALSE;} else seekmem(_ATAN);
}
static void _begin(void){apush(mp); // BEGIN
}
static void _clear(void){dp=0; // CLEAR
}
static void _cdelse(void) { // CONDITION ELSE
  if(!cl) msgnr=MSGNEST; // ELSE without corresponding IF
  else{
    _cdseek(); // Seek next THEN
    cl--;
  }
}
static void _clock(void){seekmem(_CLOCK); // CLOCK
}
static void _cdeq(void){ // CONDITION =
  if(isedit) editfinish();
  dpushr(dpopr()==dpopr());
}
static void _cdgt(void){ // CONDITION >
  if(isedit) editfinish();
  dpushr(dpopr()<dpopr()); // ... wrong pop order
}
static void _cdif(void){ // CONDITION IF
  cl++; // Increment conditional level
  if(!dpopr()) _cdseek(); // FALSE-Clause - seek next ELSE or THEN
}
static void _cdispolar(void){ // CONDITION ISPOLAR?
  if(isedit) editfinish();
  dpushr(ispolar);
}
static void _cdisreal(void){ // CONDITION ISREAL?
  if(isedit) editfinish();
  dpushr(isreal());
}
static void _cdlt(void){ // CONDITION <
  if(isedit) editfinish();
  dpushr(dpopr()>dpopr()); // ... wrong pop order
}
static void _cdne(void){_cdeq(); dpushr(!dpopr()); // CONDITION !=
}
static void _cdseek(void){ // CONDITION - seek next ELSE or THEN
  byte isloop=TRUE;
  byte cltmp=0; // Local conditional level
  while(isloop){
    byte c=0;
    if(mp<sizeof(mem)) c=mem[mp++]; // Builtin
    else if(mp<sizeof(mem)+MAXPRG*MAXPRGLEN){ // User
      c=prg[(mp-sizeof(mem))/MAXPRGLEN][(mp-sizeof(mem))%MAXPRGLEN];
      mp++;
    }
    if(mp-1>=sizeof(mem)+MAXPRG*MAXPRGLEN){ // No corresponding ELSE or THEN
      msgnr=MSGNEST; isloop=FALSE;
    }
    else
    if(c==_IF) cltmp++; // Nested IF found
    else if(cltmp && c==_THEN) cltmp--; // Nested IF ended
    else if(!cltmp && (c==_ELSE || c==_THEN)) isloop=FALSE;
  }
}
static void _cdthen(void) { // CONDITION THEN
  if(!cl) msgnr=MSGNEST; // THEN without corresponding IF
  else cl--; // Decrement conditional level
}
static void _chs(void){if(isedit) editadd(KEY_CHS); else _negate(); // CHS
}
static void _cmode(void){ispolar=(ispolar?FALSE:TRUE); // COMPLEX MODE
}
static void _complex(void){ // COMPLEX
  if(isedit) editfinish();
  if(isreal()){ // # Stack -> complex
    if(ispolar){ // Polar
      double b=dpopr(), a=dpopr();
      dpush((struct data){a*cos(b/RAD), a*sin(b/RAD)});
    }
    else{double b=dpopr(); dpush((struct data){dpopr(), b});} // Rectangular
  }
  else{ // # Complex -> stack
    if(ispolar){ // Polar
      struct data a=dpop(); dpushr(absolute(a.r, a.i)); dpushr(angle(a.r, a.i));
    }
    else{struct data a=dpop(); dpushr(a.r); dpushr(a.i);} // Rectangular
  }
}
static void _cos(void){ // COS COSH
  if(ishyp){seekmem(_COSH); ishyp=FALSE;} else seekmem(_COS);
}
static void _cv(void){if(isedit) editfinish(); isconvert=TRUE; // CONVERT MENU
}
static void _cvmi2km(void){seekmem(_MI2KM); // CONVERT MI>KM
}
static void _cvkm2mi(void){seekmem(_KM2MI); // CONVERT KM>MI
}
static void _cvft2m(void){seekmem(_FT2M); // CONVERT FT>M
}
static void _cvm2ft(void){seekmem(_M2FT); // CONVERT M>FT
}
static void _cvin2cm(void){seekmem(_IN2CM); // CONVERT IN>CM
}
static void _cvcm2in(void){seekmem(_CM2IN); // CONVERT CM>IN
}
static void _cvlbs2kg(void){seekmem(_LBS2KG); // CONVERT LBS>KG
}
static void _cvkg2lbs(void){seekmem(_KG2LBS); // CONVERT KG>LBS
}
static void _cvgal2l(void){seekmem(_GAL2L); // CONVERT GAL>L
}
static void _cvl2gal(void){seekmem(_L2GAL); // CONVERT L>GAL
}
static void _cvf2c(void){seekmem(_F2C); // CONVERT F>C
}
static void _cvc2f(void){seekmem(_C2F); // CONVERT C>F
}
static void _cvrad2deg(void){seekmem(_RAD2DEG); // CONVERT RAD>DEG
}
static void _cvdeg2rad(void){seekmem(_DEG2RAD); // CONVERT DEG>RAD
}
static void _cvhms2h(void){seekmem(_HMS2H); // CONVERT HMS>H
}
static void _cvh2hms(void){seekmem(_H2HMS); // CONVERT H>HMS
}
static void _cvhp2kw(void){seekmem(_HP2KW); // CONVERT HP>KW
}
static void _cvkw2hp(void){seekmem(_KW2HP); // CONVERT KW>HP
}
static void _dict(void){sel=0; isdict=TRUE; // Dictionary
}
static void _disp(void){color=((color<0x07) ? color+1 : 0); // DISPLAY COLOR
}
static void _div(void){ // DIV /
  if(isedit) editfinish();
  _inv(); if(!msgnr) _mult();
}
static void _down(void){isimgview=TRUE; // DOWN - IMG
}
static void _drop(void){if(isedit) editadd(KEY_BSP); else dpop(); // DROP (BSP)
}
static void _dup(void){ // DUP
  if(mp){if(isedit) editfinish(); if(dp) dpush(ds[dp-1]);}
  else{
    if(isedit) editfinish(); // End editor
    else if(dp) dpush(ds[dp-1]); // Duplicate (if not in editor)
  }
}
static void _e(void){editadd(KEY_E); // E
}
static void _exp(void){ // EXP exp(a+jb)=exp(a)*(cos(b)+i*sin(b))
  if(isedit) editfinish();
  struct data a=dpop();
  if(a.r>230) msgnr=MSGERROR;
  else{
    double e=exp(a.r);
    dpush((struct data){e*cos(a.i), e*sin(a.i)});
  }
}
static void _fkeys(byte n){execute(fkeys[n-1]);} // FKEYS
static void _f1(void){_fkeys(1);} // FKEY 1
static void _f2(void){_fkeys(2);} // FKEY 2
static void _f3(void){_fkeys(3);} // FKEY 3
static void _f4(void){_fkeys(4);} // FKEY 4
static void _f5(void){_fkeys(5);} // FKEY 5
static void _f6(void){_fkeys(6);} // FKEY 6
static void _f7(void){_fkeys(7);} // FKEY 7
static void _f8(void){_fkeys(8);} // FKEY 8
static void _f9(void){_fkeys(9);} // FKEY 9
static void _f10(void){_fkeys(10);} // FKEY 10
static void _f11(void){_fkeys(11);} // FKEY 11
static void _f12(void){_fkeys(12);} // FKEY 12
static void _fnint(void) { // FN INTEGRATE
  _swap(); inta=dpopr(); intb=dpushr(dpopr());
  intdelta=(intb-inta)/2/INTSTRIPES;
  fres=0.0; runs=0;
  isint=TRUE;
}
static void _fnplot(void){ // FN PLOT
  if(isedit) editfinish();
  plotb=dpopr(); plota=dpopr();
  plotd=(plotb-plota)/(PLTX);
  dpushr(plota);
  runs=0; isplotcalc=TRUE;
}
static void _fnslope(void) { // FN SLOPE
  if(isedit) editfinish();
  dpushr((fx=dpopr())-2.0*DELTAX); // Set fx and start with x-2h
  fres=0.0; runs=0;
  isslope=TRUE;
}
static void _fnsolve(void){ // FN SOLVE
  if(isedit) editfinish();
  _dup(); _dup(); // 3 x0 on stack
  runs=0; issolve=TRUE;
}
static void _frac(void){seekmem(_FRAC); // FRAC
}
static void _gamma(void){if(isedit) editfinish(); seekmem(_GAMMA); // GAMMA ln!
}
static void _getkey(void){wait_for_key_press(); // GETKEY
}
static void _help(void){
  run_help_file("/IV42/iv42help.htm");
}
static void _hex(void){ // HEX
  if(isedit) editfinish();
  ishex=(ishex ? FALSE : TRUE);
}
static void _hold(void){ // HOLD
  holdmp=mp; mp=0; msgnr=MSGHOLD; isprintscreen=TRUE;
}
static void _hyp(void){ // HYP (actually suspend)
  ishyp=ishyp ? FALSE : TRUE;
}
static void _int(void){ // INTEGER
  dpushr((long long)dpopr());
}
static void _inv(void){ // INV inv(a+jb)=a/(a*a+b*b)-i*b/(a*a+b*b)
  if(isedit) editfinish();
  struct data a=dpop();
  if(absolute(a.r, a.i)==0.0) msgnr=MSGERROR;
  else dpush((struct data){1.0/(a.r+a.i/a.r*a.i), -1.0/(a.i+a.r/a.i*a.r)});
}
static void _lastx(void){dpush(lastx); // LASTx
}
static void _lgnand(void){ // LOGIC NAND
  if(isedit) editfinish();
  long long b=dpopr(); dpushr(~((long long)dpopr() & b));
}
static void _lgand(void){seekmem(_AND); // LOGIC AND
}
static void _lgnot(void){seekmem(_NOT); // LOGIC NOT
}
static void _lgor(void){seekmem(_OR); // LOGIC OR
}
static void _ln(void){ // LN ln(a+i*b)=ln(r*exp(i*f))=ln(r)+i*f r=|a+i*b| f=atan(b/a)
  if(isedit) editfinish();
  struct data a=dpop();
  if(absolute(a.r, a.i)==0.0) msgnr=MSGERROR;
  else dpush((struct data){log(absolute(a.r, a.i)), angle(a.r, a.i)/RAD});
}
static void _log(void){seekmem(_LOG); // LOG
}
static void _lr(void){seekmem(_LR); // L.R.
}
static void _mat(void){if(isedit) editfinish(); ismat=TRUE; // MATRIX
}
static void _mod(void){seekmem(_MOD); // MODULO
}
static void _mult(void){ // MULT * (a+i*b)*(c+i*d)=(a*c-b*d)+i*(b*c+a*d)
  if(isedit) editfinish();
  struct data b=dpop(), a=dpop();
  dpush((struct data){a.r*b.r-a.i*b.i, a.r*b.i+a.i*b.r});
}
static void _nd(void){seekmem(_ND); // ND
}
static void _negate(void){ // NEGATE
  struct data a=dpop(); dpush((struct data){-a.r, -a.i});
}
static void _over(void){seekmem(_OVER); // OVER
}
static void _pause(void){ // PAUSE
  if(isedit) editfinish();
  pause=dpopr(); isprintscreen=TRUE;
}
static void _percent(void){seekmem(_PERCENT); // %
}
static void _percentchange(void){seekmem(_PERCENTCHANGE); // %change
}
static void _permcomb(void){seekmem(_PERMCOMB); // PERM/COMB nPr=n!/(n-r)! nCr=nPr/r!
}
static void _phys(void){ // PHYSICAL CONSTANTS
  if(isedit) editfinish();
  sel=0; isphys=TRUE;
}
static void _pi(void){dpushr(PI); // PI
}
static void _pick(void){ // PICK
  if(isedit) editfinish();
  byte n=dpopr();
  if(n && n<=dp) dpush(ds[dp-n]);
}
static void _prgdel(void){ // PRG DELETE
  prgname[psel][0]='\0'; prg[psel][0]=_END;
}
static void _prgedit(void){ // PRG EDIT
  pstart=pp=0; pend=prglen();
  if(pend==MAXPRGLEN){ // New program
    strcpy(prgname[psel], "NEW1");
    prg[psel][0]=_END; pend=0;
  }
  isprgedit=TRUE;
}
static void _prgfn(void){isprg=TRUE; // PRG FUNCTION
}
static void _prgload(void){loadprg(); // PRG LOAD
}
static void _prgren(void){isselasc=NLEN; sel=0; isprg=FALSE; // PRG RENAME
}
static void _prgsave(void){saveprg(); // PRG SAVE
}
static void _prgsel(void){sel=0; isprgsel=TRUE; // PRG SELECT
}
static void _pwr(void){ // PWR
  if(isedit) editfinish();
  if(dp==1 || absolute(ds[dp-2].r, ds[dp-2].i)==0.0) dpop(); // 0^x=0
  else seekmem(_POW);
}
static void _pwr10(void){seekmem(_POW10); // PWR10
}
static void _pv(void){seekmem(_PV); // PV
}
static void _qe(void){seekmem(_QE); // QE
}
static void _rcl(void){_storcl(FALSE); // RCL
}
static void _rot(void) { // ROT
  if(isedit) editfinish();
  if(dp>2){
    struct data a=dpop(), b=dpop(), c=dpop();
    dpush(b); dpush(a); dpush(c);
  }
}
static void _shift(void){(isshift=isshift ? FALSE : TRUE); // SHIFT
}
static void _show(void){(isshow=isshow ? FALSE : TRUE); // Toggle state<->TOS
}
static void _sin(void) { // SIN SINH
  if(isedit) editfinish();
  if(ishyp){seekmem(_SINH); ishyp=FALSE;} // SINH
  else{ // SIN  sin(a+i*b)=sin(a)*cosh(b)+i*cos(a)*sinh(b)
    if(isreal()) dpushr(sin(dpopr()/RAD));
    else{
      struct data a=dpop();
      double e=exp(a.i);
      dpush((struct data){sin(a.r)*(e +1.0/e)/2.0, sin(PI/2-a.r)*(e-1.0/e)/2.0});
    }
  }
}
static void _sqr(void){seekmem(_SQR); // SQR
}
static void _sqrt(void){seekmem(_SQRT); // SQRT
}
static void _stacksum(void){while(dp>1) _add(); // STACKSUM
}
static void _stat(void){seekmem(_STAT); // STAT
}
static void _sto(void){_storcl(TRUE); // STO
}
static void _storcl(byte issto){ // STORCL
  if(isedit) editfinish();
  if(dp){
    byte n=dpopr(); // Register number
    if(n<REGISTER){
      if(issto){if(dp) dpush(reg[n]=dpop());} // Store (if content)
      else dpush(reg[n]); // Recall
    }
  }
}
static void _sub(void){ // SUB -
  if(isedit) editfinish();
  _negate(); _add();
}
static void _sumadd(void){seekmem(_SUMADD); // SUMADD
}
static void _sumclr(void){seekmem(_SUMCLR); // SUMCLR
}
static void _sumsub(void){seekmem(_SUMSUB); // SUMSUB
}
static void _swap(void){ // SWAP
  if(isedit) editfinish();
  if(dp>1){struct data a=dpop(), b=dpop(); dpush(a); dpush(b);}
}
static void _tan(void){seekmem(_TAN); // TAN TANH
  if(ishyp){seekmem(_TANH); ishyp=FALSE;} else seekmem(_TAN);
}
static void _time(void){ // TIME - Push system time to stack
  dt_t dt; tm_t tm; rtc_read(&tm, &dt);
  dpushr(tm.hour*100.0+tm.min+tm.sec/100.0);
}
static void _textclear(void){alpha[0]='\0'; isprintalpha=FALSE; // TEXT CLEAR
}
static void _textput(void){ // TEXT PUT
  byte len=strlen(alpha);
  if(len<MAXSTRLEN-1){
    if(isedit) editfinish();
    alpha[len]=(byte)dpopr(); alpha[len+1]='\0';
    isprintalpha=TRUE;
  }
}
static void _until(void){ // UNTIL
  if(!ap) msgnr=MSGNEST; // No BEGIN for this UNTIL
  else if(dpopr()) apop(); // Go on (delete return address)
  else apush(mp=apop()); // Go back to BEGIN
}
static void _up(void){if(!isdict) _dict(); // UP
}
static void _xeq(void){execute(MAXCMDI+psel); // XEQ Execute selected user program
}

static void (*dispatch[])(void)={ // Function array
  &_n0, &_n1, &_n2, &_n3, &_n4, &_n5, &_n6, &_n7, &_n8, &_n9, //0 Main keys
  &_dot, &_rs, &_add, &_sub, &_mult, &_div, &_drop, &_e, &_chs, &_swap,
  &_dup, &_up, &_down, &_shift, &_nop,
  &_f1, &_f2, &_f3, &_f4, &_f5, &_f6, //25 F-Keys
  &_sumadd, &_inv, &_sqrt, &_log, &_ln, &_xeq,
  &_sto, &_rcl, &_rot, &_sin, &_cos, &_tan,
  &_nop, &_assign, &_help, &_prgfn, &_hex, &_cv, &_phys, &_fnsolve, &_fnint, &_mat, //43 Main keys shifted
  &_show, &_prgedit, &_dict, &_fnplot, &_permcomb, &_stat, &_clear, &_disp, &_cmode, &_lastx,
  &_textput, &_prgsave, &_prgload, &_nop, &_nop,
  &_f7, &_f8, &_f9, &_f10, &_f11, &_f12, //68 F-Keys shifted
  &_sumsub, &_pwr, &_sqr, &_pwr10, &_exp, &_prgsel,
  &_complex, &_percent, &_pi, &_asin, &_acos, &_atan,
  &_cdisreal, &_cdif, &_cdelse, &_cdthen, &_cdeq, &_cdne, &_cdlt, &_cdgt, &_begin, &_until, //86 Nonkeyed
  &_over, &_percentchange, &_hyp, &_sumclr, &_lr, &_frac, &_int, &_absolute, &_lgnand, &_lgand, //96
  &_lgnot, &_lgor, &_pick, &_cvmi2km, &_cvkm2mi, &_cvft2m, &_cvm2ft, &_cvin2cm, &_cvcm2in, &_cvlbs2kg, //106
  &_cvkg2lbs, &_cvgal2l, &_cvl2gal, &_cvf2c, &_cvc2f, &_cvrad2deg, &_cvdeg2rad, &_cvhms2h, &_cvh2hms, &_cvhp2kw, //116
  &_cvkw2hp, &_gamma, &_mod, &_nd, &_pv, &_qe, &_stacksum, &_time, &_prgren, &_prgdel, //126
  &_fnslope, &_textclear, &_cdispolar, &_pause, &_clock, &_hold, &_getkey, &_nop     // 136
};
byte const seeked[]={ // Seeked commands (1)
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, //0 Main keys
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, //25 F-Keys
  1, 0, 1, 1, 0, 0,
  0, 0, 0,00, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, //43 Main keys shifted
  0, 0, 0, 0, 1, 1, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, //68 F-Keys shifted
  1, 1, 1, 1, 0, 0,
  0, 1, 0, 1, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, //86 Nonkeyed
  1, 1, 0, 1, 1, 1, 0, 1, 0, 1, //96
  1, 1, 0, 1, 1, 1, 1, 1, 1, 1, //106
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, //116
  1, 1, 1, 1, 1, 1, 0, 0, 0, 0, //126
  0, 0, 0, 0, 1, 0, 0, 0, // 136
};

const char * const cmd[]={ // Command names
  "0",    "1",    "2",    "3",    "4",    "5",    "6",    "7",    "8",    "9", // Main keys
  ".",    "R/S",  "+",    "-",    "*",    "/",    "DROP", "E",    "CHS",  "SWAP",
  "DUP",  "IMG",  "DN",   "SHFT", "---",
  "F1",   "F2",   "F3",   "F4",   "F5",   "F6", // F-Keys
  "SUM+", "INV",  "SQRT", "LOG",  "LN",   "XEQ",
  "STO",  "RCL",  "ROT",  "SIN",  "COS",  "TAN",
  "---",  "ASGN", "HELP", "Pfcn", "HEX",  "CONV", "CONS", "Fslv", "Fint", "MAT", // Main keys shifted
  "SHOW", "Pedt", "DICT", "Fplt", "P/C",  "STAT", "CLR",  "DISP", "Cmod",  "LSTx",
  "Tput",  "Psav", "Plod", "---",  "---",
  "F7",   "F8",   "F9",   "F10",  "F11",  "F12", // F-Keys shifted
  "SUM-", "PWR",  "SQR",  "PW10", "EXP",  "Psel",
  "CPLX", "%",    "PI",   "ASIN", "ACOS", "ATAN",
  "RE?",  "IF",   "ELSE", "THEN", "=?",   "<>?",  "<?",   ">?",   "BEG",  "UNTL", // Nonkeyed
  "OVER", "%C",   "HYP",  "SUMC", "L.R.", "FRAC", "INT",  "ABS",  "NAND", "AND",
  "NOT",  "OR",   "PICK", ">KM",  ">MI",  ">M",   ">FT",  ">CM",  ">IN",  ">KG",
  ">LBS", ">L",   ">GAL", ">C",   ">F",   ">DEG", ">RAD", ">H",   ">HMS", ">KW",
  ">HP",  "LN!",  "MOD",  "ND",   "PVAL", "QEQN", "STKS", "TIME", "Pren", "Pdel",
  "Fslp", "Tclr", "POL?", "PAUS", "CLK",  "HOLD", "KEY?", "---"
};


static void sort(void){ // Sort cmd[] alphabetically to cmdsort[]
  char s[2][NLEN]; // Strings to compare
  for(byte i=0; i<MAXCMDI+MAXPRG; i++) cmdsort[i]=i; // Initialize
  for(byte k=MAXCMDI+MAXPRG-1; k>0; k--){ // Outer loop
    for(byte i=0; i<k; i++){ // Inner loop
      for(byte m=0; m<2; m++){ // Catch 2 strings
        if(cmdsort[i+m]<MAXCMDI) // Intrinsic or builtin command
          strcpy(s[m], cmd[cmdsort[i+m]]);
        else{ // User command
          byte n=cmdsort[i+m]-MAXCMDI;
          if(strlen(prgname[n])==0) strcpy(s[m], "~"); // No prg to the end
          else strcpy(s[m], prgname[n]); // Prg
        }
      }
      if(strcmp(s[0],s[1])>0){ // Compare strings and swap commands
        byte tmp=cmdsort[i]; cmdsort[i]=cmdsort[i+1]; cmdsort[i+1]=tmp;
      }
    }
  }
}

static void execute(byte command) { // Execute command
  if(command<MAXCMDI) (*dispatch[command])(); // Dispatch intrinsic/builtin command
  else{ // Execute user prg
    if(isedit) editfinish();
    mp=sizeof(mem)+(command-MAXCMDI)*MAXPRGLEN;
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  M A T R I X   S U B R O U T I N E S

static void mpush(byte mat, byte row, byte col){ // Push matrix element to stack
  dpush((struct data){m[2*mat][row][col], m[2*mat+1][row][col]});
}
static void mpop(byte mat, byte row, byte col){ // Pop stack to matrix element
  struct data a=dpop();
  m[2*mat][row][col]=a.r; m[2*mat+1][row][col]=a.i;
}
static void mc2a(void){memcpy(m[0], m[4], 2*3*3*sizeof(double)); // A=C
}
static void ma2b(void){memcpy(m[2], m[0], 2*3*3*sizeof(double)); // B=A
}
static void maddsub(byte op){ // Add/substract matrices (0:add 1:sub)
  for (byte row=0; row<3; row++) for(byte col=0; col<3; col++){
      mpush(_MA, row, col); mpush(_MB, row, col);
      if(op) _sub(); else _add();
      mpop(_MC, row, col);
    }
  mc2a(); // A=C
}
static void mmult(void){ // Multiply matrices A*B
  for (byte row=0; row<3; row++) for (byte col=0; col<3; col++){
      dpushr(0.0); // Initial value
      for (byte i=0; i<3; i++){
        mpush(_MA, row, i); mpush(_MB, i, col); _mult(); _add();
      }
      mpop(_MC, row, col);
    }
  mc2a(); // A=C
}
static void mswap(void){ // Swap matrices A and B
  memcpy(m[4], m[2], 2*3*3*sizeof(double)); ma2b(); mc2a(); // C=B B=A A=C
}
static void mtrans(void){ // Transpose matrix
  for (byte row=0; row<3; row++) for (byte col=0; col<3; col++){
      mpush(msel ? _MB : _MA, row, col); mpop(_MC, col, row);
    }
  if(msel) memcpy(m[2], m[4], 2*3*3*sizeof(double)); // B=C
  else mc2a(); // A=C
}
static void mdetrc(byte r1, byte r2, byte r3, byte c1, byte c2, byte c3, int8_t sign){
  mpush(_MA, r1, c1); mpush(_MA, r2, c2); mpush(_MA, r3, c3);
  _mult(); _mult();
  struct data a=dpop(); mdet+=sign*a.r; mdeti+=sign*a.i;
}
static void mdeterminant(void){ // Calculate determinant of matrix A
  mdet=mdeti=0.0;
  mdetrc(0, 1, 2, 0, 1, 2, 1);
  mdetrc(0, 1, 2, 1, 2, 0, 1);
  mdetrc(0, 1, 2, 2, 0, 1, 1);
  mdetrc(2, 1, 0, 0, 1, 2, -1);
  mdetrc(2, 1, 0, 1, 2, 0, -1);
  mdetrc(2, 1, 0, 2, 0, 1, -1);
}
static void mminor(byte r, byte c){ // Minor determinant, cofactor (-1) and *1/det
  byte r1=(r+1)%3, r2=(r+2)%3, c1=(c+1)%3, c2=(c+2)%3;
  mpush(_MA, r1, c2); mpush(_MA, r2, c1); mpush(_MA, r1, c1); mpush(_MA, r2, c2);
  _mult(); _rot(); _rot(); _mult(); _sub(); // Determinant and cofactor
  dpush((struct data){mdet, mdeti}); _div(); // * 1/det
  mpop(_MC, r, c);
}
static void minv(void){ // Calculate the inverse of matrix A
  mdeterminant();
  if(mdet==0.0 && mdeti==0.0) msgnr=MSGERROR;
  else{
    for(byte row=0; row<3; row++) for (byte col=0; col<3; col++) mminor(row, col);
    mc2a(); // A=C
    mtrans();
  }
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  F O N T  &   P R I N T

const uint8_t ivfd[]={ // Font data (6x7)
  0x00,0x00,0x06,0x07, 0x00,0x00,0x00,0x00,0x00,0x00,0x00, // spc
  0x00,0x00,0x06,0x07, 0x0c,0x0c,0x0c,0x0c,0x0c,0x00,0x0c, // !
  0x00,0x00,0x06,0x07, 0x33,0x11,0x22,0x00,0x00,0x00,0x00, // "
  0x00,0x00,0x06,0x07, 0x12,0x12,0x3f,0x12,0x3f,0x12,0x12, // #
  0x00,0x00,0x06,0x07, 0x0c,0x3f,0x30,0x3f,0x03,0x3f,0x0c, // $
  0x00,0x00,0x06,0x07, 0x38,0x3b,0x06,0x0c,0x18,0x37,0x07, // %
  0x00,0x00,0x06,0x07, 0x1e,0x30,0x33,0x1e,0x33,0x33,0x1d, // &
  0x00,0x00,0x06,0x07, 0x0c,0x04,0x08,0x00,0x00,0x00,0x00, // '
  0x00,0x00,0x06,0x07, 0x1e,0x18,0x18,0x18,0x18,0x18,0x1e, // (
  0x00,0x00,0x06,0x07, 0x1e,0x06,0x06,0x06,0x06,0x06,0x1e, // )
  0x00,0x00,0x06,0x07, 0x00,0x33,0x1e,0x3f,0x1e,0x33,0x00, // *
  0x00,0x00,0x06,0x07, 0x00,0x00,0x0c,0x3f,0x0c,0x00,0x00, // +
  0x00,0x00,0x06,0x07, 0x00,0x00,0x00,0x00,0x0c,0x04,0x08, // ,
  0x00,0x00,0x06,0x07, 0x00,0x00,0x00,0x3f,0x00,0x00,0x00, // -
  0x00,0x00,0x06,0x07, 0x00,0x00,0x00,0x00,0x00,0x00,0x0c, // .
  0x00,0x00,0x06,0x07, 0x00,0x03,0x06,0x0c,0x18,0x30,0x00, // /
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x33,0x33,0x33,0x33,0x3f, // 0
  0x00,0x00,0x06,0x07, 0x0c,0x1c,0x0c,0x0c,0x0c,0x0c,0x3f, // 1
  0x00,0x00,0x06,0x07, 0x3f,0x03,0x03,0x3f,0x30,0x30,0x3f, // 2
  0x00,0x00,0x06,0x07, 0x3f,0x03,0x03,0x3f,0x03,0x03,0x3f, // 3
  0x00,0x00,0x06,0x07, 0x33,0x33,0x33,0x3f,0x03,0x03,0x03, // 4
  0x00,0x00,0x06,0x07, 0x3f,0x30,0x30,0x3f,0x03,0x03,0x3f, // 5
  0x00,0x00,0x06,0x07, 0x3e,0x30,0x30,0x3f,0x33,0x33,0x3f, // 6
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x03,0x03,0x03,0x03,0x03, // 7
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x33,0x3f,0x33,0x33,0x3f, // 8
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x33,0x3f,0x03,0x03,0x1f, // 9
  0x00,0x00,0x06,0x07, 0x00,0x00,0x0c,0x00,0x00,0x0c,0x00, // :
  0x00,0x00,0x06,0x07, 0x00,0x00,0x0c,0x00,0x0c,0x04,0x08, // ;
  0x00,0x00,0x06,0x07, 0x06,0x0c,0x18,0x30,0x18,0x0c,0x06, // <
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x00,0x3f,0x00,0x00, // =
  0x00,0x00,0x06,0x07, 0x18,0x0c,0x06,0x03,0x06,0x0c,0x18, // >
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x03,0x0f,0x0c,0x00,0x0c, // ?
  0x00,0x00,0x06,0x07, 0x3f,0x03,0x3b,0x3b,0x3b,0x33,0x3f, // @
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x33,0x3f,0x33,0x33,0x33, // A
  0x00,0x00,0x06,0x07, 0x3e,0x36,0x36,0x3f,0x33,0x33,0x3f, // B
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x30,0x30,0x30,0x33,0x3f, // C
  0x00,0x00,0x06,0x07, 0x3e,0x37,0x33,0x33,0x33,0x37,0x3e, // D
  0x00,0x00,0x06,0x07, 0x3f,0x30,0x30,0x3f,0x30,0x30,0x3f, // E
  0x00,0x00,0x06,0x07, 0x3f,0x30,0x30,0x3e,0x30,0x30,0x30, // F
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x30,0x37,0x33,0x33,0x3f, // G
  0x00,0x00,0x06,0x07, 0x33,0x33,0x33,0x3f,0x33,0x33,0x33, // H
  0x00,0x00,0x06,0x07, 0x3f,0x0c,0x0c,0x0c,0x0c,0x0c,0x3f, // I
  0x00,0x00,0x06,0x07, 0x0f,0x03,0x03,0x03,0x03,0x33,0x3f, // J
  0x00,0x00,0x06,0x07, 0x33,0x36,0x3c,0x38,0x3c,0x36,0x33, // K
  0x00,0x00,0x06,0x07, 0x30,0x30,0x30,0x30,0x30,0x30,0x3f, // L
  0x00,0x00,0x06,0x07, 0x33,0x3f,0x3f,0x33,0x33,0x33,0x33, // M
  0x00,0x00,0x06,0x07, 0x33,0x33,0x3b,0x3f,0x37,0x33,0x33, // N
  0x00,0x00,0x06,0x07, 0x1e,0x33,0x33,0x33,0x33,0x33,0x1e, // O
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x33,0x3f,0x30,0x30,0x30, // P
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x33,0x33,0x33,0x37,0x3e, // Q
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x33,0x3f,0x36,0x36,0x37, // R
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x30,0x3f,0x03,0x33,0x3f, // S
  0x00,0x00,0x06,0x07, 0x3f,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c, // T
  0x00,0x00,0x06,0x07, 0x33,0x33,0x33,0x33,0x33,0x33,0x3f, // U
  0x00,0x00,0x06,0x07, 0x33,0x33,0x33,0x33,0x33,0x1e,0x0c, // V
  0x00,0x00,0x06,0x07, 0x33,0x33,0x33,0x33,0x3f,0x3f,0x33, // W
  0x00,0x00,0x06,0x07, 0x33,0x33,0x1e,0x0c,0x1e,0x33,0x33, // X
  0x00,0x00,0x06,0x07, 0x33,0x33,0x33,0x3f,0x0c,0x0c,0x0c, // Y
  0x00,0x00,0x06,0x07, 0x3f,0x33,0x06,0x0c,0x18,0x33,0x3f, // Z
  0x00,0x00,0x06,0x07, 0x00,0x03,0x0f,0x3f,0x0f,0x03,0x00, // [ left
  0x00,0x00,0x06,0x07, 0x00,0x30,0x18,0x0c,0x06,0x03,0x00, // bkslsh
  0x00,0x00,0x06,0x07, 0x00,0x30,0x3c,0x3f,0x3c,0x30,0x00, // ] right
  0x00,0x00,0x06,0x07, 0x0c,0x1e,0x33,0x00,0x00,0x00,0x00, // ^
  0x00,0x00,0x06,0x07, 0x00,0x00,0x00,0x00,0x00,0x00,0x3f, // _
  0x00,0x00,0x06,0x07, 0x1e,0x33,0x1e,0x00,0x00,0x00,0x00, // ` °
  0x00,0x00,0x06,0x07, 0x00,0x00,0x1f,0x03,0x3f,0x33,0x3f, // a
  0x00,0x00,0x06,0x07, 0x30,0x30,0x3f,0x33,0x33,0x33,0x3f, // b
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x30,0x30,0x30,0x3f, // c
  0x00,0x00,0x06,0x07, 0x03,0x03,0x3f,0x33,0x33,0x33,0x3f, // d
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x33,0x3f,0x30,0x3f, // e
  0x00,0x00,0x06,0x07, 0x0f,0x0c,0x3f,0x0c,0x0c,0x0c,0x0c, // f
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x33,0x3f,0x03,0x3f, // g
  0x00,0x00,0x06,0x07, 0x30,0x30,0x3f,0x33,0x33,0x33,0x33, // h
  0x00,0x00,0x06,0x07, 0x0c,0x00,0x1c,0x0c,0x0c,0x0c,0x3f, // i
  0x00,0x00,0x06,0x07, 0x03,0x00,0x07,0x03,0x03,0x33,0x3f, // j
  0x00,0x00,0x06,0x07, 0x30,0x30,0x33,0x36,0x3c,0x36,0x33, // k
  0x00,0x00,0x06,0x07, 0x3c,0x0c,0x0c,0x0c,0x0c,0x0c,0x3f, // l
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x3f,0x33,0x33,0x33, // m
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x33,0x33,0x33,0x33, // n
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x33,0x33,0x33,0x3f, // o
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x33,0x33,0x3f,0x30, // p
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x33,0x33,0x3f,0x03, // q
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x33,0x30,0x30,0x30, // r
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x30,0x3f,0x03,0x3f, // s
  0x00,0x00,0x06,0x07, 0x0c,0x0c,0x3f,0x0c,0x0c,0x0c,0x0f, // t
  0x00,0x00,0x06,0x07, 0x00,0x00,0x33,0x33,0x33,0x33,0x3f, // u
  0x00,0x00,0x06,0x07, 0x00,0x00,0x33,0x33,0x33,0x1e,0x0c, // v
  0x00,0x00,0x06,0x07, 0x00,0x00,0x33,0x33,0x33,0x3f,0x3f, // w
  0x00,0x00,0x06,0x07, 0x00,0x00,0x33,0x33,0x1e,0x33,0x33, // x
  0x00,0x00,0x06,0x07, 0x00,0x00,0x33,0x33,0x3f,0x03,0x3f, // y
  0x00,0x00,0x06,0x07, 0x00,0x00,0x3f,0x06,0x0c,0x18,0x3f, // z
  0x00,0x00,0x06,0x07, 0x00,0x0c,0x1e,0x3f,0x00,0x00,0x00, // { up
  0x00,0x00,0x06,0x07, 0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c, // |
  0x00,0x00,0x06,0x07, 0x00,0x00,0x00,0x3f,0x1e,0x0c,0x00, // } down
  0x00,0x00,0x05,0x07, 0x00,0x00,0x00,0x04,0x00,0x00,0x00  // ~ separator
};
const uint16_t ivoffs[]={
    0, 11, 22, 33, 44, 55, 66, 77, 88, 99, // _ ! " # $ % & ' ( )
  110,121,132,143,154,165,176,187,198,209, // * + , - . / 0 1 2 3
  220,231,242,253,264,275,286,297,308,319, // 4 5 6 7 8 9 : ; < =
  330,341,352,363,374,385,396,407,418,429, // > ? @ A B C D E F G
  440,451,462,473,484,495,506,517,528,539, // H I J K L M N O P Q
  550,561,572,583,594,605,616,627,638,649, // R S T U V W X Y Z [
  660,671,682,693,704,715,726,737,748,759, // b ] ^ _ ` a b c d e
  770,781,792,803,814,825,836,847,858,869, // f g h i j k l m n o
  880,891,902,913,924,935,946,957,968,979, // p q r s t u v w x y
  990,1001,1012,1023,1034                  // z { | } ~
};
line_font_t ivfs={ // Font structure
  "fnt", // name - Font name
  6,     // width - Font width in pixel
  7,     // heigth - Font height in pixel
  0,     // baseline - Baseline in pixel
  32,    // first_char - Code of first character
  95,    // char_cnt - Number of characters
  2,     // scale_x - X-Scaling factor
  4,     // scale_y - Y-Scaling factor
  ivfd,  // data - Font data
  ivoffs // offs - Character offsets in data
};
disp_stat_t ivfnt={ // Font state
  &ivfs,// f - Current font
  1, 1, // x y - Current x,y position
  0,    // ln_offs - Line offset (when displaying by line numbers)
  0,    // y_top_grd - Don't overwrite anything above this line
  0,    // ya - Lines to fill above the font
  0,    // yb - Lines to fill below the font
  2,    // xspc - Space between chars
  0,    // xoffs - X offset for first char on line
  0,    // fixed - Draw in fixed width
  0,    // inv - Draw inverted
  0,    // bgfill - Fill background while drawing
  0,    // lnfill - Fill whole line before writing line
  0,    // newln - New line after writing line
  0     // post_offs - X-advance character width minus this value (if not-null)
};

static void fontsetS(byte ypos, byte n){ // Settings for small font
  ivfnt.xspc=2; ivfnt.inv=0; ivfnt.x=3; ivfnt.y=ypos+n*31; // Font set
  ivfs.scale_x=2; ivfs.scale_y=4; // Font scale
}
static void fontsetM(void){ // Settings for medium font
  ivfnt.x=2; ivfnt.y=4; ivfnt.xspc=3; ivfnt.inv=0; // Font set
  ivfs.scale_x=3; ivfs.scale_y=6; // Font scale
}
static void fontsetL(void){ // Settings for large font
  ivfnt.x=6; ivfnt.y=55; ivfnt.xspc=8; ivfnt.inv=0; // Font set
  ivfs.scale_x=6; ivfs.scale_y=12; // Font scale
}

// STATUS LINE

static void printstatus(){ // Print status line
  strfill(sline, ' ', MAXSTRLEN);
  if(isshow && dp){ // Print TOS in status line
    double a=ds[dp-1].r;
    if(ishex) sprintf(sline, "%X", (unsigned int)a); // hex
    else{ // dec
      if(a>=0.0){
        if(a<1E8 && a>1E-3) sprintf(sline, "%-21.16g", a);
        else sprintf(sline, "%-21.14g", a);
      }
      else{
        if(-a<1E7 && -a>1E-3) sprintf(sline, "%-21.15g", a);
        else sprintf(sline, "%-21.13g", a);
      }
    }
  }
  else{ // Print status
    if(isshift) msgnr=MSGSHIFT; // Shift

    if(issolve || isint || isplotcalc) msgnr=MSGRUN; // Running

    if(msgnr){strstrat(sline, msg[msgnr], 0); msgnr=0;} // Message
    else if(isprintalpha) strstrat(sline, alpha, 0);// Alpha
    else if(isselasc){strstrat(sline, "RENAME: ", 0); // Rename prg
      for(byte i=0; i<NLEN-isselasc; i++) sline[8+i]=prgname[psel][i];
    }
    else if(ismat){ // Matrix
      sline[0]=msel+'A'; sline[2]=matr+'1'; sline[4]=matc+'1'; // Matrix/row/col
      if(ismatview) strstrat(sline, "VIEW", 6);
      else strstrat(sline, "ASSIGN", 6);
    }
    else if(isprgsel) strstrat(sline, "PRG SELECT", 0); // Program select
    else if(isconvert) strstrat(sline, "CONVERT TO", 0); // Convert
    else if(isphys) strstrat(sline, "CONSTANTS", 0); // Physical constants
    else if(isdict){
      if(isassign) strstrat(sline, "ASSIGN FKEY", 0); // Assign
      else strstrat(sline, "DICTIONARY", 0); // Dictionary
    }
    else if(view) strstrat(sline, "COMPLEX VIEW", 0); // Complex view

    if(isfloated){sline[13]='!'; isfloated=FALSE;} // Floated
    else {sline[13]='A'; if(dp) sline[13]+=dp-1+(isedit==TRUE);} // Stack level

    if(isdict || isphys || isselasc) sline[17]=ones(sel)+'0'; // Menu level

    if(ishex) sline[14]='x'; // Hex view

    if(ishyp) sline[17]='h'; // Hyperbolic

    sline[16]=(ispolar ? 'P' : 'R'); // Polar or rect input

    if(!isreal() && !isedit){ // Complex
      sline[15]='C';
      if(view==VIEWRE) sline[17]='r'; // Real
      else if(view==VIEWIM) sline[17]='i'; // Imaginary
      else if(view==VIEWABS) sline[17]='a'; // Absolute
      else if(view==VIEWANGLE) sline[17]='`'; // Angle
    }

    sline[18]=i2c(_max(0, read_power_voltage()*9/500-45)); // Battery state (2.5 - 3 V)
    if(get_lowbat_state()) sline[18]='!'; // Low battery state
  }
  fontsetM();
  if(color & 0x01){ // Inverse status
    ivfnt.inv=1; lcd_fill_rect(0, 0, LCD_X, TOSY1-1, BLACK); // BG
  }
  lcd_puts(&ivfnt, sline);
}

// TOS

static void printtosfloat(){ // Print TOS float
  strfill(sline, ' ', MAXSTRLEN);

  if(isedit){ //*** Print edit string
    char st[MAXSTRLEN]="";
    strcat(st, ed); strcat(st, "_"); // Editstring + underpath
    char * pos=strchr(st, expchar); if(pos-st) st[pos-st]=' '; // E
    if(strlen(st)>8){ // Shorten editstring
      sline[0]='_'; // Toppath
      memmove(sline+1, st+strlen(st)-8, 8);
      sline[9]='\0';
    }
    else strcpy(sline, st);
  }
  else{ //*** Print TOS or MATRIX
    if(!dp && !ismat){sline[0]='_'; sline[1]='\0';} // Empty stack
    else{ // TOS
      double a=0.0;
      if(ismat) a=(msel ? m[2][matr][matc] : m[0][matr][matc]); // Matrix
      else if(dp){ // TOS
        a=ds[dp-1].r; // re - default
        if(view==VIEWIM) a=ds[dp-1].i; // im
        else if(view==VIEWANGLE) a=angle(ds[dp-1].r, ds[dp-1].i); // angle
        else if(view==VIEWABS || (ispolar && !isreal() && view!=VIEWRE)) // abs
          a=absolute(ds[dp-1].r, ds[dp-1].i);
      }
      if(ishex){ // HEX
        sprintf(sline, "%x", (unsigned int)abs(a));
        if(a<0.0){ // Negative number (add -)
          memmove(sline+1, sline, strlen(sline)+1); sline[0]='-';
        }
      }
      else{ // DEC
        if(a>=0.0){
          if(a<1E8 && a>1E-3) sprintf(sline, "%-9.8g", a);
          else sprintf(sline, "%-9.5g", a);
        }
        else{
          if(-a<1E7 && -a>1E-3) sprintf(sline, "%-9.7g", a);
          else sprintf(sline, "%-9.4g", a);
        }
        byte pos=strlen(sline); // Remove trailing blanks
        while(sline[--pos]==' ') sline[pos]='\0';
        char * p=strchr(sline, 'e'); if(p-sline) sline[p-sline]=' '; // e
        if(sline[p-sline+1]=='+') strdelpos(sline, p-sline+1); // Erase + from exp
        if(sline[p-sline+1]=='-') strdelpos(sline, p-sline); // Erase exp-E (exp<0)
      }
    }
  }
  fontsetL();
  if(color & 0x02){ // Invert
    ivfnt.inv=1; lcd_fill_rect(0, TOSY1, LCD_X, TOSY2-TOSY1, BLACK);
  }
  else{lcd_fillLine(TOSY1-1, 0); lcd_fillLine(TOSY2, 0);} // Regular
  lcd_puts(&ivfnt, sline);
}

// F-KEYS

static void printfkeyuser(byte n, byte i){ // Prepare name of user program
  n-=MAXCMDI;
  if(strlen(prgname[n])==0) strstrat(sline, "----", i*5); // empty
  else strnamat(sline, n, i*5); // user prg
}
static void printfkeyline(byte n){ // Print F-key line number n
  for(byte i=1; i<6; i++) sline[5*i-1]='~'; // F-key separator
  fontsetS(148, n);
  if(color & 0x04){ // Invert
    ivfnt.inv=1; lcd_fill_rect(0, 145+n*31, LCD_X, 33, BLACK);
  }
  lcd_puts(&ivfnt, sline);
}
static void printfkeys(){ // Print F-keys
  if(isconvert){ // Conversions
    strcpy(sline, "  km mi      m ft     cm in"); printfkeyline(0);
    strcpy(sline, "  kg lbs     l gal    `F `C"); printfkeyline(1);
    strcpy(sline, " deg rad     h hms    kW HP"); printfkeyline(2);
  }
  else if(isdict || isphys || isprgsel || isselasc){
  // Dictionary, physical constants, program select, Ascii chars
    for(byte i=0; i<3; i++){ // 3 lines
      strfill(sline, ' ', MAXSTRLEN);
      for(byte j=0; j<6; j++){ // 6 entries per line
        byte nr=sel*FKEYNR+i*6+j;
        if(isdict){ // dict
          if(cmdsort[nr]<MAXCMDI) // intrinsic
            strstrat(sline, (char*)cmd[cmdsort[nr]], j*5);
          else printfkeyuser(cmdsort[nr], j); // user
        }
        else if(isprgsel){ // prgsel
          if(strlen(prgname[nr])==0) strstrat(sline, "----", j*5); // no prg
          else strnamat(sline, nr, j*5);
        }
        else if(isselasc){if(nr<96) sline[(byte)(j*5.7)]=nr+32;} // ascii
        else strstrat(sline, pcname[nr], j*5); // phys
      }
      printfkeyline(i);
    }
  }
  else{ // Standard
    strfill(sline, ' ', MAXSTRLEN); // Top F-Keys, matrix or prg functions
    if(ismat) strcpy(sline, "DET  TRNS COPY LOAD SAVE MCLR"); // Matrix
    else if(isprg) strcpy(sline, "EDIT REN  DEL       LOAD SAVE"); // Prg
    else for(byte i=0; i<6; i++){ // Standard
      byte n=i; if(isshift) n+=6;
      if(fkeys[n]<MAXCMDI) strstrat(sline, (char*)cmd[fkeys[n]], i*5); // Intrinsic
      else printfkeyuser(fkeys[n], i); // User
    }
    printfkeyline(0);

    if(isshift) strcpy(sline, "SUM- PWR  SQR  PW10 EXP  GTO"); // Second line
    else strcpy(sline, "SUM+ INV  SQRT LOG  LN   XEQ");
    printfkeyline(1);

    if(isshift) strcpy(sline, "CPLX %    PI   ASIN ACOS ATAN"); // Third line
    else strcpy(sline, "STO  RCL  ROT  SIN  COS  TAN");
    printfkeyline(2);
  }
}

// PLOT

static void plotscale(byte n){ // Scale plot (zoom, shift)
  double f=(plotb-plota)/4; // Factor
  if(n==1)     {plota+=f; plotb+=f;} // 1: Right
  else if(n==2){plota-=f; plotb-=f;} // 2: Left
  else if(n==3){plota-=f; plotb+=f;} // 3: Zoom out
  else         {plota+=f; plotb-=f;} // 4: Zoom in
  plotd=(plotb-plota)/(PLTX);
  dpushr(plota); runs=0;
  isplotcalc=TRUE; isplot=FALSE;
}
static void printplot(void){ // Print plot
  ymax=ymin=plot[0];
  for(byte i=0; i<PLTX; i++){ // Find ymax and ymin
    ymax=_max(ymax, plot[i]); ymin=_min(ymin, plot[i]);
  }
  double scale=(ymax-ymin)/PLTY;
  if(plota*plotb<=0) // Y-axis
    lcd_fill_rect((plota*PLTX/(plota-plotb)+0.5)*PLTPIX, 0, 1, LCD_Y, BLACK);
  if(ymin*ymax<=0) // X-axis
    lcd_fill_rect(0, (PLTY+ymin/scale+0.5)*PLTPIX, LCD_X, 1, BLACK);
  for(byte i=0; i<PLTX; i++) // Function plot
    lcd_fill_rect(i*PLTPIX, (PLTY+(ymin-plot[i])/scale)*PLTPIX, PLTPIX, PLTPIX, BLACK);
}

// MAIN PRINT

static byte printscreen(){ // Print screen due to state
  lcd_clear_buf();

  if(isplot) printplot(); // Plot

  else if(isprgedit){ // Edit program
    byte esc=0, preesc=0;
    for(byte i=0; i<pstart; i++) if(prg[psel][i]==_ESC) preesc++;
    for(byte i=pstart; i<6+pstart && i<=pend-esc; i++){ // 6 lines
      strfill(sline, ' ', MAXSTRLEN);
      strintat(sline, i-preesc*NLEN, 3); // Line number
      if(i==pp-esc) sline[1]=']'; // Cursor
      if(i==pstart-esc){ // First line - add on
        if(isshift) strstrat(sline, "SHIFT", 12);
        strnamat(sline, psel, 18); // Prg name
        strintat(sline, pp-esc, 23); sline[25]='/'; // Prg line
        strintat(sline, pend, 26); // Prg size
      }

      if(i==pend-esc) strstrat(sline, "END", 6); // _END
      else if(prg[psel][i+esc]==_ESC){ // User program
        for(byte j=0; j<NLEN; j++) sline[6+j]=prg[psel][i+esc+1+j];
        esc+=NLEN;
      }
      else strstrat(sline, (char*)cmd[prg[psel][i+esc]], 6); // Intrinsic command

      fontsetS(10, i-pstart); lcd_puts(&ivfnt, sline);
      lcd_fillLine(206, 0); // Top_F-key separator line
      strcpy(sline, "INS   PG{ PG}  HOME END   DEL");
      printfkeyline(2);
    }
  }

  else if(isimgview){ // View image
    byte * bmp=malloc(12610);
    FIL fil; // File object
    FRESULT fr; // FatFs return code
    UINT btr=12610, br; // Bytes to read and bytes read
    fr=f_open(&fil, "IV42/iv42help.bmp", FA_READ);
    if(!fr) f_read(&fil, bmp, btr, &br);
    f_close(&fil);
    for(byte i=0; i<240; i++){
      byte d[50];
      for(byte j=0; j<50; j++) d[j]=~bmp[(129+i*52)+(50-j)]; // INvert and flip
      memcpy(lcd_line_addr(239-i), d, 50); // Write line to screen buffer
    }
    free(bmp); //Free malloc memory
  }

  else{ // Standard GUI
    printstatus(); // Print status line
    printtosfloat(); // Print TOS (top of stack)
    printfkeys(); // Print F-keys
  }


  lcd_refresh();
  return(FALSE); // To determine isprintscreen
}

// SELECTION MENU

static byte menuselect(int k, byte blocks) { // Selection (1 block = 18 slots)
  byte fn=key2fn[k]-25;
  if(fn<FKEYNR) return(sel*FKEYNR+fn); // Return selected function key
  if(k==KEY_DOWN || k==KEY_DOT){if(sel<blocks-1) sel++; else sel=0;} // Down
  else if(k==KEY_UP || k==KEY_0){if(sel>0) sel--; else sel=blocks-1;} // Up
  else if(k==KEY_4 || k==KEY_2){if(sel<blocks-2) sel+=2; else sel=blocks-1;} // 2 x Down
  else if(k==KEY_7 || k==KEY_1){if(sel>1) sel-=2; else sel=0;} // 2 x Up
  else if(k==KEY_8) sel=0; // POS1
  else if(k==KEY_5) sel=blocks-1; // END
  else return(_END); // Any other key pressed - Escape, end
  return(_END-1); // Nothing selected - stay in loop
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  F I L E   O P E R A T I O N S

static void fkeyload(void){ // Save F-key assignments
  FIL fil; // File object
  FRESULT fr; // FatFs return code
  UINT btr=sizeof(fkeys), br; // Bytes to read and bytes read
  fr=f_open(&fil, "IV42/fkeys", FA_READ);
  if(!fr) f_read(&fil, fkeys, btr, &br);
  f_close(&fil);
}
static void fkeysave(void){ // Save F-key assignments
  FIL fil; // File object
  FRESULT fr; // FatFs return code
  UINT btw=sizeof(fkeys), bw; // Bytes to write and bytes written
  fr=f_open(&fil, "IV42/fkeys", FA_CREATE_ALWAYS | FA_WRITE);
  if(!fr) f_write(&fil, fkeys, btw, &bw);
  f_close(&fil);
}

static void stoload(void){ // Load register
  FIL fil; // File object
  FRESULT fr; // FatFs return code
  UINT btr=REGISTER*sizeof(struct data), br; // Bytes to read and bytes read
  fr=f_open(&fil, "IV42/regs", FA_READ);
  if(!fr) f_read(&fil, reg, btr, &br);
  f_close(&fil);
}
static void stosave(void){ // Save register
  FIL fil; // File object
  FRESULT fr; // FatFs return code
  UINT btw=REGISTER*sizeof(struct data), bw; // Bytes to write and bytes written
  fr=f_open(&fil, "IV42/regs", FA_CREATE_ALWAYS | FA_WRITE);
  if(!fr) f_write(&fil, reg, btw, &bw);
  f_close(&fil);
}

static void setload(void){ // Load settings
  FIL fil; // File object
  FRESULT fr; // FatFs return code
  UINT br; // Bytes read
  fr=f_open(&fil, "IV42/set", FA_READ);
  if(!fr){
    f_read(&fil, &color, 1, &br); // Color
    f_read(&fil, &ispolar, 1, &br); // Complex
    f_read(&fil, &ishex, 1, &br); // Hex
    f_read(&fil, &psel, 1, &br); // Selected program
  }
  f_close(&fil);
}
static void setsave(void){ // Save settings
  FIL fil; // File object
  FRESULT fr; // FatFs return code
  UINT bw; // Bytes written
  fr=f_open(&fil, "IV42/set", FA_CREATE_ALWAYS | FA_WRITE);
  if(!fr){
    f_write(&fil, &color, 1, &bw); // Color
    f_write(&fil, &ispolar, 1, &bw); // Complex
    f_write(&fil, &ishex, 1, &bw); // Hex
    f_write(&fil, &psel, 1, &bw); // Selcted program
  }
  f_close(&fil);
}

static void prglistload(void){ // Load register
  byte isloadOK=TRUE; // Returns error message (at least one prg)
  FIL fil; // File object
  FRESULT fr; // FatFs return code
  UINT btr=sizeof(prgname), br; // Bytes to read and bytes read
  fr=f_open(&fil, "IV42/plist", FA_READ);
  if(!fr) for(byte i=0; i<MAXPRG; i++){ // Empty programs
    f_read(&fil, prgname[i], NLEN, &br);
    if(strcmp(prgname[i], "----")==0) prgname[i][0]='\0';
  }
  else isloadOK=FALSE; // Prg list not loaded
  f_close(&fil);

  if(isloadOK) for(byte i=0; i<MAXPRG; i++){ // Load all programs
    if(strlen(prgname[i])>0){
      btr=MAXPRGLEN;
      char s[MAXSTRLEN];
      strcpy(s, "IV42/"); strcat(s, prgname[i]); s[9]='.'; s[10]='p'; s[11]='\0';
      fr=f_open(&fil, s, FA_READ);
      if(!fr) f_read(&fil, prg[i], btr, &br); // Prg loaded
      else isloadOK=FALSE; // Prg not loaded
      f_close(&fil);
    }
  }
  if(!isloadOK) msgnr=MSGFILE; // Not all files proper loaded
}
static void prglistsave(void){ // Save list of used programs
  FIL fil; // File object
  FRESULT fr; // FatFs return code
  UINT bw; // Bytes written
  fr=f_open(&fil, "IV42/plist", FA_CREATE_ALWAYS | FA_WRITE);
  if(!fr) for(byte i=0; i<MAXPRG; i++){ // Save all programs
    char s[MAXSTRLEN];
    if(strlen(prgname[i])==0) strcpy(s, "----"); else strcpy(s, prgname[i]);
    f_write(&fil, s, NLEN, &bw);
  }
  f_close(&fil);
}

static void loadall(void){ // Load all data when starting IV42
  fkeyload(); // F-Keys
  stoload(); // Register
  setload(); // Settings
  prglistload(); // Used program list
}
static void saveall(void){ // Save all data before quit
  sys_disk_write_enable(1);
  fkeysave(); // F-Keys
  stosave(); // Register
  setsave(); // Settings
  prglistsave(); // Used program list
  sys_disk_write_enable(0);
}

static int pgmldfn(const char * fpath, const char * fname, void * data){ // File select function
  FRESULT res;
  res=f_open(ppgm_fp, fpath, FA_READ);
  if(res!=FR_OK) msgnr=MSGFILE;
  else{ // Import program file
    for(byte i=0; i<NLEN; i++) prgname[psel][i]=fname[i]; // Name
    FIL fil; // File object
    FRESULT fr; // FatFs return code
    UINT btr=MAXPRGLEN, br; // Bytes to read and bytes read
    char string[MAXSTRLEN];
    strcpy(string, "IV42/"); strcat(string, fname);
    fr=f_open(&fil, string, FA_READ);
    if(!fr){
      f_read(&fil, prg[psel], btr, &br);
      isprgloaded=TRUE; // Needed for "loaded" message
    }
    f_close(&fil);
  }
  f_close(ppgm_fp);
  return(MRET_EXIT);
}
static void loadprg(void){ // Load user program from USB disk
  isprgloaded=FALSE;
  file_selection_screen("LOAD PROGRAM", "IV42", "p", &pgmldfn, 0, 0, NULL);
  if(isprgloaded) msgnr=MSGLOADED;
  sort();
}
static void saveprg(void){ // Save programm to USB disk
  sys_disk_write_enable(1);
  FIL fil; // File object
  FRESULT fr; //FatFs return code
  UINT btw=prglen()+1, bw; // Bytes to write and bytes written
  char s[MAXSTRLEN];
  strcpy(s, "IV42/"); strnamat(s, psel, 5); s[9]='.'; s[10]='p'; s[11]='\0';
  fr=f_open(&fil, s, FA_CREATE_ALWAYS | FA_WRITE);
  if(!fr) f_write(&fil, prg[psel], btw, &bw);
  f_close(&fil);
  sys_disk_write_enable(0);
  msgnr=MSGSAVED;
}


//--v----1----v----2----v----3----v----4----v----5----v----6----v----7----v----8
//  M A I N   P R O G R A M

void program_main() {
  byte key=0; // Key variable

  dp=0; dpush((struct data){0.0, 0.0}); dp=0; // Init stack
  check_create_dir("IV42"); // Create working directory if it doesn't exist
  loadall(); // Load status
  sort(); // Sort commands alphabetically

  for(;;){ // Main loop

    if(isprintscreen) isprintscreen=printscreen(); // Print screen

    if(pause){sys_delay(pause*250); pause=0;} // Pause

    if((ST(STAT_PGM_END) && ST(STAT_SUSPENDED)) || // Already in off mode
      (!ST(STAT_PGM_END) && key_empty())){         // Go to sleep if no keys
      CLR_ST(STAT_RUNNING);
      sys_sleep();
    }
    if(ST(STAT_PGM_END) || ST(STAT_SUSPENDED)){ // Wakeup or go to sleep
      if(!ST(STAT_SUSPENDED)){ // Go to off mode
        lcd_set_buf_cleared(0); // Mark no buffer change region
        draw_power_off_image(1);
        LCD_power_off(0);
        SET_ST(STAT_SUSPENDED); SET_ST(STAT_OFF);
      }
      continue; // Already in OFF (continue to sleep)
    }
    SET_ST(STAT_RUNNING); // Wakeup
    CLR_ST(STAT_SUSPENDED); // Clear suspended state
    if(ST(STAT_OFF)){ // Get up from OFF state
      LCD_power_on();
      rtc_wakeup_delay(); // Ensure RTC readings after power off
      CLR_ST(STAT_OFF);
      if (!lcd_get_buf_cleared()) lcd_forced_refresh(); // Redraw LCD buf
    }

    if(!key_empty()) reset_auto_off(); // Key entered - restart auto off timer

    if(mp){ //**** Execute/run code
      if(mp<sizeof(mem)) key=mem[mp++]; // Builtin
      else{ // User
        key=prg[(mp-sizeof(mem))/MAXPRGLEN][(mp-sizeof(mem))%MAXPRGLEN];
        mp++;
        if((key<MAXCMDI && seeked[key]) || (key==40 && ishyp)){ // SINH exception
          apush(mp); // Seeking subroutine detected - branch
        }
      }

      if(key==_ESC){ // Prg calls prg
          char s[MAXSTRLEN];
          for(byte i=0; i<NLEN; i++) // Extract prg name
            s[i]=prg[(mp-sizeof(mem))/MAXPRGLEN][(mp+i-sizeof(mem))%MAXPRGLEN];
          s[NLEN]='\0';
          byte nr=0; // Search prg number fitting to prg name
          while(nr<MAXPRG && strcmp(s, prgname[nr])!=0) nr++;
          if(nr==MAXPRG){mp=0; isprintscreen=TRUE; msgnr=MSGPRG;} // Program not found
          else{ // Program found (nr)
            mp+=NLEN; apush(mp); // Branch
            mp=sizeof(mem)+nr*MAXPRGLEN; // mp to called prg
          }
      }
      else if(key==_END || msgnr){ // _END reached
        if(ap) mp=apop(); // End of subroutine - return
        else{ // End of run
          mp=0;
          if(!issolve && !isint && !isplotcalc && !isslope)
            isprintscreen=TRUE; // Finally print screen
        }
      }
      else{ // Execute
        if(key>=MAXCMDI && key!=_END){ // To big to dispatch
          apush(mp); // Subroutine detected - branch
          seekmem(key); // Seekmem instead of dispatch
        }
        else execute(key); // Dispatchable
      }

      int k=key_pop(); // STOP by pressing BSP or R/S
      if(k==KEY_BSP || k==KEY_RUN){mp=ap=0; msgnr=MSGSTOP; isprintscreen=TRUE;}
      else key_push(k);
    }

    else if(issolve){ //**** SOLVE
      if(++runs<3){
        if(runs==2){ // Second run - f(x0+dx)
        _swap(); dpushr(DELTAX); _add(); // x0+DELTAX ... Prepare new x-value
        }
        execute(MAXCMDI+psel); // Execute selected user program
      }
      else{ // Third run - x1
        _swap(); _div(); dpushr(-1.0); _add(); // f1/f0-1
        dpushr(DELTAX); _swap(); _div(); // diffx=DELTAX/(f1/f0-1)
        double diffx=dpushr(dpopr()); // Rescue diffx for exit condition
        _sub(); // x1=x0-diffx ... improved x-value
        runs=0;
        if(diffx<DELTAX && diffx>-DELTAX){ // Exit
          isprintscreen=TRUE; issolve=FALSE;
        }
        else{_dup(); _dup();} // 3 x1 on stack
      }
    }

    else if (isint) { //**** INTEGRATE
      runs++;
      execute(MAXCMDI+psel);
      if(runs==1) {} // First run - f(b)
      else if(runs==2){ // Second run - f(a)
        fres+=dpopr(); dpushr(inta); // F=F+f(b)
      }
      else if(runs==3){ // Third run - xa
        fres+=dpopr(); dpushr(fx=inta+intdelta); // F=F+f(a)
      }
      else if(runs<=2*INTSTRIPES-1+3){ // 2n-1 stripes
        fres+=((4*((runs-3)/2.0-(int)((runs-3)/2.0)+0.5))*dpopr());
        dpushr(fx+=intdelta);
      }
      else{ // Last run
        dpopr(); // Delete last push (intx)
        dpushr(fres*intdelta/3);
        mp=0; // Prevent one more cycle
        isprintscreen=TRUE; isint=FALSE; // Exit
      }
    }

    else if (isslope) { //**** SLOPE
      runs++;
      execute(MAXCMDI+psel);
      if(runs==1){} // Initial run
      else if(runs==2){ // First run - f(x-2h)
        fres+=dpopr(); dpushr(fx-DELTAX); // Sum and set next x-value
      }
      else if(runs==3){ // Second run - f(x-h)
        fres-=(8.0*dpopr()); dpushr(fx+DELTAX); // Sum and set next x-value
      }
      else if(runs==4){ // Third run - f(x+h)
        fres+=(8.0*dpopr()); dpushr(fx+2.0*DELTAX); // Sum and set next x-value
      }
      else{ // Last run - f(x+2h)
        dpushr((fres-dpopr())/DELTAX/12.0); //dpushr(fx); dpushr(fx-DELTAX);
        mp=0; // Prevent one more cycle
        isprintscreen=TRUE; isslope=FALSE; // Exit
      }
    }

    else if(isplotcalc){ //**** PLOTCALC
      execute(MAXCMDI+psel); // Execute selected user program (set mp)
      if(runs==0){} // First run
      else if(runs<=PLTX){ // SCREENWIDTH runs
        plot[runs-1]=dpopr(); dpushr(plota+runs*plotd);
      }
      else{ // Exit plot calc to isplot
        dpop(); // Delete last result (not used)
        mp=0; // Prevent one more cycle
        isplotcalc=FALSE; isplot=isprintscreen=TRUE;
      }
      runs++;
    }


    else{ //**** Regular key input
      key=key_pop(); // Get key (<0 nokey, >0 keypressed, =0 keyreleased)

      if(key>0){ // Evaluate key
        if(isshift && key==KEY_0){beep(); saveall(); break;} // QUIT

        if(key==KEY_EXIT) SET_ST(STAT_PGM_END); // SUSPEND

        else if(key==KEY_SCREENSHOT){ // Prepare R/S for SCREENSHOT
          beep(); isshift=FALSE; isscreen=isprintscreen=TRUE;
        }
        else if(isscreen && key==KEY_RUN && !isshift){ // SCREENSHOT
          make_screenshot(); isscreen=FALSE;
        }

        else if(isimgview){isimgview=FALSE; isprintscreen=TRUE;}//*** View help image

        else if(view){ //*** View complex number
          if(key==KEY_DOWN || key==KEY_0) if(view>1) view--; else view=VIEWMAX; // Previous
          else if(key==KEY_UP || key==KEY_DOT) if(view<VIEWMAX) view++; else view=1; // Next
          else if(key==KEY_7) view=VIEWRE; // Direct selection
          else if(key==KEY_8) view=VIEWIM;
          else if(key==KEY_4) view=VIEWABS;
          else if(key==KEY_5) view=VIEWANGLE;
          else if(key==KEY_ENTER){ // Push viewed value to stack
            struct data a=dpop(); dpush(a);
            if(view==VIEWRE) dpushr(a.r); // re
            else if(view==VIEWIM) dpushr(a.i); // im
            else if(view==VIEWABS) dpushr(absolute(a.r, a.i)); // abs
            else dpushr(angle(a.r, a.i)); // angle
            view=0;
          }
          else if(key==KEY_BSP || key==KEY_RUN) view=0; // Escape
          isprintscreen=TRUE;
        }

        else if(isconvert){ //*** Conversions
          byte fn=key2fn[key];
          if(fn>=25 && fn<=25+FKEYNR) (*dispatch[fn-25+109])(); // Dispatch
          isconvert=FALSE; isprintscreen=TRUE;
        }

        else if(isplot){ //*** Plot
          if(key==KEY_UP)        plotscale(4); // Zoom in
          else if(key==KEY_DOWN) plotscale(3); // Zoom out
          else if(key==KEY_0)    plotscale(2); // Left
          else if(key==KEY_DOT)  plotscale(1); // Right
          else{ // Push plot dimensions and exit
            dpushr(plota); dpushr(plotb); dpushr(ymin); dpushr(ymax);
            isplot=FALSE; isprintscreen=TRUE;}
        }

        else if(isphys){ //*** Physical constants
          byte entries=sizeof(pc)/sizeof(double); // 36 entries
          byte n=menuselect(key, entries/FKEYNR); // 2 pages
          if(n<entries){dpushr(pc[n]); isphys=FALSE;}
          if(n==_END) isphys=FALSE;
          isprintscreen=TRUE;
        }

        else if(isdict){ //*** Dictionary
          byte n=menuselect(key, (MAXCMDI+MAXPRG)/18);
          if(n<MAXCMDI+MAXPRG){
            if(isprgins){ // Insert program step
              if(cmdsort[n]<MAXCMDI) ppins(cmdsort[n]); // Insert cmd to prg
              else{ // Insert user prg to prg
                ppins(_ESC);
                for(byte i=0; i<NLEN ; i++) ppins(prgname[cmdsort[n]-MAXCMDI][i]);
              }
              isprgins=FALSE; isprgedit=TRUE;
            }
            else if(isassign){ // Assign F-key
              fkeys[(byte)dpopr()-1]=cmdsort[n];
              isassign=FALSE;
            }
            else execute(cmdsort[n]); // Execute
            isdict=FALSE;
          }
          if(n==_END){ //  Escape
            if(isprgins) isprgedit=TRUE; // Go back to prgedit if coming from there
            isdict=isassign=isprgins=FALSE;
          }
          isprintscreen=TRUE;
        }

        else if(ismat){ //*** Matrix mode
          if(key==KEY_SHIFT) msel=msel?0:1; // Toggle A - B
          else if(key==KEY_E) ismatview=ismatview?FALSE:TRUE; // Toggle VIEW - ASSIGN
          else if(key2fn[key] && key2fn[key]<=9){ // Slot keys (1...9)
            byte fn=key2fn[key]-1;
            byte m2r[9]={2,2,2,1,1,1,0,0,0}, m2c[9]={0,1,2,0,1,2,0,1,2};
            matr=m2r[fn]; matc=m2c[fn];
            if(!ismatview) mpop(msel, matr, matc); // Assign
          }
          else if(key==KEY_UP) if(matr) matr--; else matr=2; // UP one row
          else if(key==KEY_DOWN) if(matr<2) matr++; else matr=0; // DOWN one row
          else if(key==KEY_0) if(matc) matc--; else matc=2; // LEFT one col
          else if(key==KEY_DOT) if(matc<2) matc++; else matc=0; // RIGHT one col
          else if(key==KEY_F4) // Load matrix from stack
            for(byte row=3; row>0; row--) for(byte col=3; col>0;col--)
              mpop(msel, row-1, col-1);
          else if(key==KEY_F5) { // Save matrix to stack
            for(byte row=0; row<3; row++) for(byte col=0; col<3;col++)
              mpush(msel, row, col);
            ismat=FALSE;
          }
          else if(key==KEY_DIV) minv(); // INV
          else if(key==KEY_MUL) mmult(); // *
          else if(key==KEY_SUB) maddsub(1); // -
          else if(key==KEY_ADD) maddsub(0); // +
          else if(key==KEY_SWAP) mswap(); // SWAP
          else if(key==KEY_F1){ // DET
            mdeterminant(); dpush((struct data){mdet, mdeti});
          }
          else if(key==KEY_F2) mtrans(); // TRANS
          else if(key==KEY_F3){ // COPY
            if(msel) memcpy(m[0], m[2], 2*3*3*sizeof(double)); // A=B
            else ma2b(); // B=A
          }
          else if(key==KEY_F6) memset(m, 0, 3*2*3*3*sizeof(double)); // CLR
          else if(key==KEY_ENTER && ismatview) mpush(msel, matr, matc); // PUSH
          else if(key==KEY_BSP || key==KEY_RUN) ismat=FALSE; // Escape
          isprintscreen=TRUE;
        }

        else if(isselasc){ //*** Select ascii character (isselasc times)
          byte n=menuselect(key, 6);
          if(n<96){prgname[psel][NLEN-isselasc]=n+32; isselasc--;} // Select
          if(!isselasc) sort();
          isprintscreen=TRUE;
        }

        else if(isprgsel){ //*** Select active user program
          byte n=menuselect(key, MAXPRG/FKEYNR);
          if(n<MAXPRG){psel=n; isprgsel=FALSE;} // Select
          if(n==_END) isprgsel=FALSE; // Exit
          isprintscreen=TRUE;
        }

        else if(isprg){ //*** Treat active user program
          if(key==KEY_F1) _prgedit(); // EDIT
          else if(key==KEY_F2){_prgren(); sort();} // RENAME
          else if(key==KEY_F3){_prgdel(); sort();} // DEL
          else if(key==KEY_F5) loadprg(); // LOAD
          else if(key==KEY_F6) saveprg(); // SAVE
          isprg=FALSE;
          isprintscreen=TRUE;
        }

        else if(isprgedit){ //*** Edit program
          if(key==KEY_UP) ppup(); // up
          else if(key==KEY_DOWN) ppdown(); // down
          else if(key==KEY_BSP || key==KEY_RUN) isprgedit=FALSE; // Exit
          else if(key==KEY_F1){ // ins indirekt
            sel=0; isprgins=isdict=TRUE; isprgedit=FALSE;
          }
          else if(key==KEY_F2){ppup(); ppup(); ppup();} // 3 x Up
          else if(key==KEY_F3){ppdown(); ppdown(); ppdown();} // 3 x Down
          else if(key==KEY_F4) pp=0; // POS1
          else if(key==KEY_F5) pp=pend; // END
          else if(key==KEY_F6){ // del
            byte n=(prg[psel][pp]==_ESC) ? 5: 1;
            for(byte i=0; i<n; i++) ppdel();
          }
          else if(key==KEY_SHIFT) _shift(); // Shift
          else{ // ins direct
            byte fn=key2fn[key];
            if(fn<=MAXCMDK){
              fn+=isshift*(25+FKEYNR); isshift=FALSE; ppins(fn);
            }
          }
          byte pptmp=pp; // Calculate pstart
          for(byte i=0; i<3; i++) ppup();
          pstart=pp; pp=pptmp;
          isprintscreen=TRUE;
        }

        else{ //*** Dispatch function
          byte fn=key2fn[key];
          if(fn<=MAXCMDK){
            fn+=isshift*(25+FKEYNR); (*dispatch[fn])(); // Dispatch
            if(fn>25+FKEYNR && fn<2*25+FKEYNR+FKEYNR) isshift=FALSE; // Clear shift state
            isprintscreen=TRUE;
          }
        }
      } // End of key evaluation

    } // End or regular key input

 } // End of main loop
}