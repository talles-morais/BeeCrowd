#include <stdio.h>

void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j >= left) {
        quick_sort(a, left, j);
    }
    if(i <= right) {
        quick_sort(a, i, right);
    }
}

int main(){
    int casos, jogs, idade[11], ind;

    scanf("%d", &casos);

    for(int i=0; i<casos;i++){

        scanf("%d", &jogs);

        for(int i=0;i<jogs;i++){
            scanf("%d", &idade[i]);
        }

        if((idade[jogs-1]-idade[0])<0){
            quick_sort(idade, 0, jogs-1); 
        }

        ind = jogs/2;
        printf("Case %d: %d\n", i+1, idade[ind]);
    }

    return 0;
}