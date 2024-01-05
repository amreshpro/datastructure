#include <iostream>
using namespace std;

// node
class node
{
public:
    int data;
    node *next;
    node() {}
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
private:
    /* data */
    node *start, *tail;

public:
    LinkedList(/* args */);
    void insertAtStart(int);
    void insertAtLast(int);
    void insertAtAfter(node *, int);
    void insertAtBefore(node *, int);
    void deleteAtStart();
    void deleteAtLast();
    void deleteNode(node *);
    node *search(int);
    void display();
    ~LinkedList();
};
LinkedList::LinkedList() {}
void LinkedList::insertAtStart(int data)
{
    node *newNode = new node(data);
    newNode->next = start;
    start = newNode;
}
void LinkedList::insertAtLast(int data)
{

    node *newNode = new node(data);
    node* temp = start;
    if (start->next == nullptr)
    {
        start = newNode;
    }
    else
    {
 
        // going to last node
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = nullptr;
    }
}
void LinkedList::insertAtAfter(node *afterThisNode, int data)
{
    node *newNode = new node(data);
    node *temp = afterThisNode->next;
    afterThisNode->next = newNode;
    newNode->next = temp;
}
node *LinkedList::search(int data)
{
    node *temp = start;
    while (temp)
    {
        if (temp->data == data)
            return temp;

         temp = temp->next;   
    }

    return nullptr;
}
void LinkedList:: deleteAtStart(){
    node *t;
 if(start){
t=start;
start=start->next;
delete t;
 }

}
void LinkedList:: deleteAtLast(){
    node* t = start;
   try
   {
       if (start == nullptr)
           throw 1;
       if (start->next == nullptr)
       {
           delete start;
           start = nullptr;
       }
       else
           while (t->next->next != nullptr)
               t = t->next;
       delete t->next->next;
       t->next = nullptr;
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }
   
    
}
void LinkedList:: deleteNode(node *t){
node *r = start;
try
{
    if(start ==nullptr) throw 1;
    if(start==t){
       deleteAtStart();
    }else{
t = start;
while(r->next != t) 
         r=r->next;
    r->next =t->next;
    delete t;
    
}
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}


}
void LinkedList::display()
{
    node *temp = start;
    while (temp->next != nullptr)
    {
        cout << temp->data << ", ";
        temp = temp->next;
    }
    cout << "\n";
}
LinkedList::~LinkedList() {
    while(start){
        deleteAtStart();
    }
}

int main(int argc, char const *argv[])
{

    LinkedList list;
    list.insertAtStart(5);
    list.insertAtStart(15);
    list.insertAtLast(80);
    list.insertAtLast(90);
    list.insertAtLast(100);
    list.insertAtLast(110);
    list.display();
    list.deleteAtStart();
    list.display();
    list.deleteAtLast();
    list.display();

    return 0;
}
