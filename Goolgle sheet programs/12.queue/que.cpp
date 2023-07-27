#include<iostream>
using namespace std;
#define max 100
int queue[max];

// int n;
// cout<<"enter size of Queue"<<endl;
// cin>>n;
int front= -1,rear = -1;
void insertValue()
{
    int value;
    if(rear==max-1){
        cout<<"Queue is full"<<endl;
    }
    else{
        if(front==-1)
        front = 0;

        cout<<"enter value"<<endl;
        cin>>value;
        rear=rear+1;

        queue[rear]=value;
    }
}
void deleteValue(){
    if(front== -1 ||front>rear)
    {
        cout<<"Queue is empty"<<endl;

    }
    else{
        cout<<"deletion element is ="<<queue[front]<<endl;
        front=front+1;

    }
}
void display(){
    if(front == -1 || front>rear){
        cout<<"queue is empty"<<endl;
    }
    else{
       
        cout<<"Queue elements are:"<<endl;
        for(int i=front;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // cout<<"Enter  size of queue"<<endl;
    // cin>>n;
    // queue[n];
    int choice;

    do{
    cout<<"1.insert element"<<endl;
    cout<<"2.delete element "<<endl;
    cout<<"3.display Queue"<<endl;
    cout<<"4.Exit"<<endl;

         cout<<"enter younr choice "<<endl;

    cin>>choice;

        switch(choice){

            case 1:{
            insertValue();
            break;
            }
            case 2:{
             deleteValue();
            break;
            }
            case 3:{
            display();
             break;
            }
            default:
            {


            cout<<"invalid choice";
            break;
            }


        }
    }while(choice!=4);

    return 0;


}
