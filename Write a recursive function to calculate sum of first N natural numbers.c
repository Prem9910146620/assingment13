int sum();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    sum(i);
    printf("%d",sum(i));
    return 0;
}
int sum(int n)
{  int s;
    if(n==0)
        return;
      s=(n+sum(n-1));
      return s;
}
