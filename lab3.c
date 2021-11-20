#include<stdio.h>
//#include<string.h>


int main() {
    char a[4];

    printf("ENTER INPUT : ");
    gets(a);

    if(strlen(a) == 1){
        switch (a[0]) {
            case '+':{
                printf("Addition\n");
                break;
            }
            case '-':{
                printf("Subtraction\n");
                break;
            }
            case '*':{
                printf("Multiplication\n");
                break;
            }
            case '/':{
                printf("Division\n");
                break;
            }
            case '%':{
                printf("Modulus\n");
                break;
            }
            case '>':{
                printf("Greater than\n");
                break;
            }
            case '<':{
                printf("Less than\n");
                break;
            }
            case '!':{
                printf("Bitwise not\n");
                break;
            }
            case '|':{
                printf("Bitwise or\n");
                break;
            }
            case '&':{
                printf("Bitwise and\n");
                break;
            }
            default:{
                printf("Not an operator\n");
                break;
            }
        }
    }
    else if(strlen(a) == 2){
        if(a[1] == '='){
            switch (a[0]) {
                case '>':{
                    printf("Greater than or equal to\n");
                    break;
                }
                case '<':{
                    printf("Less than or equal to\n");
                    break;
                }
                default:{
                    printf("Not an operator\n");
                    break;
                }
            }
        }
        else if(a[0] == '&'){
            switch (a[1]) {
                case '&':{
                    printf("Logical and\n");
                    break;
                }
                default:{
                    printf("Not an operator\n");
                    break;
                }
            }
        }
        else if(a[0] == '|'){
            switch (a[1]) {
                case '|':{
                    printf("Logical or\n");
                    break;
                }
                default:{
                    printf("Not an operator\n");
                    break;
                }
            }
        }
        else if(a[0] == '+'){
            switch (a[1]) {
                case '+':{
                    printf("Increment\n");
                    break;
                }
                default:{
                    printf("Not an operator\n");
                    break;
                }
            }
        }
        else if(a[0] == '-'){
            switch (a[1]) {
                case '-':{
                    printf("Decrement\n");
                    break;
                }
                default:{
                    printf("Not an operator\n");
                    break;
                }
            }
        }
        else{
            printf("Not an operator\n");
        }
    }
    else{
        printf("Not an operator\n");
    }
    return 0;
}
