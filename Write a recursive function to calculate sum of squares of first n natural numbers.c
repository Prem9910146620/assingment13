
int nsquare();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    printf("%d",nsquare(i));
    return 0;

}
int nsquare(int n)
{    int s;
    if(n==0)
        return 0;
    s=n*n+nsquare(n-1);
    return s;
}
