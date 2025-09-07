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

/**
 * Evaluates whether a string is a palindrome.
 * Return 1 if string is a palindrome.
 * Return 0 otherwise.
 */
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
 * Counts the characters, words and lines of user input.
 * Needs to be refactored!
 */
void count_lines_words_chars(){
    int line_count = 0;
    int word_count = 0;
    int char_count = 0;

    char input[100];
    fgets(input, sizeof(input), stdin);

    printf("Input: %s\n", input);

    for (int i = 0; i <= 100; i++){
        if(input[i] == '\n'){
            line_count++;
        }
        else if (input[i] == ' ')
        {
            word_count++;
        }
        else if(input[i] != ' ' && input[i] != '\n'){
            char_count++;
        } 
        
    }
    printf("Character count: %d\n", char_count);
    printf("Word count: %d\n", word_count + 1);
    printf("Line count: %d\n", line_count);
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