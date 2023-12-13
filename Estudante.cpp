#include <iostream>
#include "Estudante.h"
using namespace std;


Estudante::Estudante(string nome, int cpf, string senha, float nota): Pessoa(nome, cpf){
  this->nome = nome;
  this->cpf = cpf;
  this->senha = senha;
  this->nota = nota;
}

string Estudante::getNome(){
  return nome;
}
void Estudante::setNome(string nome){
  nome = nome;
}
int Estudante::getCpf(){
  return cpf;
}
void Estudante::setCpf(int cpf){
  cpf = cpf;
}
string Estudante::getSenha(){
  return senha;
}
void Estudante::setSenha(string senha){
  senha = senha;
}
float Estudante::getNota(){
  return nota;
}
void Estudante::setNota(float nota){
  nota = nota;
}
void Estudante::imprimir(){
    cout << "Nome: " << nome << endl;
    cout << "Cpf: " << cpf << endl;
    cout << "Senha: " << senha << endl;
    cout << "Nota: " << nota << endl;
  }
