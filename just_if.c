#include <stdio.h>
int main ()
{
    int money;
    scanf("%d", &money);
    if ( money > 5000)
    {
        printf(" I will go to market\n");
    }
    if (money > 300)
    {
        printf(" I will go to Home\n");
    }
    if (money > 7000)
    {
        printf(" I will go to jongale\n");
    }

    return 0;
}