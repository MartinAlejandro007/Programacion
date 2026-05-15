#include "stdio.h"
#include <math.h>

int main(){
    char vocales []={'a','e','i','o','u'};
    char *ptr;
    ptr = vocales;
    for (int i=0;i < 6; i++) {
        printf("%c\n", vocales[i]);
    }
    return 0;
}