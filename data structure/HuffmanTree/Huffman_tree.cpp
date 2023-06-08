#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void CreateHuffmanTree(HuffmanTree&HT,int n);
void creatHuffmanCode(HuffmanTree HT,HuffmanCode &HC,int n);            




typedef struct{
    int weight;
    int parent,lchild,rchild;
}HTNode,*HuffmanTree;
typedef char **HuffmanCode;
void CreateHuffmanTree(HuffmanTree&HT,int n)
{
if(n<=1)return;
int m;
m=n*2-1;
HT=new HTNode[m+1];
for (int i=1;i<=m;++i)
{
    HT[i].parent=0;HT[i].lchild=0;HT[i].rchild=0;
}
for(int i=1;i<=n;++i){
    cin>>HT[i].weight;
}
}
void Select(HuffmanTree &HT,int n,int &s1,int &s2);
void Select(HuffmanTree &HT,int n,int &s1,int &s2){
   int min;
    for(int i=1;i<=n;++i){
     if(HT[i].parent==0){
        min=i;
        break;
     }
    }
  
  for(int i=1;i<=n;++i){
     if(HT[i].parent==0&&i!=s1){
        min=i;
        break;
     }
     }
for(int i=min+1;i<=n;++i){
      if(HT[i].parent==0&&i!=s1&&HT[i].weight<HT[min].weight)min=i;
}
s2=min;

}
void creatHuffmanCode(HuffmanTree HT,HuffmanCode &HC,int n){
    char *cd;
    HC=new char *[n+1];
    cd=new char[n];
    cd[n-1]='\0';
    for(int i=1;i<=n;++i){
        int start=n-1;
        int c=i;int f=HT[i].parent;
        while(f!=0){
            --start;
            if(HT[f].lchild==c)cd[start]='0';
            else cd[start]='1';
            c=f;f=HT[f].parent;
        }
        HC[i]=new char[n-start];
        strcpy(HC[i],&cd[start]);
    }
    delete cd;
}
int main(){
    HuffmanTree HT;
    int n;int i;int m;int s1,s2;
    cin>>n;m=n*2-1;
    CreateHuffmanTree(HT, n);
    for(i=n+1;i<=m;i++){
        Select(HT, i-1, s1, s2);
        HT[s1].parent=i;HT[s2].parent=i;
        HT[i].lchild=s1;HT[i].rchild=s2;
        HT[i].weight=HT[s1].weight+HT[s2].weight;
    }
for(i=1;i<=m;++i){
    cout<<HT[i].weight<<'\t'<<HT[i].parent<<'\t'<<HT[i].lchild<<'\t'<<HT[i].rchild<<'\n';
}
HuffmanCode HC;
creatHuffmanCode(HT,HC,n);
for(int i=1;i<=n;i++){
    cout<<HT[i].weight<<'\t'<<HC[i]<<'\n';
}
}