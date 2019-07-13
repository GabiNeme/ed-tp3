# 3º Trabalho Prático de Estruturas de Dados

O objetivo do presente trabalho é praticar os conceitos de árvore de pesquisa binária. Para isso, foi desenvolvido um programa que decodifica, letra por letra, textos em código Morse. Nesse sentido, foi construída uma árvore binária em que cada letra pode ser convertida em um código Morse e vice-versa.

De maneira geral, o programa desenvolvido lê a codificação Morse utilizada a partir de um arquivo “morse.txt”, constrói a árvore de pesquisa binária a partir dele, lê a mensagem criptografada do usuário através da entrada padrão, utiliza a árvore criada no passo anterior para descriptografar a mensagem do usuário, imprime na saída padrão o resultado e, opcionalmente, imprime a árvore de pesquisa binária em pré-ordem.

## Entradada de dados
A entrada de dados do programa deve conter um ou nenhum parâmetro. Caso haja o parâmetro “-a” será impresso, depois da mensagem descriptografada, a árvore de pesquisa binária utilizada para decodificar a mensagem.
A mensagem codificada deve ser inserida através da entrada padrão ou, alternativamente, através da leitura da entrada contida em um arquivo passado como parâmetro, conforme exemplos abaixo.
```
./bin/tp3
./bin/tp3 -a
./bin/tp3 < mensagemCodificada.in
./bin/tp3 -a < mensagemCodificada.in
```
Caso as mensagens criptografadas sejam inseridas manualmente pela entrada padrão, é possível inserir diversas frases ao apertar “Enter” e, ao final, para finalizar a leitura de dados e receber a decodificação, basta pressionar Ctrl + D.

## Saída de dados

As mensagens decodificadas são impressas na saída padrão ou, alternativamente, em um arquivo de saída especificado como parâmetro na chamada do programa, conforme exemplos abaixo.
```
./bin/tp3
./bin/tp3 < msgmCodificada.in > msgmDecodificada.out
./bin/tp3 -a < msgmCodificada.in > msgmDecodificada.out

```
Caso a opção de exibir a árvore binária tenha sido escolhida, será impresso, após a mensagem decodificada, a árvore de pesquisa binária utilizada na decodificação. Cada caractere em uma linha, seguido por um espaço e seu código Morse, utilizando o caminhamento pré-ordem da árvore de pesquisa.

## Compilar
Basta digitar
```
make
```
