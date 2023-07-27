#include<iostream>
using namespace std;
#define MAX 1000
class Stack
{
    int top;
    public:
    // maximum size of array
    int arr[MAX];
    Stack(){ 
        top=-1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    
    
};

bool Stack::push(int x){
    if(top>= (MAX-1)){
        cout<<"stack is overflow:"<<endl;
        return false;
    }
    else{
        arr[++top] = x;
        cout<<x<<"pushed into stack"<<endl;
        return true;
    }

}
int Stack::pop(){
    if(top<0){
        cout<<"stack is under flow"<<endl;
        return 0;
    }
    else{
        int x = arr[top--];
        return x;
    }
}

int Stack::peek(){
    if(top<0){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    else{
        int x=arr[top];
        return x;
    }
}
 
bool Stack::isEmpty(){
    return(top<0);
}

int main(){
    class Stack s;
    s.push(12);
    s.push(13);
    s.push(14);
    cout<<s.pop()<<"is poped element"<<endl;
    cout<<s.peek()<<"is top element"<<endl;
    //Print all element of stack
    cout<<"element present in stack"<<endl;
    //Element present in stack
    while(!s.isEmpty()){
        //print top element in stack
        cout<<s.peek()<<" ";
        //remove top element in stack
        s.pop();

    }
    
    return 0;
}