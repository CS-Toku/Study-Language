#include <stdio.h>
#include "dlinkedlist.h"

int main(void){

    int i;
    DLinkedList* list = DLList_init();
    DLList_add_data(list, 1);
    DLList_add_data(list, 2);
    DLList_add_data(list, 3);
    DLList_add_data(list, 4);
    DLList_add_data(list, 5);
    DLList_add_data(list, 4);
    DLList_add_data(list, 3);
    DLList_add_data(list, 2);
    DLList_add_data(list, 1);
    DLList_add_data(list, 0);

    for(i=0; i < DLList_len(list); i++){
        int data = DLList_get(list, i);
        printf("list(%d):%d\n", i, data);
    }

    DLList_free(list);

    return 0;
}

