int hcf();
int main()
{
    int i,j;
    printf("enter two number ");
    scanf("%d%d",&i,&j);
    i=i>j?i:j;
    j=j<i?j:i;
    hcf(i,j);
    printf("%d",hcf(i,j));
    return 0;
}
int hcf(int a,int b)
{
    if(b==0)
        return a;
    return hcf(b,a%b);
}
