#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[30], str2[30], str3[30];
    gets(str1);
    gets(str2);
    gets(str3);

    strcat(str1, str2);
    strcat(str1, str3);
    printf("Merged string length : %d\n", strlen(str1));
    printf("Merged string : %s", str1);
}