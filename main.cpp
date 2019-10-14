#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10];
    int n,m,i,j,flag=0,d=0,q=0;
    printf("Enter size of set A: ");
    scanf("%d",&n);
    printf("Enter set A \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of set B: ");
    scanf("%d",&m);
    printf("Enter set B \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("A-B: ");
    i=0;
    for( ;i<n; )
    {
        d=0;
        flag=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
                d=j;
                break;
            }
        }
        if(flag==1)
        {
            for(q=i;q<n-1;q++)
            {
                a[q]=a[q+1];
            }
            n--;
            for(q=d;q<m-1;q++)
            {
                b[q]=b[q+1];
            }
            m--;
        }
        else
        {
            i++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();

}
