#include "stdio.h"
#include <math.h>

int main(){
    char vocales []={'a','e','i','o','u'};
    char *ptr;
    ptr = vocales[3]; *ptr = 'x';
    for (int i=0;i < 6; i++) {
        printf("%c\n", vocales[i]);
    }
    return 0;
}