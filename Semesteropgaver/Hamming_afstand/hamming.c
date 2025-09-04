#include<stdio.h>

/*
 * Calculating Hamming Distance for DNA strings of length 17 
 */
int hamming_distance(char dna1[], char dna2[]){

    int hamming_distance = 0;
    for (int i = 0; i <= 16; i++)
    {
       if(dna1[i] != dna2[i]){
            printf("Forskel: %c , %c i row: %d\n", dna1[i], dna2[i], i);
            hamming_distance++;
       }
    }

    printf("Hamming afstand: %d\n", hamming_distance);
    return hamming_distance;
}


int main(int argc, char const *argv[])
{
    char dna1[] = {'G','A','G','C','C','T','A','C','T','A','A','C','G','G','G','A','T'};
    char dna2[] = {'C','A','T','C','G','T','A','A','T','G','A','C','G','G','C','C','T'};

    hamming_distance(dna1,dna2);

    return 0;
}
