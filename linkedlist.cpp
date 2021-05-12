#include<iostream>
using namespace std;

class Node{

    public:
    int key;
    int data;
    Node*next;

    Node(){
        key=0;
        data=0;
        next=NULL;
    }
    Node(int k, int d){
        key=k;
        data=d;
    }
};
class SinglyLinkedlist{
    public:
        Node*head;
        SinglyLinkedlist(){
            head=NULL;

        }
        SinglyLinkedlist(Node*v){
            head=n;
        }
        Node*nodeExist(int k){ //Check if node exist 
            Node*temp=NULL;
            Node*ptr=head;
            while(ptr!=NULL){
                if(ptr->key==k){
                    temp=ptr; 
                }
                ptr=ptr->next;
            }
            return temp;
        }
        void appendNode(Node*n){ //append node 
            if(nodeExist(n->key)!=NULL){
                cout<<"Node already exists key value :"<<n->key<<"append another node"<<endl;
            }
            else{
                if(head==NULL){
                    head=n;
                    cout<<"Node appended 1"<<endl;
                }
                else{
                    Node *ptr=head;
                    while(ptr->next!=NULL){
                        ptr=ptr->next;
                    }
                    ptr-next=n;
                    cout<"Node appended"<<endl;
                }
            }
        }
        void prependNode(Node*n){ //adding to start

            if(nodeExist(n->key!=NULL)){
                cout<<"Node already exists key value :"<<n->key<<"append another node"<<endl;
            }
            else{
                n->next=head;
                head=n;
                 cout<"Node prepended"<<endl;
            }
        }
        void insertNodeAfter(int k,Node*n){
            Node*ptr=nodeExist(k);
            if(ptr==NULL){
                 cout<<"Node already exists key value :"<<n->key<<"append another node"<<endl;
            }
            else{
                
            }

        }
};


int main(){
    
    
    return 0;
}