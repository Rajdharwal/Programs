#include<iostream>
using namespace std;
int queue[100];
int n=100;
// int n;
// cout<<"enter size of Queue"<<endl;
// cin>>n;
int front= -1,rear = -1;
void insertValue()
{
    int value;
    if(rear==n-1){
        cout<<"Queue is full"<<endl;
    }
    else{
        
        rear=rear+1;
        cout<<"enter value"<<endl;
        cin>>value;
        queue[rear]=value;
    }
}
void deleteValue(){
    if(rear==front)
    {
        cout<<"Queue is empty"<<endl;

    }
    else{
        front=front+1;
        cout<<"deletion element is ="<<queue[front]<<endl;
    }
}
void display(){
    if(fornt==rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        front=front+1;
        cout<<"Queue elements are:"<<endl;
        for(int i=front;i<=n-1;i++)
        {
            cout<<queue[i]<<" ";
        }
    }
}
int main(){
    // cout<<"Enter  size of queue"<<endl;
    // cin>>n;
    // queue[n];
    cout<<"enter younr choice "<<endl;
    cout<<"1.insert element"<<endl;
    cout<<"2.delete element "<<endl;
    cout<<"3.display Queue"<<endl;
    cout<<"4.Exit"<<endl;
    int choice;
    cin>>choice;
    do{
        switch(choice){
            
            case 1:
            void insertValue();
            break;
            case 2:
            void deleteValue();
            case 3:
            void display();
             break;
            default:
            cout<<"invalid choice";
            break;


        }
    }while(choice!=4);

    return 0;
    

}
