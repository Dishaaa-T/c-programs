#include <stdio.h>

void toh(int n, char from_peg, char aux_peg, char to_peg) {
    if (n == 1) {
        printf("move disk from %c to %c\n", from_peg, to_peg);
        return;
    }
    
    toh(n-1, from_peg, to_peg, aux_peg);
    printf("move %d th disk from %c to %c\n", n, from_peg, to_peg);
    toh(n-1, aux_peg, from_peg, to_peg);
}

int main() {
    int n;
    char from_peg, aux_peg, to_peg;
    
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("Enter the pegs (e.g., A B C): ");
    scanf(" %c %c %c", &from_peg, &aux_peg, &to_peg); // Note: Leading space before %c to consume newline
    
    printf("Tower of Hanoi for %d discs\n", n);
    toh(n, from_peg, aux_peg, to_peg);
    
    return 0;

}
