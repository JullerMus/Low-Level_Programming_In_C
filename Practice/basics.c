#include <stdio.h>
#include <string.h>
#include "basics.h"

/**
 * Reversing an input string
 */
void reverse_string(char input[]){
    int input_length = strlen(input);

    for(int i = (int)input_length - 1; i >= 0; i--){
        printf("%c", input[i]);
    }
}

int is_palindrome(const char *s){
    int array_length = strlen(s);
    
    for(int count = 0; count < array_length / 2; count++){
        if(s[count] != s[array_length - 1 - count]){
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("%s is a palindrome\n", s);
    return 1;
}


/**
 * Reversing an input string and returning as array (an array of characters)
 */
// char *reverse_string(char input[]){
//     int input_length = sizeof(input) / sizeof(input[0]);
//     char output[input_length];

//     for(int i = input_length; i >= 0; i--){

//     }

//     return output;
// }