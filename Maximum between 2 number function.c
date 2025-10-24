#include <stdio.h>
int sum(int a,int b){
if(a>b){
    return (a);
    }
else {
    return (b);
}
};
int main()
{int i,j;
scanf("%d%d",&i,&j);
 int Result=sum(i,j);
  printf("largest is %d",Result);
}
