 int sumodd();
     int main()
{
         int i;
         printf("enter the number");
         scanf("%d",&i);
         sumodd(i);
         printf("%d",sumodd(i));

         return 0;
}
     int sumodd(int n)
     {
         int s=0,j;
         if(n==1)
            return 1;
         s=2*n-1+sumodd(n-1);

         return s;
     }
