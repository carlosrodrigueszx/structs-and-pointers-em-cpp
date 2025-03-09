#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

struct Alunos
{
    string nome;
    int matricula;
    char disciplina[120];
    double nota;


};

void Situacao(Alunos aluno)
{
    if (aluno.nota >= 7)
    {
        cout << aluno.nome << " aprovado(a) em " << aluno.disciplina <<endl;
    }
    else
    {
        cout << aluno.nome << " reprovado(a) em " << aluno.disciplina <<endl;
    }
        
}

int main(int argc, char const *argv[])
{
   
    Alunos aluno;
        cin >> aluno.nome;
        cin.ignore();
        cin >> aluno.matricula;
        cin >> aluno.disciplina;
        cin.ignore();
        cin >> aluno.nota;
    
  
    Situacao(aluno);
    
    return 0;
}
