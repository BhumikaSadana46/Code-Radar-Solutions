// Your code here..
// Your code here...
#include <stdio.h>
int main() {
    int a;
    int prime=0;
    scanf("%d", &a);
    if(a==1 || a==0)
        prime=1;
    else{
        for ( int i=2;i<a;i++){
            if(a%i==0){
                prime=1;
                break;
            }
        }
    }
    if(prime)
    printf("Prime");
    else
    printf(Not Prime);
    return 0;
}
