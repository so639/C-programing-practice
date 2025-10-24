#include <stdio.h>
int sum(int a,int c,int d,int e,int f){
return (a+c+d+e+f);};

int sum(int a,int c,int d,int e,int f){
return (a-c+d-e-f);};

int sum(int a,int c,int d,int e,int f){
return (a*c*d*e*f);};

int sum(int a,int c,int d,int e,int f){
return (a/c/d/e/f);};


int main(){
int Result=sum(1,3,4,5,1);
printf("add=%d",Result);
printf("sub=%d",Result);
printf("Mul=%d",Result);
printf("Div=%d",Result);

}
