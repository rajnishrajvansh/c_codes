#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node InsertNodes(Node** head,int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->next=*head;
    *head=newNode;
}
void DisplayNodes(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}



int main(){
    int n,data;
    Node* head=NULL;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        InsertNodes(&head,data);
    }
}