#include <stdio.h>

int main() {
    char str[] = "privet";
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }

    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    

    return 0;
}