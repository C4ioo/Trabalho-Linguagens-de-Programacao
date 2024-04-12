#include <iostream>

class Pessoa {
public:
  Pessoa(std::string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
  }

  void apresentar() {
    std::cout << "Meu nome é " << nome << " e tenho " << idade << " anos." << std::endl;
  }

private:
  std::string nome;
  int idade;
};

int main() {
  Pessoa pessoa1("João", 25);
  pessoa1.apresentar();

  Pessoa pessoa2("Maria", 30);
  pessoa2.apresentar();

  return 0;
}
/*
Explicação do código:

A classe "Pessoa" define um modelo para representar uma pessoa com nome e idade.
O construtor da classe "Pessoa" inicializa os atributos "nome" e "idade" com os valores passados como parâmetros.
O método "apresentar" imprime o nome e a idade da pessoa na tela.
A função "main" cria duas instâncias da classe "Pessoa" e chama o método "apresentar" para cada uma delas.

Características do paradigma orientado a objetos:

Encapsulamento: Os dados e comportamentos da classe "Pessoa" são encapsulados dentro da classe.
Herança: A classe "Pessoa" pode ser utilizada como base para criar outras classes que herdam seus atributos e métodos.
Polimorfismo: O método "apresentar" pode ser implementado de diferentes formas em classes derivadas de "Pessoa".
*/