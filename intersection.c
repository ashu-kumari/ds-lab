#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,m,n;
    printf("enter no. of elements of array a  ");
    scanf("%d",&n);
    printf("enter no. of elements of array b  ");
    scanf("%d",&m);
    printf("enter elements of array a ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("enter elements of array b  ");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
        printf("intersection is: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
                printf("%d\t",a[i]);
        }
    }
    }
