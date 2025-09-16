#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    short casos, linhas;
    cin >> casos;

    while (casos--){cout <<"===========" << casos << "=========\n";
        
        cin >> linhas;
        linhas = linhas << 1;
        
        //def array com inputs
        auto inputs = new int[linhas];

        for (int i = 0; i<linhas; i++){
            cin >> inputs[i];
        };

        sort(inputs, inputs+(linhas));

        cout << "prim elemento" << inputs[0];
        cout << "\nseg elemento" << inputs[1];

        //somar 2 a 2
        inputs[0] = inputs[0] + inputs[1];

        cout<<inputs[0] << "\n";
        delete inputs;
    };

    return 0;};