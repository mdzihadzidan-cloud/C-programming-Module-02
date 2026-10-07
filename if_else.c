#include<stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    if ( money >= 120 )
        {
           printf(" I will take burger"); 
        }
        else if ( money < 120 && money > 50)
        {
            printf(" I will take pizza");
        } else{
            printf(" Oh! No ");
        }


    return 0;
}