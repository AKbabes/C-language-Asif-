#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h, d, v;
    double g = 9.8;
    scanf("%lf %lf %lf",&h,&d,&v);

    fall_t = sqrt(2 * h/g);
    reach_t = d/v;

    if(fallt >= reachTime) printf("YES\n");
    else {
        double ans = (x / fallTime) - v;
        printf("NO %.2lf m/s\n",ans);
    }
}
