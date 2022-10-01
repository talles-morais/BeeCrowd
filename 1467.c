#include <stdio.h>

int main(){

    int a, b, c, soma, v[3], win;
    
    while ((scanf("%d %d %d", &a, &b, &c)!=EOF)){
        
        if((a==0 && b==0 && c==0)||(a==1 && b==1 && c==1)){
            printf("*\n");
            win = 100;
        } 
            
        else{
            soma = a+b+c;
            v[0] = a;
            v[1] = b;
            v[2] = c;
            if(soma == 2){
                for(int i=0;i<3;i++)
                    if(v[i]==0) win = i+1;    
            }
            if(soma == 1){
                for(int i=0;i<3;i++)
                    if(v[i]==1) win = i+1;  
            }
        }

        switch(win){
            case 1:
                printf("A\n");
                break;
            case 2:
                printf("B\n");
                break;
            case 3:
                printf("C\n");
                break;
        }


    }
    

    return 0;
}