#include <stdio.h>

int main()
{

  int h, vel, dist, kml = 12;
  double spent;

  scanf("%d", &h);
  scanf("%d", &vel);

  dist = vel * h;

  spent = (float)dist / kml;
  printf("%.3lf\n", spent);

  return 0;
}