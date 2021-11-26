#include <iostream>
using namespace std;
int main(void){
  int ss[3][3]={{1,20,3},{4,5,6},{7,8,9}};
  cout<< ss <<endl;
  cout<< ss[2]<<endl;
  cout<< ss[2][2]<<endl;
   cout<< "==========================="<<endl;
   cout<< *ss <<endl;
  cout<< *(ss[2])<<endl;
  cout<< ss[2][2]<<endl;
   cout<< "==========================="<<endl;
   cout<< **ss <<endl;
   cout<< **(ss+1) <<endl;
   cout<< *(*ss) <<endl;
   cout<< *(*ss+1) <<endl;
   cout<< **(ss+1) <<endl;
   cout<< "======================================================"<<endl;
for(int i=0;i<3;i++)
{
  cout<< "s["<<i<<"]:"<< '\t'<< *ss[i]<< '\t'<<ss[i]<<endl;
}
long long int sss=0xa095ffa30;
int *ptr;
ptr=(int *)sss;
cout <<(int)*(ptr)<<endl;

  
}