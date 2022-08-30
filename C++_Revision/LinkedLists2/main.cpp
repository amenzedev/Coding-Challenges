#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(struct Node** head, int newData);
void printList(struct Node *head);
void deleteNode(struct Node** head, int position);

int main()
{
    Node* head = NULL;

    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    insert(&head,6);

    cout << "Created "<<endl;
    printList(head);
    deleteNode(&head,4);
    cout << "\nAfter deletion of position 4"<<endl;
    printList(head);
    cout<<endl;


    return 0;
}

void insert(struct Node**head, int newData)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node* head)
{
    while(head != NULL)
    {
        cout<< head->data<<" ";
        head = head->next;
    }
}

void deleteNode (struct Node** head, int position)
{
    if(*head == NULL)
        return ;

    struct Node* temp= *head;
    if(position == 0)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    for(int i=0;temp!=NULL && i<position-1;i++)
    {
        temp= temp->next;
    }

    if(temp==NULL || temp->next == NULL)
        return;
    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}




