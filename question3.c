//WAP to check whether a number is there in the Fibon.series or not.
#include<stdio.h>
int main()
{
    int i,pre=0,curr=1,next=0,n;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
 //   printf("1");
    for(i=0;1;i++)
    {
        next=pre+curr;
        pre=curr;
        curr=next;
    
        if(next==n)
        {
            printf("GIVEN NUMBER IS FOUND\n");
            break;
        }
        if(next>n)
        {
             printf("NUMBER NOT FOUND TRMINATE THE PROCESS");
            break;   
        }
    }
    return 0;

}