#include <iostream>
using namespace std;
int top=-1;
 const int size=100;
int stack[size];
void push(){
    if(top==size-1){
        cout<<"Stack is overflow ";
    }
    else{
        top++;
        cout<<"Enter value : ";
        cin>>stack[top];

    }

}
void pop(){
    if (top==-1){
        cout<<"Stack is underflow";
    }
    else{
        cout<<"Deleted value is : "<<stack[top];
        top--;

    }
}
void display(){
    if(top==-1){
        cout<<"Stack is underflow ";
    }
    else{
        cout<<"Elements are : ";
        for(int i=0;i<=top;i++)
            cout<<" "<<stack[i];
        }
    }
}
int main(){
    int ch;
    do{
   cout<<"\n-----STACK-----"<<endl;
   cout<<"Press 1 for push opreation ."<<endl;
   cout<<"\n Press 2 for pop opreation ."<<endl;
   cout<<"\n Press 3 for display opreation ."<<endl;
   cout<<"Enter value : "<<endl;
   cin>>ch;
   switch (ch)
   {
   case 1:push();
   break;/* constant-expression */
    /* code */
    case 2:pop();
    break;
    case 3:display();
    break;
    case 4:break;
    default:cout<<"Invalid choice  ";
    
   
  
   }}while (ch!=4);
   
  
   
}
