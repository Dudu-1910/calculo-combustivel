#include <stdio.h>
#include <stdlib.h>

int Calculo(float valorGas, float valorEta)
{
  // preço gasolina * 0.7 = Preco Máximo do Alcool

  if ((valorGas * 0.70) < valorEta)
  {
    // Compensa abastecer com gasolina

    return 0;
  }
  else if ((valorGas * 0.70) > valorEta)
  {
    // Compensa abastecer com gasolina
    return 1;
  }
  else
  {
    // valores são equivalentes
    return 2;
  }
}

int main()
{

  printf("************************************\n");
  printf("Calcule para Economizar Combustível.\n\n\n");
  printf("************************************\n");

  float precoGasolina,
      precoEtanol;

  printf("Qual o preço da Gasolina? \n");
  scanf("%f", &precoGasolina);

  printf("Qual o preço do Etanol? \n");
  scanf("%f", &precoEtanol);

  int resultado = Calculo(precoGasolina, precoEtanol);

  if (resultado == 0)
  {
    printf("Compensa abastecer com Gasolina. \n");
  }
  else if (resultado == 1)
  {
    printf("Compensa abastecer com Etanol. \n");
  }
  else
  {
    printf("São Equivalentes. Tanto faz. \n");
  }

  system("pause");

  return 0;
}