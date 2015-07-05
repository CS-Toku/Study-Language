
#ifndef __DLINKEDLIST__H__
#define __DLINKEDLIST__H__

typedef struct node {

    int data;
    struct node *prev;
    struct node *next;

} Node;


typedef struct dlinkedlist {

    struct node *p_cursor;
    unsigned int i_cursor;

    struct node *start;
    struct node *end;
    unsigned int length;

} DLinkedList;


DLinkedList* DLList_init(void);
void DLList_add_data(DLinkedList *list,int data);
int DLList_get(DLinkedList *list, int index);
int DLList_len(DLinkedList *list);
void DLList_free(DLinkedList * list);

#endif

