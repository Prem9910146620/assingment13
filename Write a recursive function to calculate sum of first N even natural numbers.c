int nevensum();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    printf("%d",nevensum(i));
    return 0;

}
int nevensum(int n)
{    int s;
    if(n==0)
        return 0;
    s=2*n+nevensum(n-1);
    return s;
}
