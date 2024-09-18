#include <bits/stdc++.h>

using namespace std;

int main(){

    int tamEstrada, qtOp, qTipos;
    int vetTipo[100002], encic[50], k;
    int op, op1, op2, cont=0;

    cin >> tamEstrada >> qtOp >> qTipos;

    for(int i=1;i<=tamEstrada;i++){
        cin >> vetTipo[i];
    }

    while(qtOp--){
        cin >> op;
        cont=0;
        
        if(op==1){
            cin >> op1 >> op2;
            int r[100002];
            int unicos = 0;
            for (int i = op1; i <= op2; i++) {
                int j = 0;
                for (j = 0; j < unicos; j++) {
                    if (vetTipo[i] == r[j]) {
                        break;
                    }
                }
                
                if (j == unicos) {
                    r[unicos++] = vetTipo[i];                                
                }
            }

            cout << unicos << endl;
        }else if(op == 2){
            cin >> op1 >> op2;
            vetTipo[op1] = op2;
            
        }
        
    }

    return 0;
}