#include <iostream>
#include "dlinkedlist.hpp"

int main(void){

    DLinkedList<int> *list = new DLinkedList<int>();
    list->add_data(1);
    list->add_data(2);
    list->add_data(3);
    list->add_data(4);
    list->add_data(5);
    list->add_data(4);
    list->add_data(3);
    list->add_data(2);
    list->add_data(1);

    for(int i=0; i < list->len(); i++){
        int data = list->get(i);
        std::cout << "list(" << i << "): " << data << std::endl;
    }

    delete list;

    return 0;
}

