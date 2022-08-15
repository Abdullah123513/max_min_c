#include <stdio.h>

int main() {
  int n;
  printf("How many number you want to compire : ");
  scanf("%d", & n);
  if (n > 1) {
    int sNumber[n];
    printf("Enter %d number : ", n);
    for (int i = 0; i < n; i++) {
      scanf("%d", & sNumber[i]);
    }
    int min = sNumber[0], max = 0, sum = 0;
    for (int k = 0; k < n; k++) {
      if (max < sNumber[k]) {
        max = sNumber[k];

      }
      if (min > sNumber[k]) {
        min = sNumber[k];
      }

      sum = sum + sNumber[k];
    }
    printf("max Number is = %d\n", max);
    printf("min Number is = %d\n", min);
    printf("Sum of all number = %d\n", sum);

  } else {
    printf("Invalid Number!");
  }

  return 0;
}
