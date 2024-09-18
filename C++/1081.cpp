#include <bits/stdc++.h>

using namespace std;

int visitado[20], mat[20][20];

void dfs(int inicio, int espaco){
    visitado[inicio] = 1;
    int extra = 0;
    
    for(int i=0; i<20;i++){
        
        if(mat[inicio][i] && !visitado[i]){
            for (int j = 0; j < espaco; j++) cout << " ";

            printf("%d-%d pathR(G,%d)\n", inicio, i, i);
            dfs(i, espaco+2);

            extra = 1;
        }else if(mat[inicio][i] && visitado[i]){
            for (int j = 0; j < espaco; j++) cout << " ";
            printf("%d-%d\n", inicio, i);

            extra = 1;
        }
    }
    if(espaco==2 && extra) cout << endl;
}


int main() {
    int casos;
    int i=1;
    int vert, edge, lin, col;

    cin >> casos;

    while(casos--){
        cout << "Caso " << i << ":" << endl;
        memset(visitado, 0, sizeof(visitado));
        memset(mat, 0, sizeof(mat));

        cin >> vert >> edge;

        for (int i = 0; i < edge; i++){
            cin >> lin >> col;
            mat[lin][col] = 1;
        }
        for (int i = 0; i < vert; i++){
            if(!visitado[i])
                dfs(i, 2);
        }
        
        i++;
    }
    return 0;
}