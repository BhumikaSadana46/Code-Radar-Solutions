#include <stdio.h>

int main(){
    char a;
    while (getchar() != '\n');
    scanf(" %c",&a);
    printf("ASCII Value: %d",a);
    return 0;
}