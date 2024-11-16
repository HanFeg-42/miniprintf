#include <stdio.h>
#include <stddef.h>
 
struct s {
    char a;
    int b;
    double c;
    char d[10];
};
 
int main(void) {
    // add the size of each member of struct s
    size_t expected_size = sizeof(char) + sizeof(int) +
                           sizeof(double) + sizeof(char[10]);
 
    printf("expected offset of a: 0\n"); // 0
    printf("real offsetof a: %ld\n", offsetof(struct s, a)); // 0
 
    printf("expected offset of b: %ld\n", sizeof(char)); // 1
    printf("offsetof b: %ld\n", offsetof(struct s, b)); // 4
 
    printf("expected offset of c: %ld\n", sizeof(char) + sizeof(int)); // 5
    printf("offsetof c: %ld\n", offsetof(struct s, c)); // 8
 
    printf("expected offset of d: %ld\n", sizeof(char) + sizeof(int) + sizeof(double)); // 13
    printf("offsetof d: %ld\n", offsetof(struct s, d)); // 16
 
    printf("\n");
 
    printf("Expected struct size: %ld\n", expected_size); // 23
    printf("Real struct size: %ld\n", sizeof(struct s)); // 32
}