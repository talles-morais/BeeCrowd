#include <bits/stdc++.h>

using namespace std;

int main() {
    double deg, h, c, l, hip, area;

    while(scanf("%lf%lf%lf%lf", &deg, &h, &c, &l)!=EOF){
        hip = sqrt((h*h)+(c*c));
        area = ((hip*deg)*l)/10000;

        printf("%.4lf\n", area);
    }

    return 0;
}