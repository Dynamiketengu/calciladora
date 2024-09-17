//calculadora

int main(){

    float num1, num2;
    char op;

    printf("Digite o numero1 \n");
    scanf('%f',&num1);

    printf("Digite o numero2 \n");
    scanf('%f',&num2);

    printf("Digite a operação '+','-','*','/' \n");
    scanf('%s',&op);

    switch(op){
        case '+';
            printf("A soma dos valores é: %2f ", num1 + num2);
            break;
         case '-';
            printf("A subtração dos valores é: %.2f ", num1 - num2);
            break;
         case '*';
            printf("A multiplicação dos valores é: %.2f ", num1 * num2);
            break;
         case '/'
            if(num2 == 0){
                  printf("Não existe divisão por zero");
                  break;
            }
            printf("A divisão  dos valores é: %.2f ", num1 * num2);
            break;
        default;
            printf("Operação invalida")
            break;
    }
    return 0;
}