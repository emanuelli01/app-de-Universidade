#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa{
  private:
    string nome;
    int cpf;
  public:
    Pessoa(string nome, int cpf);
    string getNome();
    void setNome(string nome);
    int getCpf();
    void setCpf(int cpf);

};
#endif 
