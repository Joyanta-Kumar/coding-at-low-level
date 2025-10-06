// External files
#include <stdio.h>
#include <Windows.h>
#include <math.h>

// Constants
#define PI 3.14159265358979323846
#define SERVO_ANGLE_MIN 0
#define SERVO_ANGLE_MAX 50
#define DELAY 10
#define STEP 2.0

double getY(double x);
double mapRange(double value, double fromMin, double fromMax, double toMin, double toMax);


int main()
{
  double x = 0.0;
  while (1) {
    double y = getY(x);
    int l = (int) ceil(mapRange(y, 0, 1, SERVO_ANGLE_MIN, SERVO_ANGLE_MAX));
    printf("x: %lf\tsin^2(x): %lf\tl: %d", x, y, l);
    for (int i = 0; i < l; i++) {
      printf("*");
    }
    printf("\n");
    Sleep(DELAY);
    x+=STEP;
    if (x > 360.0) {
      x = 0.0;
    }
  }

  return 0;
}


double getY(double x)
{
  return pow(sin(x * PI / 180.0), 4);
}

double mapRange(double value, double fromMin, double fromMax, double toMin, double toMax)
{
  return (value - fromMin) / (fromMax - fromMin) * (toMax - toMin) + toMin;
}