#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pessoas
{
    string nome;  // Usando string para simplificar
    int idade;
    char sexo[2]; // Tamanho ajustado para "m" ou "f"
};

void Idosa(const vector<Pessoas>& pessoas)
{
    int maisVelha = 0;
    string nomeIdosa;
    bool encontrouMulher = false;

    for (const auto& pessoa : pessoas)
    {
        if (pessoa.sexo[0] == 'm') // Comparando o primeiro caractere
        {
            continue;
        }
        else
        {
            encontrouMulher = true; // Marcamos que encontramos uma mulher
            if (pessoa.idade > maisVelha)
            {
                maisVelha = pessoa.idade;
                nomeIdosa = pessoa.nome;
            }
        }
    }
    
    if (encontrouMulher)
    {
        cout << nomeIdosa << endl;
    }
    else
    {
        cout << "nao tem mulher" << endl;
    }
}

int main()
{
    int nPessoas;
    cin >> nPessoas;
    
    vector<Pessoas> pessoas(nPessoas);  // Usando vector em vez de array dinâmico

    for (int i = 0; i < nPessoas; i++)
    {
        cin >> pessoas[i].nome;
        cin >> pessoas[i].idade;
        cin >> pessoas[i].sexo;
    }
    
    Idosa(pessoas);
    return 0;
}
