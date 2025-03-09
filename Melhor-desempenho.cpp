#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm> 

using namespace std;

struct Alunos{
    string nome;
    double notas[3];
    double media;
    int posicao;
};

void media(vector<Alunos>& alunos) {
    double med;
    for(int i = 0; i < alunos.size(); i++) {
        med = 0;
        for(int j = 0; j < 3; j++) {
            med += alunos[i].notas[j];
        }
        med /= 3;
        alunos[i].media = med;
    }
}

void melhor(vector<Alunos>& alunos) {
    sort(alunos.begin(), alunos.end(), [](const Alunos& a, const Alunos& b) {
        return a.media > b.media; 
    });

    int contador = 0;
    for(int i = 0; i < alunos.size(); i++) {
        cout << contador << ": "
             << alunos[i].nome << "\n   Media: " << fixed 
             << setprecision(2) << alunos[i].media << "\n   N1: " 
             << alunos[i].notas[0] << ", N2: " << alunos[i].notas[1]
             << ", N3: " << alunos[i].notas[2] << endl;
        contador++;
    }
}

int main() {
    int n;
    cin >> n;
    vector<Alunos> alunos(n);
    
    for(int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, alunos[i].nome); 
        for(int j = 0; j < 3; j++) {
            cin >> alunos[i].notas[j]; 
        }
    }

    media(alunos); 
    melhor(alunos);
}