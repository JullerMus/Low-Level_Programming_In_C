#include <stdio.h>


void print_binary(int num){
    //int signed 32bit
    int num_bits = sizeof(int) * 8;
    for(int i = num_bits-1; i >= 0; i--){ //Shift >> lader os iterere igennem binærstrengen. 
        int nte_bit = (num >> i) & 1; //bitwise & sikrer, at vi printer det rigtige ved at &'e med 1 (alt &'et med 1 som ikke også er 1 giver 0). "& gør 1'erne synlige".
        printf("%d", nte_bit);
        if(i % 4 == 0){ printf(" "); }
    }
    printf("\n");

}

void shift_operation(){
    printf("SHIFT OPERATION: >>\n");
    printf("Eksempel vi shifter udtrykket én til højre, hvilket medfører, at 1234 bliver til 617.\n");
    printf("10011010010 >> 1: %d\n", 1234 >> 1 );
    printf("Eksempel vi shifter udtrykket to til højre, hvilket medfører, at 1234 bliver til 308.\n");
    printf("10011010010 >> 2: %d\n", 1234 >> 2 );
}

void bitwise_and(){
    printf("BITWISE & OPERATION:\n");
    printf("Bitwise & 1\n");
    printf("10011010010 & 1: %d\n", 1234 & 1 );
}

int main()
{
    shift_operation();
    bitwise_and();
    print_binary(1234);

    return 0;
}
