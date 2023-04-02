//Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main()
{
    int i,pre=0,curr=1,next=0,n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
 //   printf("1");
    for(i=1;i<=n;i++)
    {
        next=pre+curr;
        pre=curr;
        curr=next;
       

    }
     printf("THE VALUE IS %d\n",next);
    return 0;


}