//冒泡排序
//执行次数   ==》num_exe
#include <stdio.h>

int main() {
  int n;
  int i, j, t, num_exe = 0;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 1; i < n; i++) {

    for (j = 1; j <= n - i; j++) {
      num_exe++;

      if (a[j - 1] < a[j]) {
        t = a[j - 1];
        a[j - 1] = a[j];
        a[j] = t;
      }
    }
  }
  for (i = 0; i < n; i++) {
    printf("%3d", a[i]);
  }
  printf("\n%d,%d\n", n, num_exe);
  printf("共有%d个数,执行次数=%d", n, num_exe);
  return 0;
}