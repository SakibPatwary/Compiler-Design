
#include <stdio.h>
#include<ctype.h>

int main()
{
    char str[100];
    char temp;
    int c = 0;

    printf("Enter input: ");
    gets(str);
    printf("Output string: \n");

    while (str[c]){
        temp = str[c];
        if (isspace(temp))
            temp='\n';
        putchar(temp);
        c++;
    }
    printf("\n");
}
