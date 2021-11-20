#include<stdio.h>
#include<string.h>

int digitCheck(char c){
    return (c >= '0' && c <= '9');
}

int main() {
    char str[50];
    int flag = 1;

    printf("ENTER INPUT: ");
    gets(str);

    for(int i = 0; i < strlen(str); i++){
        if(digitCheck(str[i]) == 0 && str[i] != '.'){
            flag = 0;
        }
    }
    if(flag){
        printf("It's a Number\n");
    }
    else{
        printf("It's not number\n");
    }
    return 0;
}





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
