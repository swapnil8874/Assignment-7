//Write a program to calculate HCF of two numbers
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
    printf("H C F OF THE VALUE IS %d",hcf);
    return 0;
}