#include<iostream>
using namespace std;

// node
class node{
    public:
    int data;
    node *next;
    node(){}
    node(int data){this->data=data;this->next=nullptr;}
};

class LinkedList{
private:
    /* data */
    node *head,*tail;
public:
    LinkedList(/* args */);
    void insertAtStart(int);
    void insertAtLast(int);
    void insertAtAfter(node*,int);
    void insertAtBefore(node*,int);
    node* search(int);
    void display();
    ~LinkedList();
};
LinkedList::LinkedList(){}
void LinkedList:: insertAtStart(int data){
    node *newNode = new node(data);
    newNode->next = head;
    head = newNode;


}
void LinkedList:: display(){
    while (head->next != nullptr)
    {
        cout<<head->data<<", ";
        head=head->next;
    }
    
}
LinkedList::~LinkedList(){}



int main(int argc, char const *argv[])
{

    LinkedList list ;
    list.insertAtStart(5);
    list.insertAtStart(15);
    list.insertAtStart(3);
    list.insertAtStart(31);
    list.insertAtStart(34);
    list.insertAtStart(16);
    list.display();

    
    return 0;
}
