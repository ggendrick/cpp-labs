

#include <iostream>
using namespace std;
template<typename T> //шаблонный класс
class List
{
public:
     List();
    ~List();
    void pop_front();
    void push_back(T data);//добавить в конец
    void clear();
    int GetSize() { return Size; } //получить размер списка
    void push_front(T data);
    void insert(T data, int index);
    void removeAt(int index);
    void pop_back();

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
List<T>::List(){ //конструктор
    Size = 0;
    head = nullptr;
}
template<typename T> //шаблонный класс
List<T>::~List() {//деструктор
    clear();
}

template<typename T>
void List<T>::pop_front() //удаление первого элемента
{
    Node<T> *temp = head;
    head = head->pNext;
    delete temp;
    Size--;

}

template<typename T>
void List<T>::push_back(T data)
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
void List<T>::clear()
{
    while (Size>0) {
        pop_front();
    }
}

template<typename T>
void List<T>::push_front(T data)
{
    head = new Node<T>(data,head);
    Size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{
    if (index == 0) {
        push_front(data);
    }
    else {
        Node<T>* previous = this->head;
        for (int i = 0; i < index-1; i++) {
            previous = previous->pNext;
        }
        Node<T>* newNode = new Node<T>(data, previous->pNext);
        previous->pNext = newNode;
        Size++;
    
    
    }
}

template<typename T>
void List<T>::removeAt(int index)
{

    if (index == 0) {
        pop_front();
    }
    else {
        Node<T>* previous = this->head;
        for (int i = 0; i < index - 1; i++) {
            previous = previous->pNext;
        }
        Node<T>* toDelete = previous->pNext;
        previous->pNext = toDelete->pNext;
        delete toDelete;
        Size--;
    
    
    }
}

template<typename T>
void List<T>::pop_back()
{
    removeAt(Size-1);

}

template<typename T>
T& List<T>::operator[](const int index)
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
    List<int> lst;
    lst.push_back(5);
    lst.push_back(10);
    lst.push_back(22);
    cout << lst.GetSize() << endl;
    cout << lst[2] << endl;
    lst.operator[](0);
}


