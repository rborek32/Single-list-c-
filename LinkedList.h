#ifndef LINKEDLIST_H
#define LINKEDLIST_H
class LinkedList
{
private:
    struct Node
    {
        int data; //pole na dana liczbowa
        Node *next; //pole na wskaznik nastepnego elementu
    };

    Node *head; // wskaznik poczatku listy

public:
    LinkedList();
    ~LinkedList();

    void print();
    void element_pushfront(int n); //dodawanie na poczatek listy
    void element_pushback(int n); //dodawanie na koniec listy
    void element_pushToPosition(int n, int pos); //dodawanie w wybrane miejsce (indeksy 0,1,2...)
    void removeFirstElement(); //usuniecie pierwszego elementu listy
    void removeLastElement();   //usuniecie ostatniego elementu listy
    void removeChoosenElement(int n); //usuniecie wszystkich elementow o wybranej wartosci
    void removeByPosition(int pos); //usuniecie elementu na wybranej pozycji
    void clearList(); //czyszczenie listy

};

#endif


