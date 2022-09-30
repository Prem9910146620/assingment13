int fibo();
int main()
{
    int i,j=5;
    printf("enter the number");
    scanf("%d",&i);
    for(i=1 ;i<=5;i++)
   { printf(" %d",fibo(i)); }
    return 0;

}
int fibo(int n)
{
    if(n==0||n==1)
        return n;
    return fibo(n-1)+fibo(n-2);
}
