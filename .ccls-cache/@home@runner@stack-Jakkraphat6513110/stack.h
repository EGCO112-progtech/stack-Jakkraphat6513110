
#ifndef stack_h
#define stack_h
#include "node.h"
#include <stdlib.h>
typedef struct {
  NodePtr top;
  int size;
} Stack;

typedef Stack *StackPtr;
void pushs(StackPtr s, char value) {
  Node *new_node = (NodePtr)malloc(sizeof(Node));
  if (new_node) {
    new_node->data = value;
    new_node->nextPtr = s->top;
    s->top = new_node;
    s->size++;
  }
}
char pops(StackPtr s) {
  NodePtr t = s->top;
  if (t) {
    char value = t->data;
    s->top = t->nextPtr;
    s->size--;
    free(t);
    return value;
  }
}
void pop_all(StackPtr s) {
  while (s->size > 0) {
    pops(s);
    // s->size--;
  }
}

#endif
