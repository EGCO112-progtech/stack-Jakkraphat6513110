//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    char data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

void push(NodePtr *top, int x){
    Node *new_node = (NodePtr)malloc(sizeof(Node));
    if(new_node){
        new_node->data = x;
        new_node->nextPtr = *top;
        *top = new_node;
    }
};

int pop(NodePtr *top){
    NodePtr t = *top;
    if(t){
        int value=t->data;
        t= *top;
        *top=t->nextPtr;
        free(t);
        return value;
    }
};
#endif
