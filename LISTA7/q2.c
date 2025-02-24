#include <stdio.h>
struct estoque {
    char nomePeca[50];  
    int numPeca;        
    float preco;  
    int numPedido;
};

int main() {
    struct estoque n;
    printf("Digite o nome da peça: ");
    fgets(n.nomePeca, sizeof(n.nomePeca), stdin);
    printf("Digite o número da peça: ");
    scanf("%d", &n.numPeca);
    printf("Digite o preço da peça: ");
    scanf("%f", &n.preco);
    printf("Digite o número do pedido: ");
    scanf("%d", &n.numPedido);

    printf("\nInformações do Estoque:\n");
    printf("Nome da Peça: %s", n.nomePeca); 
    printf("Número da Peça: %d\n", n.numPeca);
    printf("Preço: %.2f\n", n.preco);
    printf("Número do Pedido: %d\n", n.numPedido);

    return 0;
}
