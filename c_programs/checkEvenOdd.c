#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The number %d is an EVEN number",num);
    }
    else
    {
        printf("The number %d is an ODD number",num);
    }
    
}