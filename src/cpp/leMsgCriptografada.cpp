#include "leMsgCriptografada.h"

// Obtém do usuário (entrada padrão) a mensagem que ele deseja descriptografar
// Adiciona cada frase à fila de frases criptografadas
void leMensagemCriptografada(Fila &frasesCriptografadas){

    std::string codigo;
    while (std::getline(std::cin, codigo)) { //lê linhas digitadas até que o usuário interrompa
        frasesCriptografadas.enfileira(codigo); //adiciona à fila de frases criptografadas
    }
}
