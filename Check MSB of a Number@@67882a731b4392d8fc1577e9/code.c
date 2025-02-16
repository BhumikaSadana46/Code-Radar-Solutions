// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int bits = sizeof(num)*8;
    int msb = 1 << (bits-1);
    if(num&msb)
    printf("Set");
    else
    printf("Not Set");
    return 0;

}