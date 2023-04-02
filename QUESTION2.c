//Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int i,n,pre=0,curr=1,next=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    printf("\n");
    //printf("1\n");
    for(i=0;i<n;i++)
    {
        next=pre+curr;
        pre=curr;
        curr=next;
        printf("%d\n",next);
    }
    return 0;
}