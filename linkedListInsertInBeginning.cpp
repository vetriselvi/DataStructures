#include <iostream>
#include <string>
#include<iostream>
struct Node{
  int data;
  //struct Node* next; in c
  Node* next;

    
};

void Insert(int x);
void Print();
//struct Node* head;
Node* head;


void Insert(int x){
 
 Node* temp = new Node();
 temp->data = x;
 temp->next=head;
//  temp->next= NULL;
//  if(head!=NULL) temp->next=head;
  head = temp;

 
    
}
void Print(){
 
 Node *temp = head;
 std::cout<<"The list is";
 while(temp!=NULL){
     
  std::cout<<temp->data;
  temp=temp->next ;
 
 }
 
 std::cout<<"\n";
    
}
int main()
{
//   std::string name;
//   std::cout << "What is your name? ";
//   getline (std::cin, name);
//   std::cout << "Hello, " << name << "!\n";

head = NULL;
int n,i,x;
std::cout<< "How many numbers?/n";
std::cin >>n;
for ( i=0;i<n;i++){
std::cout<<"Enter the number";
std::cin >>x;
Insert(x);
Print();

}

}



