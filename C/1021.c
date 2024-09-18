#include <stdio.h>

int main(){

  double total;
  int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m1 = 0, m50 = 0, m25 = 0, m10 = 0, m5 = 0, m01 = 0;

  scanf("%lf", &total);


  printf("NOTAS:\n");

  while (total >= 100){
    n100++;
    total = total - 100;
  }

  while (total >= 50){
    n50++;
    total = total - 50;
  }
  while (total >= 20){
    n20++;
    total = total - 20;
  }
  while (total >= 10){
    n10++;
    total = total - 10;
  }
  while (total >= 5){
    n5++;
    total = total - 5;
  }
  while (total >= 2){
    n2++;
    total = total - 2;
  }
  printf("%d nota(s) de R$ 100.00\n", n100);
  printf("%d nota(s) de R$ 50.00\n", n50);
  printf("%d nota(s) de R$ 20.00\n", n20);
  printf("%d nota(s) de R$ 10.00\n", n10);
  printf("%d nota(s) de R$ 5.00\n", n5);
  printf("%d nota(s) de R$ 2.00\n", n2);
  printf("MOEDAS:\n");
  while (total >= 1){
    m1++;
    total = total - 1;
  }
  while (total >= 0.50){
    m50++;
    total = total - 0.5;
  }
  while (total >= 0.25){
    m25++;
    total = total - 0.25;
  }
  while (total >= 0.10){
    m10++;
    total = total - 0.10;
  }
  while (total >= 0.05){
    m5++;
    total = total - 0.05;
  }
  while (total >= 0.01){
    m01++;
    total = total - 0.01;
  }

  printf("%d moeda(s) de R$ 1.00\n", m1);
  printf("%d moeda(s) de R$ 0.50\n", m50);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  printf("%d moeda(s) de R$ 0.05\n", m5);
  printf("%d moeda(s) de R$ 0.01\n", m01);

  return 0;
}
