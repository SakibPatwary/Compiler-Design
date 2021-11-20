#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char regex[20], text[20];
    int match = 1;
    printf("Enter Regular Expression: ");
    gets(regex);
    printf("Enter text: ");
    gets(text);

    if(isalpha(regex[0])){
        for(int i = 0; regex[i] != '\0'; i++){
            if(isalpha(regex[i])){
                if(regex[i] == text[i]) continue;
            }
            else if(regex[i] == '*'){
                if(regex[i-2] == text[i-2]){
                    for(int j = i-1; text[j] != '\0'; j++){
                        if(text[j] != regex[i-1]) match = 0;
                    }
                }
                else match = 0;
            }
            else if(regex[i] == '+'){
                if(regex[i-1] == text[i-1]){
                    for(int j = i; j < text[j] != '\0'; j++){
                        if(text[j] != regex[i-1]) match = 0;
                    }
                }
                else match = 0;
            }
            else match = 0;
        }
    }
    else if(regex[0] == '['){
        if(strlen(text) > 1) match = 0;
        else{
            match = 0;
            for(int i = 1; i < strlen(regex) - 1; i++){
                if (text[0] == regex[i]) match = 1;
            }
        }
    }
    else if(isalpha(regex[0]) && regex[1] == '|'){
        if(strlen(text) > 1 || (text[0] != regex[0] && text[0] != regex[2])) match = 0;
        else match = 1;
    }
    if(match) printf("Matched\n");
    else printf("Not matched\n");

    return 0;
}
