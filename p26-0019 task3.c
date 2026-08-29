/*Task 7: Physics Kinematics & Equation of Motion Calculator
Objective: Apply algebraic physics motion formulas to evaluate distance and velocity.
Requirements: Write a C program (p260000 task7.c) that:
1. Declares the following initial variables:
▶ Initial velocity: float vi = 12.5; (in m/s)
▶ Acceleration: float a = 3.2; (in m/s2
)
▶ Time elapsed: float t = 6.0; (in seconds)
2. Computes:
▶ Final Velocity (vf ): vf = vi + (a × t)
▶ Total Distance Travelled (s): s = (vi × t) + (0.5 × a × t × t)

3. Displays the kinematic parameters and calculated results formatted neatly with 2 deci-
mal places (%.2f).

Expected Output
================ KINEMATICS MOTION REPORT ===============
Initial Velocity (vi): 12.50 m/s
Acceleration (a): 3.20 m/s^2
Time Elapsed (t): 6.00 s
---------------------------------------------------------
Calculated Final Velocity (vf): 31.70 m/s
Calculated Distance (s): 132.60 m
=========================================================*/
#include <stdio.h>
int main()
{
   float vi=12.50, a=3.20 ,t=6.00 ,vf,d;
   vf = vi + (a * t);
  d = (vi*t) + (0.5*a*t*t);

    printf("================ KINEMATICS MOTION REPORT ================\n");
    printf("Initial Velocity (vi): %.2f m/s\n ",vi);
    printf("Acceleration (a):%.2f m/s^2 \n",a);
    printf("Time Elapsed (t):%.2f s \n",t);
    printf("-----------------------------------------------------------\n");

    printf("Calculated final velocity (vf):%.2f m/s \n",vf);
    printf("Calculated Distance (d):%.2f m \n",d);
    printf("===========================================================");
    return 0;
}