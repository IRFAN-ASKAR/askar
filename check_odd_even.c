#include<stdio.h>
void check(int a)
    {
    if(a%2==0)
        printf(" %d \n even",a);
    
    else if(a%2!=0)
        printf("\n %d odd",a);
    

}
int main()
    {
int a;
    scanf("%d",&a);
    check(a);
}
