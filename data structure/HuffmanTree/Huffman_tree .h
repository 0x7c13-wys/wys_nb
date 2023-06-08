#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;



/*
哈夫曼树的存储结构
*/
typedef struct{
    int weight;                          //权值
    int parent, lchild, rchild;            //双亲，左孩子，右孩子的下标
}HTNode,*HuffmanTree;                    //动态分配数组存储哈夫曼树



void creatHuffmanTree(HuffmanTree &HT, int n){
    int s1,s2;
    if(n <= 1){
        return;
    }
    int m = 2*n-1;                       //哈夫曼树的总结点数
    HT = new HTNode[m+1];                //0号单元未用,所以需要申请m+1个单元,HT[m]表示根节点
    for(int i = 1; i <= m; ++i){         //初始化哈夫曼树中所有结点的双亲，左孩子，右孩子的下标初始化为0
        HT[i].parent = 0;
        HT[i].lchild = 0;
        HT[i].rchild = 0;
    }
    for(int i = 1; i < m; i++){                                      
        Select(HT, i - 1, s1, s2);                          //在HT[1...i-1]中选择parent为0且weight最小的两个结点，其序号分别为s1和s2
        HT[s1].parent = i;
        HT[s2].parent = i;                                  //得到新节点 i ，从森林中删除s1,s2，将s1,s2的双亲设置为i
        HT[i].lchild = s1;
        HT[i].rchild = s2;                                  //将s1,s2设置为i的左右孩子
        HT[i].weight = HT[s1].weight + HT[s2].weight;       //i的权值为左右孩子权值之和
    }
}