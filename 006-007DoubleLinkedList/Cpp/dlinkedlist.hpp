
#ifndef __DLINKEDLIST__H__
#define __DLINKEDLIST__H__

template <typename T>
class Node {
    public:
        Node(T add_data);
        T data;
        Node<T> *prev;
        Node<T> *next;
}; 

template <typename T>
class DLinkedList {

    public:
        DLinkedList();
        ~DLinkedList();
        void add_data(T data);
        int get(int index);
        int len();

    private:
        Node<T> *p_cursor;
        unsigned int i_cursor;

        Node<T> *start;
        Node<T> *end;
        unsigned int length;
};

#endif

