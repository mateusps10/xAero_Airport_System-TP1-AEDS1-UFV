/* Define o TAD e os prototipos das funcoes caso eles ainda nao tenham sido
definidos */
#ifndef VOO_H_INCLUDED
#define VOO_H_INCLUDED

// Incluindo bibliotecas necessárias e/ou TADs auxiliares.
#include <stdlib.h>
#include "../TAD_AUXILIAR/horario.h"

// Definindo struct do TAD e o declarando como um tipo.
typedef struct {
  unsigned int VID;
  horario horarioDecolagem;
  horario horarioPouso;
  char aeroportoDecolagem[30];
  char aeroportoPouso[30];
  unsigned int identificadorPistaDecolagem;
} VOO;

// Definindo protótipo da função inicializa que elimina lixo de memória.
int VOO_inicializa(VOO *ponteiro);

// Definindo o protótipo das funções set. Retornam 1 se der certo.
int VOO_setVID(VOO *ponteiro, unsigned int VID);
int VOO_setHorarioDecolagem(VOO *ponteiro, horario *horario);
int VOO_setHorarioPouso(VOO *ponteiro, horario *horario);
int VOO_setAeroportoDecolagem(VOO *ponteiro, char *aeroporto);
int VOO_setAeroportoPouso(VOO *ponteiro, char *aeroporto);
int VOO_setIdentificadorPistaDecolagem(VOO *ponteiro, unsigned int identificador);

/* Definindo o protótipo das funções get. Retornam o dado caso seja de um tipo
   primitivo, retorna void e permite entrar com um ponteiro para armazenar o
   dado, caso não seja de um tipo primitivo */
int VOO_getVID(VOO *ponteiro);
void VOO_getHorarioDecolagem(VOO *ponteiro, horario *horario);
void VOO_getHorarioPouso(VOO *ponteiro, horario *horario);
void VOO_getAeroportoDecolagem(VOO *ponteiro, char *aeroporto);
void VOO_getAeroportoPouso(VOO *ponteiro, char *aeroporto);
int VOO_getIdentificadorPistaDecolagem(VOO *ponteiro);

// Fim do define
#endif // VOO_H_INCLUDED