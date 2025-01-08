unsigned char	swap_bits(unsigned char	b)
{
	return (b >> 4);
}
#include <stdio.h>

int main() {
    unsigned char test1 = 0xAB; // Binary: 10101011
    unsigned char test2 = 0x0F; // Binary: 00001111
    unsigned char test3 = 0xF0; // Binary: 11110000

    printf("Original: 0x%02X, Swapped: 0x%02X\n", test1, swap_bits(test1)); // Expected: 0xBA
    printf("Original: 0x%02X, Swapped: 0x%02X\n", test2, swap_bits(test2)); // Expected: 0xF0
    printf("Original: 0x%02X, Swapped: 0x%02X\n", test3, swap_bits(test3)); // Expected: 0x0F

    return 0;
}

