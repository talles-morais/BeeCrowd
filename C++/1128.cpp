#include <bits/stdc++.h>
#define MAX 2000

using namespace std;

int mat[MAX][MAX];
int visitado[MAX];
int n;

void dfs(int ori){
    int vert;

    visitado[ori] = 1;
    for(vert=0;vert<n;vert++)
        if(mat[ori][vert] && !visitado[vert])
            dfs(vert);
}

int main(){

    int m, v , w , p, ok, j;

    scanf("%d%d", &n, &m);

    while(n || m){
        memset(mat, 0, sizeof(mat));
        memset(visitado, 0, sizeof(visitado));
        while (m--){
            scanf("%d%d%d", &v, &w, &p);
            v--;
            w--;

            mat[v][w] = 1;
            if(p==2) mat[w][v] = 2;
        }

        ok = 1;
        for (int j = 0;j < n && ok; j++){
            memset(visitado, 0, sizeof(visitado));
            dfs(j);
            for (int i = 0; i < n; i++){
                if(!visitado[i]){
                    ok=0;
                    break;
                }
            }
        }
        
        printf("%d\n", ok);
        
        scanf("%d%d", &n, &m);
    }



    return 0;
}