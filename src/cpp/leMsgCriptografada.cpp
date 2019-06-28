#include "leMsgCriptografada.h"

void leMensagemCriptografada(Fila &frasesCriptografadas){

    std::string codigo;
    while (std::getline(std::cin, codigo)) {
        frasesCriptografadas.enfileira(codigo);
    }
}
