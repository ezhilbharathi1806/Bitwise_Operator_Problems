#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    
    if(!(a^b)){
        printf("equal");
    }
    else{
        printf("Not equal");
    }
    return 0;
}
