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

void MaiorNota(Alunos aluno[])
{
    if (aluno[0].nota > aluno[1].nota)
    {
        cout << aluno[0].nome << " , " << fixed << setprecision(1) << aluno[0].nota <<endl; 
    }
    else
    {
        if (aluno[0].nota == aluno[1].nota)
        {
            cout << aluno[0].nome <<" e " << aluno[1].nome << " , " << fixed << setprecision(1) << aluno[0].nota <<endl;
        }
        else
        {
           cout << aluno[1].nome << " , " << fixed << setprecision(1) <<aluno[1].nota; 
        }
    }
        
}

int main(int argc, char const *argv[])
{
   
    Alunos aluno[2];
    
    for (int i = 0; i < 2; i++)
    {
        cin >> aluno[i].nome;
        cin.ignore();
        cin >> aluno[i].matricula;
        cin >> aluno[i].disciplina;
        cin.ignore();
        cin >> aluno[i].nota;
    }     
  
    MaiorNota(aluno);
    
    return 0;
}
