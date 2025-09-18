#include <bits/stdc++.h>

using namespace std;

int main(){
    iostream::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, q, a;
    cin >> n >> k >> q;

    // criando array com o msm valor em todas as casas
    // nao entendi pqq o .fill() deu erro
    int* pontos = new int[n];
    
    for(int i=0; i<n; i++){
        pontos[i] = 0;
        //cout << "posição " << i << " valor " << k <<"\n";
    };

    // recebendo os ganhadores por rodada
    for (int i=0; i<q; i++){
        cin >> a;
        pontos[a-1] += 1;
    };

    // comparando && printando
    for (int i=0; i<n; i++){
        /* na prática, esse jogo funciona assim:
        se você deixou de responder perguntas por k rodadas (ou mais), vc perde,
        e temos q rodadas ao final.
        a qnt de respostas é igual aos pontos, e a qnt de erros é q - pontos.

        entao, é questao de ver quantas perguntas cada um respondeu, e ver se q-pontos é igual ou maior q k.*/
        if((q - pontos[i])>=k){
            cout << "No\n"; 
        }else{cout<<"Yes\n";};
    };


    // liberando memoria
    delete[] pontos;

    //cout <<"Hello, world!";
    return 0;
};