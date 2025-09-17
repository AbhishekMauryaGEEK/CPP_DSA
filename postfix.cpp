#include<iostream>
using namespace std;

struct Stack{
    int top;
    int arr[100];

    public:
    Stack(){
        top =-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==99;
    }
    void push(int x){
        if (isFull()){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top]=x;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(!isEmpty()){
            return arr[top];
        }
        else{
            return -1;
        }
    }
};
int main(){
    Stack s;
    s.push(10);
    cout<<"Top element : "<<s.peek()<<endl;
    s.push(20);
    s.pop();
    cout<<"Top element of the array"<<s.peek()<<endl;
    s.pop();
    s.pop();
    return 0;
}