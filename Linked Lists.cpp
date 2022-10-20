
#include <iostream>
using namespace std;
struct node {
private:
    int value;
public:
    node* next;

    node(int val) {
        value = val;
        next = NULL;
    }
    int getValue() {
        return value;
    }
    node getNext() {
        return *next;
    }

};

//void inserAttail(node* head, int val) {
//    node* n = new node(val);
//    node* temp = head;
//    while (temp->next!= NULL) {
//        temp = temp->next;
//    }
//    temp->next =n;
//}
void insetAthead(node*& head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}
void disp(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->getValue()<<"--";
        temp = temp->next;

    }
    cout << "NULL"<<endl;
}

bool search(node* head, int val) {
    node* temp = head;
    while (temp->next == NULL and temp->getValue() == val) {
        if (temp->getValue() == val)
        {
            cout << val << " has been found at " << temp->getValue();
            return 1;
        }
        else
        {
            cout << val << " could not be found in Linked List\n";
            return 0;
        }
    }
}
        
void delete_Element(node* head) {
    node* temp=head;
    while (temp != NULL)
        disp(head);


}
void printReverse(node* head)
{
    // Base case
    if (head == NULL)
        return;

    // print the list after head node
    printReverse(head->next);

    // After everything else is printed, print head
    cout << head->getValue() << " ";
}
int main()
{
     node* head = NULL;
      //inserAttail(head, 5);
      //inserAttail(head, 4);
      disp(head);
      insetAthead(head,6);
      disp(head);
      /*   int searchn;
      cout << "What number in the LL do you want to search?\n";
      cin >> searchn;
     cout<< search(head, searchn);*/

      insetAthead(head, 6);
      insetAthead(head, 7);
      insetAthead(head, 9);



    disp(head);
    printReverse(head);
    cout << endl << search(head, 6) << endl;


}
