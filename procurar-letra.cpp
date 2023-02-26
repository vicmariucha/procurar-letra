#include <stdio.h>
#include <string.h>

int busca_letra (char *p_string, char letra);

int main(void) {
  char frase[50], letra;
  int quantidade;
  printf("Digite uma fase: ");
  gets(frase);
  printf("\nDigite uma letra para procurar dentro da frase: ");
  scanf ("%c", &letra);
  quantidade = busca_letra(frase, letra);
  if(quantidade)
    printf("\n\A letra '%c' apareceu %d vezes na frase '%s' ", letra, quantidade, frase);
  else 
  printf("\nA letra '%c' NAO aparece na frase '%s' ", letra, frase);
  return 0;
  }
int busca_letra (char *p_string, char letra)
{
  int i, cont = 0;
  int tamanho = strlen(p_string);
  for(i = 0;i < tamanho; i++, p_string++){
    if (*p_string == letra)
    	cont++;
    }
  return cont;
}
