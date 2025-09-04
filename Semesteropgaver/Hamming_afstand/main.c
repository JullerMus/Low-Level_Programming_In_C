#include "hamming.h"

int main() {
    char dna1[] = {'G','A','G','C','C','T','A','C','T','A','A','C','G','G','G','A','T'};
    char dna2[] = {'C','A','T','C','G','T','A','A','T','G','A','C','G','G','C','C','T'};

    hamming_distance(dna1, dna2);

    return 0;
}