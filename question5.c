//WAP to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int i,a,b,hcf;
    printf("ENETR TWO NUMBERS\n");
    scanf("%d %d",&a,&b);
    int min = a<b?a:b;
    for(i=1;i<=min;i++)
    {
        if((a%i==0) & (b%i==0))
        hcf=i;
    }
    if(hcf==1)
    {
    printf("THIS IS A CO-PRIME NUMBER\n");
    }
    else
    printf("THIS IS NOT A CO-PRIME NUMBER");
    return 0;
}