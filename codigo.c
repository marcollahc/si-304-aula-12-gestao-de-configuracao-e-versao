#include <stdio.h>

int main () {
    int n;                                                    
    int linha, coluna;     
    int soma_final = 0;            
    
    scanf("%d", &n);                                          //NÚMERO DE LINHAS - ENTRADA DO USUÁRIO//

    for (linha = 1; linha <= n; linha++) {                      //GARANTE QUE VAI PULAR O TANTO DE LINHAS FORNECIDAS PELO USUÁRIO                    

        for (coluna = 1; coluna <= linha; coluna++) {           //NÚMERO DE COLUNAS (IMPRESSÕES) NA LINHA (i = 3, então 3 números na linha, j = 3)//  

            if (linha %2 == 0){                                //IMPRIME 0's NAS LINHAS PARES
                                  
                printf("0");
                soma_final++;
            }
            else {                                              //IMPRIME 1's NAS LINHAS ÍMPARES
                                                   
                printf("1");
                soma_final++;
            } 
        }
        if (linha %2 != 0) {                                    //IMPRIME A SOMA DOS NÚMEROS DAS LINHAS ÍMPARES
                                      
            printf("=%d", linha);
        }
    
    printf("\n");                                            //PULA DE LINHA AO FINAL DO LAÇO
    }

    printf("%d\n", soma_final);                              //IMPRIME O NÚMERO DE TERMOS PRESENTES NO TRIANGULO
    printf("\n");
    printf("Ass: Lucas Peccinin");
    printf("Ass: Maria Eduarda");
    return 0;
    
    
}
