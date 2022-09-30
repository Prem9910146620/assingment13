int digitsum();
int main()
{
    int i;
    printf("enter the number of digits");
    scanf("%d",&i);
    printf("%d",digitsum(i));
    return 0;
}
int digitsum(int n)
{ int s;
    if(n==0)
        return 0;
    s=n%10+digitsum(n/10);
    return s;
}
