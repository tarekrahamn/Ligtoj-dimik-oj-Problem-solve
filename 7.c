#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    //we need to  used getchar() for flushing unwanted '\n'
    getchar();
    int i;
        //used for test cases
    for(i=1; i<=n; i++)
    {
        char str[100000];
        gets(str);
        int count=0;
        int i=0;
        int flag=0;
        // we this this loop will run at the last of string .when he read full string then he will stop
        //we used some condition for counting only words
        while(str[i]!='\0')
        {
            if( ((str[i]>='0' && str[i]<='9') || str[i]=='-' ) && flag==0 )
            {
                count++;
                flag=1;
            }
            else if(!((str[i]>='0' && str[i]<='9') || str[i]=='-' ) && flag==1)
            {
                flag=0;
            }
            i++;
        }
        printf("%d\n",count);
    }



    return 0;
}