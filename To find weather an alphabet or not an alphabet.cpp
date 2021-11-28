#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character you want");
    scanf("%c",&ch);
    (ch>='a' && ch<='z')||(ch>='A' && ch<='Z')
    ? printf("The character you entered is alphabet")
    : printf("The character you entered is not alphabet");
    return 0;
}
