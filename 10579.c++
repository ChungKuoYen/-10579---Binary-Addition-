#include<stdio.h>
char a[10000] ,b[10000] ,c[10000];
int main()
{
    int num ,nbit ,nbit2 ,i=0,j=0;
    scanf("%d",&num);
    while(num>0)
    {


        scanf("%d",&nbit);
        nbit2=nbit;
        i=0;
        while(i<nbit)
        {
            scanf(" %c",&a[i]);
            i++;

        }
        nbit=nbit2;
        j=0;
        while(j<nbit)
        {
            scanf(" %c",&b[j]);
            j++;

        }
        for(i=nbit2-1;i>=0;i--)
            c[i]='0';

        for(i=nbit2-1;i>=0;i--)
        {
            if(a[i]+b[i]+c[i]-3*'0'==3)
            {
                c[i]='1';
                c[i-1]='1';
            }
            else if(a[i]+b[i]+c[i]-3*'0'==2)
            {
                c[i]='0';
                c[i-1]='1';
            }
            else if(a[i]+b[i]+c[i]-3*'0'==1)
            {
                c[i]='1';

            }
            else if(a[i]+b[i]+c[i]-3*'0'==0)
            {
                c[i]='0';
            }
        }
        num--;
        for(i=0;i<=nbit2-1;i++)
        {
            printf("%c",c[i]);

        }
        printf("\n");
    }
}
