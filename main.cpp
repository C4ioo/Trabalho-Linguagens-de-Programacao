#include <iostream>
#include <vector>

using namespace std;

// Função para calcular a soma de uma lista de números
int soma(vector<int> numeros) {
  if (numeros.empty()) {
    return 0;
  } else {
    return numeros[0] + soma(vector<int>(numeros.begin() + 1, numeros.end()));
  }
}

// Função para calcular a média de uma lista de números
double media(vector<int> numeros) {
  return soma(numeros) / (double)numeros.size();
}

// Função principal
int main() {
  // Criando uma lista de números
  vector<int> numeros = {1, 2, 3, 4, 5};

  // Calculando a soma e a média da lista
  int soma_numeros = soma(numeros);
  double media_numeros = media(numeros);

  // Imprimindo os resultados
  cout << "Soma dos números: " << soma_numeros << endl;
  cout << "Média dos números: " << media_numeros << endl;

  return 0;
}
/*
Explicação do código:

A função "soma" utiliza recursão para calcular a soma de uma lista de números. A função verifica se a lista está vazia. Se estiver, a função retorna 0. Se não estiver, a função retorna o primeiro elemento da lista mais a soma do restante da lista.
A função "media" utiliza a função "soma" para calcular a média de uma lista de números. A função divide a soma da lista pelo tamanho da lista para obter a média.
A função "main" cria uma lista de números e então utiliza as funções "soma" e "media" para calcular a soma e a média da lista. Os resultados são então impressos na tela.

Características do paradigma funcional:

Recursão: A função "soma" utiliza recursão para calcular a soma de uma lista de números.
Imutabilidade: As listas de números utilizadas no código são imutáveis. Uma vez que uma lista é criada, ela não pode ser modificada.
*/