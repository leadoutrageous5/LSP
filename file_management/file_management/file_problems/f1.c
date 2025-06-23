#include <stdio.h>

int main() {
    FILE *fp = fopen("hello.txt", "w");
    if (fp == NULL) {
        perror("File creation failed");
        return 1;
    }
    fprintf(fp, "Hello, World!\n");
    fclose(fp);
    return 0;
}

