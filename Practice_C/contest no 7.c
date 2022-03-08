#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,w,s;
    scanf("%d %d %d",&t,&w,&s);
    if(w*4 <= 4 && w*4 >= 8)
        printf("ITS A NEW BLUE SHEET");
    else if(s < w*4)
        printf("BELOW CUT OFF");
    else if(s < t*60/100)
            printf("RED");
    else if(s >= t*60/100 && s < t*75/100)
        printf("YELLOW");
    else if(s >= t*75/100)
            printf("GREEN");
    return 0;
}
