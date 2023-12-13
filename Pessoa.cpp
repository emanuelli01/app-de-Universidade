#include <iostream>
using namespace std;

#include "Pessoa.h"
    
Pessoa::Pessoa(string nome, int cpf){
  this->nome = nome;
  this->cpf = cpf;
}

string Pessoa::getNome() {
  return nome;
}

void Pessoa::setNome(string nome){
  this->nome = nome;
}

int Pessoa::getCpf() {
  return cpf;
}

void Pessoa::setCpf(int cpf){
  this->cpf = cpf;
}
