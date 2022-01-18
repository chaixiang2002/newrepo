#include <stdio.h>

int maxSubArray(int *nums) {
  int v1 = 0, v2 = 0, fu = 0;
  int i = 0, longth = 8;
  int onn = 1;
  printf("%d dsfsd\n", longth);
  while (i <= longth) {
    if (onn == 1 && nums[i] > 0) {
      v1 += nums[i];
    } else if ((onn == 1 || onn == 2) && nums[i] < 0) {
      fu += nums[i];
      onn = 2;
    } else if ((onn == 2 || onn == 3) && nums[i] > 0) {
      v2 += nums[i];
      onn = 3;
    } else if (onn == 3 && nums[i] < 0) {
      int t = v1 < v2 ? v1 : v2;
      if (fu + t > 0) {
        onn = 1;
        v1 = v1 + v2 + fu;
        v2 = 0;
        fu = 0;
      } else if (v1 > v2 && v1 + fu > 0) {
        onn = 1;
        v1 = v2;
        fu = 0;
        v2 = 0;
      } else if (v2 < v1 && v2 + fu < 0) {
        onn = 2;
        fu = fu + v2;
        v2 = 0;
      }
    }
    printf("i=%d   onn=%d   v1=%d   fu=%d   v2=%d   \n", i, onn, v1, fu, v2);
    i++;
  }
  return v1 > v2 ? v1 : v2;
}

int main() {
  int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int aa = maxSubArray(nums);
  printf("%d \n", aa);
  return 0;
}