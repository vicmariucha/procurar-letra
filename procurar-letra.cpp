#include <stdio.h>
#include <string.h>

int busca_letra (char *p_string, char letra);

int main(void) {
  char frase[30], letra;
  int quantidade;
  printf("Descubra quantas vezes uma letra apareceu dentro de uma frase!\n\n");
  printf("Digite uma frase: ");
  gets (frase);
  printf("\nDigite a letra que quer buscar: ");
  scanf ("%c", &letra);
  quantidade = busca_letra(frase, letra);
  if(quantidade)
    printf("\n\A letra '%c' apareceu %d vezes na frase '%s' ", letra, quantidade, frase);
  else 
  	printf("\nA letra  '%c' nao aparece nenhuma vez na frase '%s' ", letra, frase);
  return 0;
  }
  
int busca_letra (char *p_string, char letra)
{
  int i, cont=0;
  int tamanho = strlen(p_string);
  for(i=0;i<tamanho;i++,p_string++){
    if (*p_string == letra)
    	cont++;
    }
  return cont;
}
