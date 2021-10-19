#include <iostream>
#include <string>
#include <system_error>
#define Max 80

using namespace std;
typedef struct {
  char ch[Max];
  int j[Max];
  int nextt[Max];
  int len;
} Stringg;
int strInit(Stringg *S, string T);
void Nextt(Stringg *S);

int main(void) {
  string Mstr, zstr;
  int a[100];
  cin >> Mstr;
  cout << Mstr[2] << endl;
  Stringg Lnext;
  strInit(&Lnext, Mstr);
  for (int i = 1; i <= Lnext.len; i++) {
    cout << "Lnext.ch:   " << Lnext.ch[i] << endl;
    cout << "Lnext.j:   " << Lnext.j[i] << endl;
    cout << "Lnext.next:    " << Lnext.nextt[i] << endl;
    cout << Lnext.len << endl;
  }
}

int strInit(Stringg *S, string T) {
  for (int i = 1; i <= T.length(); i++) {
    S->ch[i] = T[i-1];
    S->j[i] = i ;
    S->nextt[i] = 0;
  }
  S->len = T.length();
  Nextt(S);
  return 0;
}

void Nextt(Stringg *S)
{	int jj = 1, k = 0;
	S->nextt[1] = 0;
	while(jj < S->len)
	{
		if(k==0 || S->ch[jj] == S->ch[k])
		{        jj++;   k++;   S->nextt[jj] = k;
		}	
		else 
			k =S->nextt[k];
	}
}