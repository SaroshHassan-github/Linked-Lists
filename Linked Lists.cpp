
#include <iostream>
using namespace std;
struct node{
    int value;
    node *next;

    node(int val) {
        value = val;
        next = NULL;
    }


};
//
//void inserAttail(node*& head, int val) {
//    node* n = new node(val);
//
//    if (head == NULL) {
//        head = n;
//        return;
//
//    }
//    
//    node* temp = head;
//    while (temp->next != NULL) {
//        temp = temp->next;
//    }
//    temp->next = n;
//}
//void insetAthead(node*& head, int val) {
//    node* n = new node(val);
//    n->next = head;
//    head = n;
//}
void disp(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->value<<"--";
        temp = temp->next;

    }
    cout << "NULL"<<endl;
}
//
//bool search(node* head, int val) {
//    node* temp;
//    temp = head;
//    
//    while (temp!= NULL) {
//        if (temp->value == val) {
//            return 1;
//        }
//
//        temp = temp->next;
//  }
//
//}
void delete_Element(node*head, int val) {
   node *temp;
   while (temp != head)
   {while (temp->value==val){ 
       temp = head;
    
       if (temp->value == val) {
           temp->next = temp->next->next;
       }
   
    }
    }
}

int main()
{
    /*  node* head = NULL;
      inserAttail(head, 5);
      inserAttail(head, 4);
      disp(head);
      insetAthead(head,6);
      disp(head);
      int searchn;
      cout << "What number in the LL do you want to search?\n";
      cin >> searchn;
     cout<< search(head, searchn);*/

    node node_A(5);
    node node_B(3); 
    node node_C(6);
    node node_D(2);
    node node_E(8);
    node_A.next = &node_B;
    node_B.next = &node_C;
    node_C.next = &node_D;
    node_D.next = &node_E;
    disp(&node_A);
    delete_Element(&node_A, 3);
        disp(&node_B);
}
