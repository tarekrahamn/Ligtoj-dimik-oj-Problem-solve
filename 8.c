#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=1; i<=n; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int big,small;
        //check  the big number among this 3 numbers
        if(a>=b && a>=c)
        {
            big=a;
        }
        else if(b>=a && b>=c)
        {
            big=b;
        }
        else
        {
            big=c;
        }
         //check  the small number among this 3 numbers
        if(a<=b && a<=c)
        {
            small=a;
        }
        else if(b<=a && b<=c)
        {
            small =b;
        }
        else
        {
            small=c;
        }
        //simple math for mid numbers
        int mejo=a+b+c-big-small;
        printf("Case %d: %d %d %d\n",i,small,mejo,big);

    }
    return 0;
}