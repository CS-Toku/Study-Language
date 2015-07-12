
#include "dlinkedlist.hpp"
#include <iostream>


template DLinkedList<int>::DLinkedList();
template DLinkedList<int>::~DLinkedList();
template void DLinkedList<int>::add_data(int data);
template int DLinkedList<int>::get(int index);
template int DLinkedList<int>::len();
template Node<int>::Node(int add_data);

template<typename T>
Node<T>::Node(T add_data): data(add_data), prev(nullptr), next(nullptr)
{

}


template<typename T>
DLinkedList<T>::DLinkedList(): p_cursor(nullptr), i_cursor(0), start(nullptr), end(nullptr), length(0)
{

}

template<typename T>
DLinkedList<T>::~DLinkedList(){
    int i;
    Node<int> *tmp,*freenode;

    tmp = this->start;
    while(tmp != NULL){
        freenode = tmp;
        tmp = tmp->next;
        delete freenode;
    }
}

template<typename T>
void DLinkedList<T>::add_data(T data){

    Node<int> *newnode = new Node<int>(data);

    if(this->end == nullptr){
        newnode->prev = nullptr;
        this->start = newnode;
        this->end = newnode;
        this->p_cursor = newnode;
        this->i_cursor = 1;
    }
    else{
        newnode->prev = this->end;
        this->end->next = newnode;
        this->end = newnode;
    }
    this->length++;
}

template<typename T>
int DLinkedList<T>::get(int index){

    if (index >= this->length)
        return 0;

    Node<int> *select_node = this->start;
    for(int i=0; i<index; i++){
        select_node = select_node->next;
    }

    return select_node->data;
}

template<typename T>
int DLinkedList<T>::len(){
    return this->length;
}


