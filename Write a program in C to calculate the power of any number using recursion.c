#include<stdio.h>
int power(int,int);
int main()
{
    int i,j,c;
    printf("enter two number");
    scanf("%d%d",&i,&j);
      c=power(i,j);
     printf("%d",c);
    return 0;
    }
int power(int a,int n)
{
     if(n==0)
        return 1;
        return (a*power(a,n-1));

}
