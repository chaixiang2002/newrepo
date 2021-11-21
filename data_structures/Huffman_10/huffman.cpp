#include<iostream>
#include<iomanip>

//Actual parameters:haffumantree,x   , m  
//Formal parameters:hf[]        ,x[] , mf 

using namespace std;
struct element{
  int weight;
  int parent,lchild,rchild;
};
void haffmans(element eles[],int x[],int mf);
void haffmans_seleMin(element hff[],int mff,int &s1,int &s2);
void print(element ht[],int mf);

//============
int main(void)
{
  int x[]={1,3,10,4,8,5,7,0};
  int m=sizeof(x)/sizeof(x[0]);
  element *haffmantree=new element[2*m-1];
  haffmans(haffmantree,x,m);
  print(haffmantree,m);
}

//=========================================
void haffmans(element hf[],int x[],int mf){
  //set 2 min ,s1,s2
  int s1,s2;
  //init haffman[]
  for(int i=0;i<2*mf-1;i++){
    if(i<mf){
      hf[i].weight=x[i];
    }
    hf[i].parent=-1;
    hf[i].lchild=-1;
    hf[i].rchild=-1;
  }
   for(int k=mf;k<2*mf-1;k++){
     haffmans_seleMin(hf,mf,s1,s2);
     hf[s1].parent=k;
     hf[s2].parent=k;
     hf[k].lchild=s1;
     hf[k].rchild=s2;
     hf[k].weight=hf[s1].weight+hf[s2].weight;
   }
}

//==========================================================
void haffmans_seleMin(element hff[],int mff,int &s1,int &s2){
  for(int i=0;i<mff;i++){
    if(hff[i].parent!=-1)
    {
      s1=i;break;
    }
  }
  for(int i=0;i<mff;i++){
    if(hff[s1].weight>hff[i].weight &&  hff[i].parent!=-1){
      s1=i;
    }
  }
  for(int j=0;j<mff;j++){
    if(hff[j].parent!=-1&&j!=s1)
    {
      s2=j;break;
    }
  }
  for(int i=0;i<mff;i++){
    if(hff[s2].weight>hff[i].weight &&  hff[i].parent!=-1 && i!=s1){
      s2=i;
    }
  }
}

//============================
void print(element ht[],int mf){
//   cout << "index weight parent lChild rChild" << endl;
   cout << "index weight parent lchild rchild" <<endl;
   cout << left;
   for(int i=0;i<mf;++i){
     cout << setw(5)<<i<<" ";
     cout << setw(6)<<ht[i].weight<< " ";
     cout << setw(6)<<ht[i].parent<< " ";
     cout << setw(6)<<ht[i].lchild<< " ";
     cout << setw(6)<<ht[i].rchild<< endl;
   }


// 71     cout << left;    // 左对齐输出 
// 72     for (int i = 0; i < mf; ++i) 
// 73     {
// 74         cout << setw(5) << i << " ";
// 75         cout << setw(6) << ht[i].weight << " ";
// 76         cout << setw(6) << ht[i].parent << " ";
// 77         cout << setw(6) << ht[i].lchild << " ";
// 78         cout << setw(6) << ht[i].rchild << endl;
// 79     }
}


