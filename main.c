#include <stdio.h>

int main(){
    int i, j, a[3][3], b[3][3];
 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um elemento da matriz:\n");
            scanf("%d", &a[i][j]);
            
            b[i][j] = a[i][j] * 5;
        }
    }
    
    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j++){
            printf("%.2d\t", b[i][j]);
            printf("\n");
        }
    }
    
    return 0;
}
    
    
    



