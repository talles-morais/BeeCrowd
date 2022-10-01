#include <bits/stdc++.h>

using namespace std;

typedef struct{
    int vel, id;
    bool disp=true;
}func;

int posMenor(int start, int end, int arr[]){
    int menor=1000000000, menorPos;

    for(int i=end-1;i>=start;i--){
        if(arr[i] <= menor){
            menor = arr[i];
            menorPos = i;
        }
    }
    return menorPos;
}

int main(){
    int caixas, clientes, tempo=0, i;
    func cx[10000];
    int itens[10000], atend[10000], insere;

    cin >> caixas >> clientes;

    for(int i=0;i<caixas;i++){
        cin >> cx[i].vel;
        cx[i].id = i;
    } 
    for(int i=0;i<clientes;i++) cin >> itens[i];

    if(clientes<=caixas){
        for (int i = 0; i < clientes; i++) atend[i] = cx[i].vel * itens[i];
        sort(atend, atend+clientes);
        cout << atend[clientes-1] << endl;
    }else{
        for(i=0;i<caixas;i++){
            atend[i] = cx[i].vel * itens[i];
        }
        for(i=caixas;i<clientes;i++){
            insere = posMenor(0, caixas, atend);
            atend[insere] = atend[insere] + (cx[insere].vel * itens[i]); 
        }
        sort(atend, atend+clientes);
        cout << atend[clientes-1] << endl;

    }

    return 0;
}