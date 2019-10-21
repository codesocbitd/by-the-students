#include <stdio.h>
#include <stdlib.h>
//array representation & writing.//
int main()
{
    int a[10];
    int i,n;
    int sum;
    printf("enter the number of elements!\n");
    scanf("%d",&n);
    if (n>10)
        printf("sorry_array_can't_b_created/n");
    else
        printf("Enter your elements!");
         for(i=0;i<n;i++)
        {
                printf("a[%d]",i);
                scanf("%d",&a[i]);
        }
        printf("/n Your elements are:");
        {
            for(i=0;i<n;i++)
                printf("\n a[%d] = %d\t\n",i,a[i]);
        }
        sum = a[0]+a[1]+a[2]+a[3]+a[4];
        printf("sum:%d",sum);
    return 0;
}
