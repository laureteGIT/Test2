#include <stdio.h>

int p(int n){
    int resultado = 1;
    int k = 0;

    for(k = 1; k <= n; k = k + 1){
        resultado = resultado * k; 
    }
     
    
    return resultado;
}

int main(){
    printf("######################################\n");
    printf("## LOS CALCULOS DE BETTY Y VERONICA ##\n");
    printf("######################################\n");
    printf("\n\n");
    
    printf("Betty ordena sus pulseras de %d formas    \n", p(3));
    printf("Veronica ordena sus pulseras de %d formas \n", p(10));
    
    system("PAUSE");
    return 0;   
}
