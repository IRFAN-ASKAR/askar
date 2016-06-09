#include<stdio.h>
void check(char a)
    {
     if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a =='I' || a=='O' || a == 'E' || a == 'U')
    printf("\n %c is a vowel", a);
    

            else
        printf("\n %c is a consonant",a);

}
int main()
    {
char a;
    scanf("%c",&a);
    check(a);
}
