#include<stdio.h>
int main() {
    int N,T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%lld", &N);
            if(N % 2 == 0)
                printf("even\n");
                else
                printf("odd\n");
    }
    return 0;
}