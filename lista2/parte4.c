#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex5

    int x;
    printf("Informe o numero do mes: ");
    scanf("%i", &x);
    fflush(stdin);

    switch (x)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro ");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
        case 5:
       printf("Maio");
        break;
        case 6:
       printf("Junho");
        break;
        case 7:
       printf("Julho");
        break;
        case 8:
       printf("Agosto");
        break;
        case 9:
       printf("Setembro");
        break;
        case 10:
       printf("Outubro");
        break;
        case 11:
       printf("Novembro");
        break;
        case 12:
       printf("Desembro");
        break;
    default:
        printf("Mes inexistente");

        break;
    }

    return 0;
}