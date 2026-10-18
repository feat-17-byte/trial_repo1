#include<stdio.h>
int main() {
    char a[50];
    printf("Enter your name: ");
    scanf("%s", &a);
    printf("Hello, %s!\n", a);

    return 0;
}