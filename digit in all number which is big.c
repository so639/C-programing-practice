include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
int max=0;
for(int i=a;i!=0;i=i/10)
    if(i%10)>max;
    max =i%10;
printf("%d",max);
return 0;




}
