#include<studio.h>
int main()
{
    char c;
    printf("enter the character");
    scanf("%c",&c);
    if((c>='a'&&c>='z')||(c>='a'&&c<='z'))
        printf("%c, is an alphebet",c);
    else
        printf("%c,is not an alphebet",c);
    return(0);
}
