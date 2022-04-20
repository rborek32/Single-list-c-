#include<iostream>
#include<windows.h>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::~LinkedList()
{
    clearList();
}

void LinkedList::print()
{
    system("CLS");
    cout << "---------------------" << endl;
    cout << " Linked list: " << endl;
    if(head == nullptr)
        cout << " List is empty ";
    Node *tmp = head;
    while(tmp)
    {
        cout << tmp->data << "\t";
        tmp = tmp->next;
    }
    cout << endl << "---------------------" << endl;
}

void LinkedList::element_pushfront(int n)
{
    Node *tmp = new Node;
    tmp->data = n;
    tmp->next = head;
    head = tmp;
}

void LinkedList::element_pushback(int n)
{
    Node *tmp1 = new Node;
    Node *tmp2 = new Node;

    tmp1->next = nullptr;
    tmp1->data = n;
    tmp2 = head;

    if (tmp2)
    {
        while(tmp2->next)
            tmp2 = tmp2->next;

        tmp2->next = tmp1;
    }
    else
        head = tmp1;
}

void LinkedList::element_pushToPosition(int n, int pos)
{
    Node* tmp = new Node();
    tmp->data = n;
    tmp->next = NULL;

    if (pos == 0)
    {
        tmp->next = head;
        head = tmp;
    }
    else
    {
        Node* current = head;
        for(int i = 0; i < pos-1; i++)
        {
            if(current != NULL)
            {
                current = current->next;
            }
        }

        if(current != NULL)
        {
            tmp->next = current->next;
            current->next = tmp;
        }
        free(current);
    }
}

void LinkedList::removeChoosenElement(int n)
{
    Node *tmp = head;
    while (head && head->data == n ){
        head = head -> next;
    }

    while (tmp->next != nullptr)
    {
        if (tmp->next->data == n)
        {
            tmp->next = tmp->next->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
}
void LinkedList::removeFirstElement()
{
    Node *tmp = head;

    if(head){
        tmp = head->next;
        free(head);
        head = tmp;
    }
}

void LinkedList::removeLastElement()
{
    Node *tmp = head;

    if(tmp)
    {
        if(tmp->next)
        {
            while(tmp->next->next)
                tmp = tmp->next;

            delete tmp->next;
            tmp->next = nullptr;
        }
        else
        {
            delete tmp;
            head = nullptr;
        }
    }
}

void LinkedList::removeByPosition(int pos)
{
    if(pos==0)
        removeFirstElement();
    else
    {
        Node *tmp = head;
        Node *current;

        int i=0;
        while (tmp->next != nullptr && i<pos-1)
        {
            tmp=tmp->next;
            i++;
        }
        current = tmp->next;
        tmp->next = current->next;
        free(current);
    }
}

void LinkedList::clearList()
{
    while(head)
    {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
}





