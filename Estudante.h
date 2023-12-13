#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

class Estudante: public Pessoa{
private:
  int cpf;
  string senha;
public: 
  string nome;
  float nota;
  Estudante(string nome, int cpf, string senha, float nota);
  void imprimir();

  string getNome();
  void setNome(string nome);

  int getCpf();
  void setCpf(int cpf);

  string getSenha();
  void setSenha(string senha);

  float getNota();
  void setNota(float nota);
};
