#include <stdio.h>
#include <math.h>
 
int main() {
 
    double x1, x2, y1, y2;
    double x, y;
    double dist;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    x = (x2-x1)*(x2-x1);
    y = (y2-y1)*(y2-y1);
    
    dist = sqrt(x+y);
    
    printf("%.4lf\n", dist);
    
    return 0;
}