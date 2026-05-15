#include <stdio.h>
int main(){
    int arreglo[]={3,6,9,12,15,16};
    int *ptr;
    ptr =&arreglo[0];
    int i= sizeof(int)  
    printf("%d byte(s)\n", i);
    int j= sizeof(arreglo);
    printf("%d byte(s)%d",j);
    return 0;
}