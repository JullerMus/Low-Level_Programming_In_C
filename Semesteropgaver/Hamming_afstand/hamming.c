#include <stdio.h>
#include "hamming.h"

/*
 * Calculating Hamming Distance for DNA strings of length 17 
 */
int hamming_distance(char dna1[], char dna2[]) {
    int hamming_distance = 0;
    for (int i = 0; i <= 16; i++) {
        if (dna1[i] != dna2[i]) {
            printf("Forskel: %c , %c i row: %d\n", dna1[i], dna2[i], i);
            hamming_distance++;
        }
    }

    printf("Hamming afstand: %d\n", hamming_distance);
    return hamming_distance;
}