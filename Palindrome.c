#include "Palindrome.h"

bool palindrome(char* x) 
{
    char *pointer;
    char *reverse;

    pointer = x;

    while(*pointer != '\0') {
        ++pointer;
    }
    --pointer;

    reverse = x;
    while(reverse <= pointer) {
        if(*pointer == *reverse) {
            --pointer;
            reverse++;        }
        else {
            break;
        }
    }
    
    if(reverse > pointer){
        return(true);
    }
    else {
        return(false);
    }
}

int main() 
{
    char str[7] = "hannah";

    if(palindrome(str)) {
        printf("True \n");
    }
    else {
        printf("False \n");
    }

    return 0;
}
