// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int num,n;
    scanf("%d%d",&num,&n);
    int bits = sizeof(num)*8;
    int msb = n << (bits-1);
    if(num&msb)
    printf("%d",msb);
    else
    printf("%d",msb);
    return 0;

}