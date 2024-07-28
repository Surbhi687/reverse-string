#include <stdio.h>
#include <string.h>

void reversestring(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("enter string: ");
    scanf("%s", str);
    reversestring(str);
    printf("reversed string: %s\n", str);

    return 0;
}