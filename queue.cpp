#include <iostream>
using namespace std;

class Queue {

    private:
        int front;
        int rear;
        int arr[4];

    public:
        Queue(){
            front=-1;
            rear=-1;
            for(int y=0;y<arr.size();y++){

                arr[y]=0;
            }
        }
        bool isEmpty(){
            if(front==-1 &&rear==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if(rear==arr.size()){
                return true;
            }
            else{
                return false;
            }
        }
        void enqueue(int val){
            if(isFull()){
                cout<<"its full"<<endl;
            }
            else if(isEmpty()){
                rear=0;
                front=0;
                arr[rear]=val;
            }
            else{
                rear++;
                arr[rear]=val;
            }
        }
        int dequeue(){
            int x;
            if(isEmpty()){
                cout<<"Queueu is Empty!"<<endl;
                return 
            }
            else if(front==rear){
                x=arr[front];
                arr[front]=0;
                rear=-1;
                front=-1;
                return x;
            }
            else{
                x=arr[front];
                arr[front]=0;
                front++;
                return x;
            }
        }
        int count(){

            return(rear-front+1);

        }
        void display(){
            for(int i=0;i=<front;i++){
                cout<<arr[i]<<endl;
            }
        }
};

int main(){

        Queue q1;
        int option;
        int value;
        do{
            cout<<"Choose one operation from the list"<<endl;
            cout<<"1.Enqueue"<<endl;
            cout<<"2.Dequeue"<<endl;
            cout<<"3.isEmpty"<<endl;
            cout<<"4.isFull"<<endl;
            cout<<"5.Count"<<endl;
            cout<<"6.Display"<<endl;

            cin>>option;

             switch(option)
             {
            case 0:
                break;
            case 1:  
                cout<<"Enqueue Operation.Enter an item to Enqueue in the Queue"<<endl;
                cin>>value;
                q1.enqueue(value);
                break;  
            case 2:
                cout<<"Dequeue Operation.Dequeued item"<<q1.dequeue()<<endl;
                break;
            case 3:
                if(q1.isEmpty())
                {
                    cout<<"Queue is empty"<<endl;
                    break;
                }
                else
                {
                    cout<<"Queue is full"<<endl;
                    break;
                }
            case 4:
                if(q1.isFull()){
                    cout<<"Queue is full"<<endl;
                    break;
                }
            case 5:
                cout<<"Count operation done ! \nCount of items in Queue"<<q1.count()<<endl;
                break;
            }
            case 6:
                cout<<"Dispaly Function called ! -"<<endl;
                q1.display();
        }
       while(option!=0{

       }
   
    return 0;
}