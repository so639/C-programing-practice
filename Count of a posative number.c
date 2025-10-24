#include <stdio.h>
int main()
{
    int i,j,num,count=0;
    scanf ("%d",&i);
    printf("enter the number");
    for(j=0;j<i;j++){
          scanf("%d",&num);
          if(num>0)
          {
              count++;
          }
    }
    printf("positive number count id:%d",count);

}
