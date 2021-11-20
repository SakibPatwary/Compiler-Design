#include<stdio.h>

void main(){

char text[30];
int a = 0;

printf("Enter the text: ");
gets(text);
if(text[0] == '/'){
if(text[1]== '/'){
printf("It is a comments");
}
if(a == 0){
printf(" It's not a comments");
}
/*//........
//......
*/
}
else{
printf("It's not a comments");
}

return 0;
}
