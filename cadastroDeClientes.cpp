#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pacientes{
    char telefone[15];
    char nome[200];
    char endereco[200];
    int quadra[10];
    int lote[10];
    char complemento[25];
    //char setor [200];
    char cidade[200];
    int vazio;
} paciente[5];
 
int main () {

    int opcao ,telefonecliente,retorno;
    do{
        printf("==================================\n");
        printf("|  1 - Realizar pedido           |\n");
        printf("|  2 - Alterar pedido            |\n");
        printf("|  3 - Alterar endereco          |\n");
        printf("|  4 - Alterar valor dos produtos|\n");
        printf("|  5 - Excluir pedido            |\n");
        printf("|  6 - Sair do sistema           |\n");
        printf("==================================\n");
        printf("|        DIGITE UMA OPCAO        |\n");
        scanf ("%d",&opcao);
        getchar();
        system ("cls");

       if (opcao ==1){
            printf("DIgite o telefone: ");
            scanf("%d",&telefonecliente);
            fflush(stdin);
            retorno = verifica_cod(telefonecliente);
}

    }while (opcao==6);

 void cadastrop(int telefone,int pos ){
    int cont;
    struct cadastro cliente;
    do {
        pos = verificar_pos();

        cliente[pos].telefone==telefonecliente;
        printf("TELEFONE: %d",cliente.telefone);
        printf("NOME: ");
        gets(cliente[pos].nome);
        printf("ENDERECO:");
        gets(cliente[pos].endereco);
        printf("QUADRA: ");
        gets(cliente[pos].quadra);
        printf("LOTE: ");
        gets(cliente[pos].lote);
        printf("COMPLEMENTO: ");
        gets(cliente[pos].complemento);
        printf("SETOR: ");
        gets (cliente[pos].setor);
        cliente.cidade== "Aparecida de goiania";
        printf("CIDADE: %s",cliente[pos].cidade);
        cliente[pos].vario = 1 ;
        cont= 1;
    }while (cont==1);

 }

    int verificar_pos (void){
      int cont = 0 ;
      while (cont <= 200){
        if (clinte[cont].vazio == 0 )
            return (cont);
        cont ++ ;
      }
      return (-1);
    }

    int verifica_cod(int telefonecod){
      int cont ;
      for ( cont = 0 ; cont < 200 ; cont ++ ){
        if (cliente[cont].telefone == telefonecliente){
            return 0 ;
        }
        return (1);
      }

    system("pause");
    return 0 ;
	}
}