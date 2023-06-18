#include <stdio.h>

int main() {
int n ;
printf("Введіть n: ");
scanf("%d", &n);
int a[n] ;
for (int i = 0; i < n; i++) {
printf("Введіть елемент a[%d]",i);
scanf("%d", &a[i]);}
for (int i=0;i<n;i++){
printf("%d\t", a[i]);}
   
int c = 0;
int c0 = 0;

for (int i = 0; i < n - 2; i++) {
if (*(a + i + 1) > *(a + i) && *(a + i + 2) > *(a + i + 1)) {
c0++;}
else {
if (c0 > 0) {
c++;
c0 = 0;
  }
 }
}
if (c0 > 0) {
c++;}
printf("\nКількість неперервних ділянок з трьома елементами по зростанню: %d\n", c);
return 0;
}