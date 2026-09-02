#include <stdio.h>

void greet(const char* name);
int main() {
    printf("Hello, World!\n");
    greet("Hemant");
    return 0;
}
void greet(const char* name) {
    printf("Hello, %s! Welcome to your GitHub portfolio\n", name);
}