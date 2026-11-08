#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node *head = NULL, *ptr, *newNode;
    int n, i;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        newNode = new Node;

        cout << "Enter data: ";
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

    cout << "Linked List created successfully";

    return 0;
}