#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if((n&1)==0){
        printf("Even number: %d",n);
    }else{
        printf("Odd number: %d",n);
    }

    return 0;
}
