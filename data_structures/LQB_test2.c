#include <stdio.h>
int main() {
  //执行次数   ==》num_exe
  int x, k = 1, num_exe = 0;
  scanf("%d", &x);
  int arr[x];

  for (int i = 0; i < x; i++)
    scanf("%d", &arr[i]);

  printf("\n");

  for (int i = x; i >= 1; i--) {
    int temp;
    for (int j = 0; j < x - 1; j++) {
      num_exe++;
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        printf("%d,", k++);
        for (int i = 0; i < x; i++)
          printf("%d ", arr[i]);
        printf("\n");
      }
    }
  }
  printf("%d,%d\n", x, num_exe);
  printf("共有%d个数,执行次数=%d", x, num_exe);
  return 0;
}