/*vex-vision-config:begin*/
#include "vex.h"
vex::vision::signature RED_1 = vex::vision::signature (1, 8757, 10613, 9685, -2185, -1545, -1865, 2.8, 0);
vex::vision::signature BLUE_2 = vex::vision::signature (2, 455, 2137, 1296, 5041, 7169, 6105, 2.7, 0);
vex::vision::signature SIG_3 = vex::vision::signature (3, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_4 = vex::vision::signature (4, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_5 = vex::vision::signature (5, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_6 = vex::vision::signature (6, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_7 = vex::vision::signature (7, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision Vision1 = vex::vision (vex::PORT21, 50, RED_1, BLUE_2, SIG_3, SIG_4, SIG_5, SIG_6, SIG_7);
/*vex-vision-config:end*/