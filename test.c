#include <stdio.h>
#include <stdlib.h>
#define NULL 0

//定义结点类型
typedef struct Node {
  int data;
  struct Node *next;
} Node, *LinkedList;
// Node表示结点的类型，LinkedList表示指向Node结点类型的指针类型

LinkedList LinkedListCreatT() {
  Node *L;
  L = (Node *)malloc(sizeof(Node));  //申请头结点空间
  L->next = NULL;                    //初始化一个空链表
  Node *r;
  r = L;  // r始终指向终端结点，开始时指向头结点
  int x;  // x为链表数据域中的数据
  while (scanf_s("%d", &x) != EOF) {
    Node *p;
    p = (Node *)malloc(sizeof(Node));  //申请新的结点
    p->data = x;                       //结点数据域赋值
    r->next = p;  //将结点插入到表头L-->|1|-->|2|-->NULL
    r = p;
  }
  r->next = NULL;
  return L;
}
int main() {
  LinkedListCreatT();
  return 0;
}
