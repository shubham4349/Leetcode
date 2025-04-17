#include <iostream>
using namespace std;

struct node
{
    int data; // props
    node *next;

    node(int data) // constructor
    {
        this->data = data;
        this->next = nullptr;
    }
};
class singly
{
    public: // public nhi banaya to error aayega
    node *head;

    singly()
    {
        this->head = nullptr;
    }
    // head = new node(5);

    void insertAtHead(int data)
    {
        node *newNode = new node(data);
        newNode->next = head;
        head = newNode;
    }
    void insertAtTail(int data)
    {
        node *newNode = new node(data);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void display()
    {
        node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "Null" << endl;
        bool findKey = search(head, 4); 
        cout<< (findKey ? "found":"not found");

    }
//    public:
    bool search(node* head, int key){
        node* temp = head;
        while(temp->next!=nullptr){
          
            if(temp->data==key)  return true;
                // cout<<key<<" found at " ;
            else return false;
            temp = temp->next;
               

        }
    }
};
int main()
{
    singly list;
    
    list.insertAtHead(9);
    list.insertAtTail(6);
    list.insertAtTail(4);
    list.insertAtTail(6);
  
    list.display();


    return 0;
}
