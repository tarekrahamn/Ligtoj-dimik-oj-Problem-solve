#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i++)
    {
        int x,y,z; // target x,amr y,baki z
        scanf("%d %d %d",&x,&y,&z);
        printf("%0.2lf ",(double)(y*6)/(300-z) );
        // if my run is greater than opponents run , then we don't need any run.. so, required runrate is zero
        if(x-y<0)
        {
            printf("%0.2lf\n",0.0 );
            continue;
        }
        ++x; // if i wanna win, i have to make atleast 1 more run than opponents so, we just increament it
        printf("%0.2lf\n",(double)( (x-y)*6)/z );
    }
    return 0;
}