#include <iostream>
#include <cstring>
#include <cstdio>
#define Chunksize 80

using namespace std;
typedef struct Chunk{
    char ch[Chunksize];
    struct Chunk *next;
} Chunk; 
typedef struct{
    Chunk *head,*tail;
    int curlen;
} Lstring;

int main(void){

}