
#include <stdio.h>
int main()
{
    int i,year,weak,days;
    scanf("%d",&i);
    year=i/365;
        printf("%d\n",year);
    weak=(i%365)/7;
    printf("%d\n",weak);
    days=i-((year*365)+(year*7));
    printf("%d",days);
}
