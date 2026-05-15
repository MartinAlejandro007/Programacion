#include <stdio.h>
int main(){
    int arreglo[]={3,6,9,12,15,16};
    int *ptr=arreglo;

    for(int i=0;i<6;i++){
        printf("%d\n",arreglo[i]);
            printf("%p\t", ptr );
    }
    return 0;
}