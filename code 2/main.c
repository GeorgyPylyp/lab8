#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int n;
int a[100];
void nmas(int *n);
void mas(int *a, int n);
void masp(int *a, int n);
void sum(int *a, int n);
void minmax(int *a, int n);

int main(){
  nmas(&n);
  mas(a,n);
  masp(a,n);
  sum(a,n);
  minmax(a,n);
}


void nmas(int *n) {
  printf("Введіть n: ");
  scanf("%d", n);

}
void mas(int *a, int n) {
const int Low = -100, High = 200;
srand(time(0));
for (int i = 0; i < n; i++) {
*(a+i) = rand() % (High - Low + 1) + Low;
  } 
}
void masp(int *a, int n) {
printf("Масив:\n");
for (int i = 0; i < n; i++) {
printf("%d ", *(a+i));
  }
printf("\n");
}
void sum(int *a, int n) {
int s = 0;
for (int i = 0; i < n; i++) {
if (*(a+i) < 0) {
s += *(a+i);
 }
}
if( s>=0){ 
printf("немає від'ємних елементів\n");}
else {
printf("Сума від'ємних елементів: %d\n", s);}
}
void minmax(int *a, int n) {
  int min = 0;
  int max = 0;
  for (int i = 0; i < n; i++) {
   if (*(a+i)>*(a+min))
      min = i;
    if (*(a+i)<*(a+max))
      max = i;
  }
  int p = 1;
  int st, en;
  if (min < max) {
    st = min;
    en = max;
  } else {
    st = max;
    en = min;
  }
  for (int i = st + 1; i < en; i++) {
    p *= *(a+i);
  }
   printf("Добуток елементів між максимальним і мінімальним: %d\n", p);
}
