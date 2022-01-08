#include<stdio.h>
#include<string.h>
int main()
{
    char w[150][150];
    int i,n, l[150];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        {
            gets(w[i]);
            l[i]=strlen(w[i]);
        }

    for(i=0;i<=n;i++)
    {
        if(l[i]>10)
        {
            printf("%c",w[i][0]);
            printf("%d",l[i]-2);
            printf("%c",w[i][l[i]-1]);
            printf("\n");
        }

        else
            puts(w[i]);
    }

        return 0;
}
