#include<stdio.h>
#include<conio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    if(n==1 || n==2)
      printf("%d is not prime\n",n);
    else
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
         { printf("%d is not prime\n",n);
           return 0;
         }
    }}
    printf("%d is prime\n",n);
    return 0;



}