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
    int n, i, value, found = 0;

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

    cout << "Enter value to search: ";
    cin >> value;

    ptr = head;

    while(ptr != NULL)
    {
        if(ptr->data == value)
        {
            found = 1;
            break;
        }
        ptr = ptr->next;
    }

    if(found == 1)
        cout << "Data found";
    else
        cout << "Data not found";

    return 0;
}