
#include <iostream>
using namespace std;
template<typename T> //шаблонный класс
class Queue
{
public:
     Queue();
    ~Queue();
    void delete_unit();
    void push(T data);//добавить в конец
    void clear();
    int GetSize() { return Size; } //получить размер списка


    T& operator[](const int index);

private:
    template<typename T> //шаблонный класс
    class Node {
    public:
        Node* pNext; //указатель на след элемент
        T data;
        Node(T data=T(), Node *pNext=nullptr) { //конструктор
            this->data = data;
            this->pNext = pNext;


        }
    };
    int Size;
    Node<T> *head;
 
};
template<typename T> //шаблонный класс
Queue<T>::Queue(){ //конструктор
    Size = 0;
    head = nullptr;
}
template<typename T> //шаблонный класс
Queue<T>::~Queue() {//деструктор
    clear();
}

template<typename T>
void Queue<T>::delete_unit() //удаление первого элемента
{
    Node<T> *temp = head;
    head = head->pNext;
    delete temp;
    Size--;

}

template<typename T>
void Queue<T>::push(T data)
{
    if (head == nullptr) {
        head = new Node<T>(data);
    }
    else{
        Node<T>* current = this->head;
        while (current->pNext != nullptr) { //поиск последнего элемента
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);

    }
    Size++;
}

template<typename T>
void Queue<T>::clear()
{
    while (Size>0) {
        pop_front();
    }
}



template<typename T>
T& Queue<T>::operator[](const int index)
{
    int counter = 0;
    Node<T>* current = this->head;
    while (current != nullptr) {
        if (counter == index) {
            return current->data;
        }
        current = current->pNext;
        counter++;
    }

}











int main()
{
    Queue<int> q;
    q.push(5);
    q.push(10);
    q.push(22);
    q.delete_unit();
    cout<< q.operator[](0);
    q.clear;
}


