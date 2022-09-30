int countdigit();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);

     printf("%d",countdigit(i));
    return 0;
    }
    int countdigit(int n)
{

     if(n==0)
        return 0;

    return 1+countdigit(n/10);
}
