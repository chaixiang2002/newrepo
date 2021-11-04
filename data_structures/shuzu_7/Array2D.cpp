#include <cstdlib>
#include <iostream>
using namespace std;

int **Make2DArray(int row, int col);
int *PackA(int **a, int row);
void Del(int **a, int row);
inline int countt(int n) {
  int r = 0, z = 0;
  for (int i = 1; i <= n; i++)
    r += i;
  return r;
}

int main(void) {
  int row, col, z = 0;
  // A
  cout << "How many the row and col of arrayAAA ?" << endl;
  cin >> row >> col;
  int **a = Make2DArray(row, col);
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      cin >> a[i][j];
  // pack A
  cout << "A compressed symmetric array:" << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      if (i >= j) {
        cout << PackA(a, row)[z] << '\t';
        z++;
      }
    }
    cout << endl;
  }

  // B
  z = 0;
  cout << "How many the row and col of arrayBBB ?" << endl;
  cin >> row >> col;
  int **b = Make2DArray(row, col);
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      cin >> b[i][j];
  // pack A
  cout << "A compressed symmetric array:" << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      if (i >= j) {
        cout << PackA(b, row)[z] << '\t';
        z++;
      }
    }
    cout << endl;
  }

  // C=A*B
  int tmp = 0;
  cout << "C=A*B:" << endl;
  int **c = Make2DArray(row, col);
  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++) {
      for (int m = 0; m < row; m++) {
        tmp += a[i][m] * b[m][j];
      }
      c[i][j] = tmp; // a[i][]+b[][j]
      tmp = 0;
    }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {

      cout << c[i][j] << '\t';
    }
    cout << endl;
  }

  // Del
  Del(a, row);
  Del(b, row);
}

int **Make2DArray(int row, int col) {
  int **a, i;
  a = (int **)malloc(row * sizeof(int *));
  for (i = 0; i < row; i++) {
    a[i] = (int *)malloc(col * sizeof(int));
  }
  return a;
}
int *PackA(int **a, int row) {
  int r = countt(row), z = 0;

  int aa[r], *ptr = aa;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      if (i >= j) {
        aa[z] = a[i][j];
        /*  cout << aa[z] << endl;
         cout << a[i][j] << endl; */
        z++;
      }
    }
  }
  return ptr;
}
void Del(int **a, int row) {
  int i;
  for (i = 0; i < row; i++) {
    free(a[i]);
  }
  free(a);
  cout << "Del finally!" << endl;
}

// aa[z++] = a[i][j];     false????????
// aa[z] = a[i][j]; z++;  true

/* for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++)
      cout << a[i][j] << '\t';
    cout << endl;
  } */