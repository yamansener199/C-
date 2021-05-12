#include <iostream>
#include <string>

//__     __ __  __  _   _   _  
//\ \   / /|  \/  || \ | | | | 
// \ \_/ / | \  / ||  \| |/ __)
//  \   /  | |\/| || . ` |\__ \
//   | |   | |  | || |\  |(   /
//   |_|   |_|  |_||_| \_| |_| 

using namespace std;

class Stack{   //Creating a Stack class for the Stack Functions
    private:
       int top;
       int arr[5];
    public:
    Stack (){    //Constructor for the stack object
        top=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
    bool isEmpty(){        //isEmpty Boolean Function to determine if the stack is empty or not 
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){          //isFul Boolean Function to determine if the stack is full or not 
        if(top==4){
            return true;
        }else
            return false;
    }
    void push(int val){        //Push Function to add elements to stack if there is space
        if(isFull()){
            cout<<"overflow"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
    }
    int pop(){                  //Pop Function to remove elements from stack if there is element
        if(isEmpty()){
            cout<<"nothing to pop out m8 !"<<endl;
            return 0;
        }
        else{
            int popVal=arr[top];
            arr[top]=0;
            top--;
            return popValue;
        }
    }   
    int count(){                //Count the element of the current Stack
        return (top+1);
    }
    int peek(int pos){          //Peek Function to determine the position of the peek element
        if(isEmpty()){
            cout<<"allah allah"<<endl;
            return 0;
        }
        else{
            return arr[pos];
        }
    }
    void change(int pos ,int val){     //Change funtion to change a value in a specific location
        arr[pos]=val;
        cout<<"changed"<<endl;
    }
    void Display(){
        for(int k=4;k>=0;k--){
            cout<<arr[k]<<endl;
        }
    }
};
int main(){                             //Main function to create a menu stucture for the stack class to understand its behaviours !!

Stack s1;
int position,option,value;
    do{
    cout<<"What operation do you want to perform ? Select Option number.Press 0 to exit !!"<<endl;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.isEmpty"<<endl;
    cout<<"4.isFull"<<endl;
    cout<<"5.peek"<<endl;
    cout<<"6.count"<<endl;
    cout<<"7.change"<<endl;
    cout<<"8.Display"<<endl;
    cout<<"Enter an option value !"<<endl;;
    cin>>option;

    switch (option)
    {

    case 0;
        break;
    case 1:
        cout<<"Enter an item to push !"
        cin>>value;
        s1.push(value);
        break;
    case 2:
        cout<<"Pop function worked!"<<s1.pop()<<endl;
        break;    
    
    case 3:
        if(s1.isEmpty()){
            cout<<"Stack is Empty !"<<endl;
        }
        else{
            cout<<"Stack is not Empty !"<<endl;
        }
        break;
    case 4:
        if(isFull()){
            cout<<"Stack is Full !"<<endl;
        }
        else{
            cout<<"Stack is not Full !"<<endl;
        }
        break;  
    case 5:
        cout<<"Enter position of item you want to peek: "endl;
        cin>>position;
        cout<<"Peek Func Called -Position "<<position<<" is "<<s1.peek(position)<<endl;
        break;
    case 6:
        cout<<"Count Func ran -Number of items in the stack are :"<<s1.count()<<endl;
        break;
    case 7:
        cout<<"Change Function Called-"<<endl;
        cout<<"Enter position of item you want to change !"<<endl;
        cin>>posiition;
        cout<<"Enter the value of the item you want to change !"<<endl;
        cin>>value;
        s1.change(position,value);
        break;
    case 8:
        cout<<"Displat Func called !"<<endl;
        cout<<s1.Display()<<endl;
        break;
    default:
        cout<<"Enter an option number"<<endl;
    
    }
    while(option!=0)
    {

    }

return 0;
}