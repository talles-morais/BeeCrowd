#include <bits/stdc++.h>

using namespace std;

set<int>* segment;

void build(int i, int start, int end, int arr[]){

    if(start == end){
        segment[i].insert(arr[start]);
    }
    build(2*i, start, (start+end)/2, arr);
    build(1+2*i,1+(start+end)/2, end, arr);

    segment[i].insert(segment[2*i].begin(), segment[2*i].end());
    segment[i].insert(segment[2*i+1].begin(), segment[2*i+1].end());

}

set<int> query(int node, int l, int r, int a, int b)
{
    set<int> left, right, result;
 
    if (b < l || a > r) return result;
    if (a <= l && r <= b) return segment[node];
 
    left = query(2 * node, l, (l + r) / 2, a, b);
    result.insert(left.begin(), left.end());
 
    right = query(1 + 2 * node, 1 + (l + r) / 2, r, a, b);
    result.insert(right.begin(), right.end());
 
    return result;
}

void init(int n)
{
    
    int h = (int)ceil(log2(n));
    h = (2 * (pow(2, h))) - 1;
 
    
    segment = new set<int>[h];
}
 

int getDistinct(int l, int r, int n)
{
    
    set<int> ans = query(1, 0, n - 1, l, r);
 
    return ans.size();
}
 

int main(){

    int tamEstrada, qtOp, qTipos;
    int vetTipo[100002], encic[50], k;
    int op, op1, op2, cont=0;

    cin >> tamEstrada >> qtOp >> qTipos;

    init(tamEstrada);
    for(int i=1;i<=tamEstrada;i++){
        cin >> vetTipo[i];
    }

    while(qtOp--){
        cin >> op;
        cont=0;
        
        switch (op){
        case 1:
            cin >> op1 >> op2;
            build(1, 1, tamEstrada, vetTipo);
            cont = getDistinct(op1, op2, tamEstrada);
            cout << cont << endl;
            break;
        case 2:
            cin >> op1 >> op2;
            vetTipo[op1] = op2;
            
            break;
        }
        
    }

    return 0;
}