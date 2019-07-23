#include<stdio.h>
int series(int n)
{
    int r1,r2,i;
    printf("\n enter the 1st common ratio: ");
    scanf("%d",&r1);
    printf("\n enter the 2nd common ratio: ");
    scanf("%d",&r2);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d ,",power(r1,i/2));
        }
        else
        {
            printf("%d ,",power(r2,i/2));
        }
    }
    return 0;

}
int power(int a,int b)
{
    int i,exp=1;
    for(i=0;i<b;i++)
    {
        exp=exp*a;
    }
    return exp;
}
int main()
{
    int n;
    printf("\n enter the number of terms to be printed:");
    scanf("%d",&n);
    series(n);
    return 0;
}
