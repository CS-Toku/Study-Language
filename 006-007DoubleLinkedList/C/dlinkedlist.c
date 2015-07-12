
#include "dlinkedlist.h"
#include <stdlib.h>

DLinkedList* DLList_init(void){

    DLinkedList* newlist = (DLinkedList *)malloc(sizeof(DLinkedList));
    newlist->p_cursor = NULL;
    newlist->i_cursor = 0;
    newlist->start = NULL;
    newlist->end = NULL;
    newlist->length = 0;

    return newlist;
}

void DLList_add_data(DLinkedList* list, int data){

    Node* newnode = (Node *)malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = NULL;

    if(list->end == NULL){
        newnode->prev = NULL;
        list->start = newnode;
        list->end = newnode;
        list->p_cursor = newnode;
        list->i_cursor = 1;
    }
    else{
        newnode->prev = list->end;
        list->end->next = newnode;
        list->end = newnode;
    }
    list->length++;
}

int DLList_get(DLinkedList* list, int index){

    int i;
    Node *select_node;
    if (index >= list->length)
        return 0;

    select_node = list->start;
    for(i=0; i<index; i++){
        select_node = select_node->next;
    }

    return select_node->data;
}

int DLList_len(DLinkedList *list){
    return list->length;
}

void DLList_free(DLinkedList * list){
   
    int i;
    Node *tmp,*freenode;

    tmp = list->start;
    while(tmp != NULL){
        freenode = tmp;
        tmp = tmp->next;
        free(freenode);
    }
    if(list != NULL)
        free(list);
}

