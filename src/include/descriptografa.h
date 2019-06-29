#include "arvore.h"
#include "fila.h"
#include <iostream>
#include <string>
#include <sstream>

//A partir das frases criptografadas e da árvore binária de pesquisa
//que contém a codificação Morse, descriptografa a mensagem do usuário
void descriptografa(Arvore &codigoMorse, Fila &frasesCriptografadas);