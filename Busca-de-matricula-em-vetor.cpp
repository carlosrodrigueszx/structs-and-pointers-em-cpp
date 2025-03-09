#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

struct Alunos
{
    int matricula;
    string nome;
    double media;
};

void Busca(Alunos aluno[], int n, int mat)
{
    bool achei = false;
    int posicao;
    for (int i = 0; i < n; i++)
    {
        if (aluno[i].matricula == mat)
        {
            achei = true;
            posicao = i;
            break;
        }
    }
 
    if (achei == false)
    {
        cout << "NAO ENCONTRADA" << endl;
    }
    else
    {
        cout << aluno[posicao].nome << endl;
        cout << fixed << setprecision(1) << aluno[posicao].media << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    Alunos aluno[n]; // Corrigido para usar o tamanho especificado

    for (int i = 0; i < n; i++)  // Corrigido para n alunos
    {
        cin >> aluno[i].matricula;
        cin.ignore(); // Ignora o caractere de nova linha antes de getline
        getline(cin, aluno[i].nome);
        cin >> aluno[i].media;
    }

    int mat;
    cin >> mat;

    Busca(aluno, n, mat);
    
    return 0;
}
