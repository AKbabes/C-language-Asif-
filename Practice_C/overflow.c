/**
The first line of input contains an integer N (1 ≤ N ≤ 500,000) representing the largest number the computer can represent.
The second line contains an integer P (0 ≤ P ≤ 1000), followed by a blank space, followed by a C character (which can be '+' or '*',
representing the addition and multiplication operators, respectively), followed by a blank space, followed by another integer Q (0 ≤ Q ≤ 1000).
This line represents the expression P + Q if the character C is '+', or P × Q if the character C for ‘*’.
*/
 #include<stdio.h>
int main()
{
    int n,p,q;
    char boom;
    scanf("%d",&n);
    scanf("%d %c %d", &p, &boom, &q);

    if(boom == '+')
    {
        if(p+q<=n)
        {
            printf("OK");
        }
        else
        {
            printf("OVERFLOW");
        }
    }
    else if(boom == '*')
    {
        if(p*q<=n)
        {
            printf("ok");
        }
        else
        {
            printf("OVERFLOW");
        }
    }

    return 0;

}


