#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int i;
    for(i=1; i<=T; i++)
    {
        int N;
        scanf("%d",&N);
        printf("Case %d:",i);
        int j;
        //this loop used for for printing divisor
        for(j=1; j<=N; j++)
        {
            // if num can be devided by j 
            // j is a divisor of this number
            if(N%j==0)
            {
                printf(" %d",j);
            }
        }
        printf("\n");

    }

    return 0;
}