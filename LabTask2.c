#include<stdio.h>
#include<string.h>

int main(){
    int i,l,t=0, f = 1;
    char input[20];

    printf("ENTER INPUT : ");
    scanf("%s",&input);
    l= strlen(input);
    for(i =0; i<l; i++) {
        if (input[i] == '(')
            t++;
        else if (input[i] == ')')
            t--;
        else if (input[i] == '*' || input[i] == '/' || input[i] == '+' || input[i] == '-'){
            if ((input[i - 1] > 96 && input[i - 1] < 123 && input[i + 1] > 96 && input[i + 1] < 123) ||
            (input[i - 1] > 47 && input[i - 1] < 58 && input[i + 1] > 47 && input[i + 1] < 58)) {
                continue;
            } else {
                f = 0;
                break;
            }
        }
        else if((input[i] > 96 && input[i] < 123) || (input[i] > 47 && input[i] < 58)){
            continue;

        }
        else if (input[i]=='<'||input[i]=='>'||input[i]=='='){
                continue;
        }

        else {
            f = 0;
            break;
        }
    }
    if(f==1 && t==0)
        printf("VALID");
    else
        printf("INVALID");
}
