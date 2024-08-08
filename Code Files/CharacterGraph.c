#include <stdio.h>

int main() {
    int num;
    printf("Enter numbers: ");
    if (scanf("%d", &num)!=1) {
        printf("Error in input");
    }

    while (scanf("%d", &num)==1) {
        printf("%2d |", num);
        for (int i=0; i<num; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}