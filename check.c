#include<stdio.h>
void check(int a)
    {
    if(a<0)
        printf("\n negative");
    
    if(a==0)
        printf("\n Zero");
    
    if(a>0)
        printf("\n Positive");
}
int main()
    {
int a;
    scanf("%d",&a);
    check(a);
}
