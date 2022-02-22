#include <iostream>
#include <ostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums) {
  int v1 = 0, v2 = 0, fu = 0;
  int i = 0, longth = nums.size() - 1;
  int onn = 1;
  int couttt = 0;

  while (i <= longth) {
    if (nums[i] <= 0) {
      couttt++;
    }
    printf("i=%d   onn=%d   v1=%d   fu=%d   v2=%d   \n", i, onn, v1, fu, v2);
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
      if (fu + t >= 0) {
        onn = 2;
        v1 = v1 + v2 + fu;
        v2 = 0;
        fu = nums[i];
      } else if (v1 <= v2 && v1 + fu <= 0) {
        onn = 2;
        v1 = v2;
        fu = nums[i];
        v2 = 0;
      } else if (v2 < v1 && v2 + fu <= 0) {
        if (v1 + fu >= 0 && fu + v2 <= 0) {
          onn = 2;
          fu = fu + v2 + nums[i];
          v2 = 0;
        } else if (fu + v1 <= 0 && v1 >= v2) {
          if (v2 + nums[i] > 0) {
            onn = 3;
            v2 += nums[i];
          } else {
            onn = 2;
            fu = fu + v2 + nums[i];
            v2 = 0;
          }
        }
      }
    }
    printf("i=%d   onn=%d   v1=%d   fu=%d   v2=%d   \n", i, onn, v1, fu, v2);
    i++;
  }

  if (couttt == longth + 1) {
    int maxx = nums[0];
    for (int i = 0; i <= longth; i++) {
      if (nums[i] > maxx) {
        maxx = nums[i];
      }
    }
    return maxx;
  }

  if (v1 + v2 + fu > (v1 > v2 ? v1 : v2)) {
    return v1 + v2 + fu;
  }
  return v1 > v2 ? v1 : v2;
}

int main() {
  int s[] = {9, 0, -2, -2, -3, -4, 0, 1, -4, 5, -8, 7, -3, 7, -6, -4, -7, -8};
  int len = sizeof(s) / sizeof(s[0]);
  cout << len << endl;
  vector<int> obj;              //创建一个向量存储容器 int
  for (int i = 0; i < len; i++) // push_back(elem)在数组最后添加数据
  {
    obj.push_back(s[i]);
    cout << obj[i] << '\t';
  }
  cout << endl;
  cout << maxSubArray(obj) << endl;
  return 0;
}