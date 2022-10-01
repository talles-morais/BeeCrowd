#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, vet[5], resp, cont=0;

    cin >> casos;

    while(casos!=0){

        while(casos--){

            for(int i = 0;i<5;i++){
                cin >> vet[i];
            }
            for(int i = 0;i<5;i++){
                if(vet[i]<=127) resp = i+1;
            }
            for(int i = 0;i<5;i++){
                if(vet[i]>127) cont ++;
            }

            sort(vet, vet+5);

            if(vet[1]<=127 || cont == 5){
                cout << "*" << endl;
            }else{
                switch(resp){
                    case 1:
                        cout << "A" << endl;
                        break;
                    case 2:
                        cout << "B" << endl;
                        break;
                    case 3:
                        cout << "C" << endl;
                        break;
                    case 4:
                        cout << "D" << endl;
                        break;
                    case 5:
                        cout << "E" << endl;
                        break;
                }
            } 

            cont = 0;
        }
        cin >> casos;
    }

    return 0;
}