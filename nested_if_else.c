#include<stdio.h>
int main ()
{
    int money;
    scanf("%d", &money);
    if( money > 7000)
    {
        printf(" I will Go to Noakhali\n");
        if ( money > 5000)
        {
            printf("I will go to my friends Home \n");
        }
        else{
            printf(" I will stay Noakhali\n");

        }
    }
    else 
    {
        printf(" I will go to home\n");
    }

    return 0;
}