# IV42 - A Powerful Programable RPN Calculator for the DM42 Hardware based on FORTH

<h1>... coming soon</h1>

![IV42](https://user-images.githubusercontent.com/16148023/157909679-c643065a-213b-4ed8-af24-205c9a2d4bd3.png)

See a short video of IV42 at:  https://youtu.be/sDT_JJClNMI

```
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
   DM42-x.xx.pgm to the root directory of the USB disk.
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
button [CUSTOM]. Please note that the file iv42help.htm has to be on the USB
disk in the folder IV42.


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
status line by selecting SHOW [SHOW].

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
 LOADED      File loades message
 LOOP ERROR  Loop, nest or condition error
 NO PROGRAM  Desired program not loaded
 NO SPACE    No space to insert
 RUNNING     Running (solve, integrate, plot calculation)
 SAVED       File saved message
 STOPPED     Program stopped message


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
pressing the keys [^] or [v]. To select the demanded command press the
appropriate F-key.

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

 [ENTER] push value to stack and exit mode                [+/-] negate
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
CLK            ... Runs clock (see time) until break (R/S or DROP)
CLR  [CLEAR]   ... Clear stack
CONS [FLAGS]   ... Physical constants (CODATA)
CONV [CONVERT] ... Unit conversions
COS  [COS]     ... Cosine (of angle in degrees)
CPLX [COMPLEX] ... Enter/deenter complex number (TOS-1, TOS)(see Cmod, R/S)
Cmod [MODES]   ... Toggle complex number input mode (Rectangular or Polar)
DICT [CATALOG] ... Dictionary
DISP [DISP]    ... Change display color or screenshot (hold SHIFT)
DN   [v]       ... Down (menu navigation)
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
HELP [CUSTOM]  ... Browse html file /IV42/index.htm
HEX            ... Toggle HEX DEC view
HOLD           ... Interrupt program execution (R/S key continues)
HYP            ... Switch trigonometic to hyperbolic functions (and vice versa)
IF             ... Execute following code if true
INT            ... Integer value of TOS
INV  [1/x]     ... Inverse
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
UP   [^]       ... Up (menu navigation)
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

