#include <stdio.h>

#define ONE_DIGI(x) (x>=0 && x<10)

int main(){
    int x = 9;
    if(ONE_DIGI(x))
        printf("x is one digi result bool = %d\n",ONE_DIGI(x));
    else
        printf("x is not one digi result bool = %d\n",ONE_DIGI(x));
    getchar();
    return 0;
}