#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  char name[10];
  int age;
  struct node *next;
}
node *head ;
void firstinsert(char data);
void main() {
  head = NULL;
  printf("2011244116 Test!!\n");
  prtinf("2011244119 Test!!\n");
}
void firstinsert(char data){
node *newNode = (node*)malloc(sizeof(node));
newNode = head;  
newNode -> name = data;
}
