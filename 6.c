#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=1; i<=n; i++)
    {

        int num;
        int sum=0;
        scanf("%d",&num);
        // Find the last digit and a
        //find the last digit of the number and wee need this problem solve
        // for example 12342%10=2
        sum+=num%10;
        //find the first digit of the number and wee need this problem solve
        // We can see 12342/10000=1
        // we used 10000 because , this number have only 5 digits
        sum+=num/10000;
        printf("Sum = %d\n",sum);
    }
    return 0;
}