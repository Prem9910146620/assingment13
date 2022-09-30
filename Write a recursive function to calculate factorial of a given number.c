int fact();
int main()
{
    int i;
    printf("enter the number ");
    scanf("%d",&i);
    printf("%d",fact(i));
    return 0;

}
int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
