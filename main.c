#include <stdio.h>

int main()
{
int code;
float wage, wagenew, increase, diferenca;

printf("Digite o salario atual do funcionario: ");
scanf("%f", &wage);

printf("Digite o código do funcionario: ");
scanf("%d", &code);

if (code == 310) {
    increase = 0.05;
      wagenew = wage + (wage * increase);
    diferenca = wagenew - wage;
    printf("Salário antigo: %.2f\n", wage);
    printf("Salário novo: %.2f\n", wagenew);
    printf("Diferença de salário: %.2f\n", diferenca);
} else if (code == 456){
    increase = 0.075;
      wagenew = wage + (wage * increase);
    diferenca = wagenew - wage;
    printf("Salário antigo: %.2f\n", wage);
    printf("Salário novo: %.2f\n", wagenew);
    printf("Diferença de salário: %.2f\n", diferenca);
} else if (code == 885){
    increase = 0.10;
      wagenew = wage + (wage * increase);
    diferenca = wagenew - wage;
    printf("Salário antigo: %.2f\n", wage);
    printf("Salário novo: %.2f\n", wagenew);
    printf("Diferença de salário: %.2f\n", diferenca);
} else {
    increase = 0.15;
      wagenew = wage + (wage * increase);
    diferenca = wagenew - wage;
    printf("Salário antigo: %.2f\n", wage);
    printf("Salário novo: %.2f\n", wagenew);
    printf("Diferença de salário: %.2f\n", diferenca);
}
    return 0;
}