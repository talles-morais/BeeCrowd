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
 
int main() {

    int a, d, atac[11], def[11], i;
 
    scanf("%d %d", &a, &d);
    
    while(a!=0 && d!=0){
        
        for(i=0;i<a;i++){
            scanf("%d", &atac[i]);
        }
        
        for(i=0;i<d;i++){
            scanf("%d", &def[i]);
        }

        quick_sort(atac, 0, a-1);
        quick_sort(def, 0, d-1);


        // for(i=0;i<a;i++){
        //     printf("[%d]", atac[i]);
        // }
        // printf("\n");
        
        // for(i=0;i<d;i++){
        //     printf("[%d]", def[i]);
        // }
        // printf("\n");

        if(atac[0]>=def[1]) printf("N\n");
        else if(atac[0]<def[1]) printf("Y\n");

        scanf("%d %d", &a, &d);
    }
 
    return 0;
}