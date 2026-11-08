#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node *head, *ptr, *newNode;
    int n, i;

    head = NULL;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        newNode = new Node;

        cin >> newNode->data;
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
            ptr = head;
        }
        else
        {
            ptr->next = newNode;
            ptr = newNode;
        }
    }

    cout << "Linked List: ";

    ptr = head;

    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}