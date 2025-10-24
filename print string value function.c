#include <stdio.h>
void display(char s1[])//void mean no return
{
int i=0;

while(s1[i]!='\0')
{
    printf("%c",s1[i]);
    i++;
}
}

int main()
{char str[]="Bangladesh";
display(str);
}
