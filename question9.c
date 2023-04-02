//WAP TO CHECK WHETHER A NUMBER IS ARMSTRONG NUMBER OR NOT
#include<stdio.h>
int main()
{   
    int n,n1,n2,n3,sol,temp;
    printf("ENTER THE THREE DIGIT VALUE\n");
    scanf("%d",&n);
    n=temp;
    n1=n%10;
    n=n/10;
    n2=n%10;
    n=n/10;
    n3=n%10;
    n=n/10;
    sol=n1*3+n2*3+n3*3;
    if(temp==sol)
    printf("YES THIS IS ARMASTRONG NUMBER\n");
    else
    printf("THIS IS NOT ARMSTRONG NUMBER");


}