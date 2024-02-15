// Realiza um algoritmo e soma 2 numeros digitados
/*

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int var;
    int contador;
    int soma = 0;

    for (contador = 1; contador <= 2; contador++)
    {
        printf("Insira o %d numero: ", contador);
        scanf("%d", &var);

        soma += var;
    }

    printf("Soma: %d", soma);

    return 0;
}
*/

int main(){
float notas;
int contador;
float media;
float soma;


for(contador = 0; contador < 3; contador++){
printf("Insira a %d nota", contador + 1);
scanf("%f", &notas);

soma += notas;

}
media = soma / contador;

printf("Media: %.2f", media);


if (media > 7){
    printf("\n Aluno aprovado!");
}
else if (media < 7 && media > 4){
    printf("\n Reprovado com direito a recuperacao");
}
else{
    printf("\n Reprovado sem direito a recuperacao");
}

}

