#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=0; i<n; i++)
    {
        unsigned long long a,b;
        scanf("%llu %llu",&a,&b);
        //storing a and b in mx and mn
        unsigned long long x=a,y=b;
        //if b is smaller than a then we change value of mx and mn
        // and set a as maximum value
        if(b>a)
        {
            x=b;
            y=a;
            a=x;
        }
        //used for finding LCM
        //we increase mx value by a
        while(x%y!=0)
        {
            x+=a;
        }
        printf("LCM = %llu\n",x);
    }
    return 0;
}


