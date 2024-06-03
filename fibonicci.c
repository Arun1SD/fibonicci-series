#include<stdio.h>
int main()
{
    int num,first=0,second=1,next;
    printf("enter the num :");
    scanf("%d",&num);
    if(num==0)
    {
        printf("0");
    }

    else 
    {
        printf("Invalid input");
    }
  
    
    if(num>0)
    {
        printf("fibonicci = ");
        printf("%d ",first);
        printf("%d ",second);
       
        next=first+second;

        while(next<=num)
        {
           printf("%d ",next);
           first=second;
           second=next;
           next=first+second;
        }
    }
        printf("\n");

    return 0;

}