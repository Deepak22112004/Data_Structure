#include <iostream>
using namespace std;
const int size =100;
int q[size],front=0,rear=-1;
void insert(){
    if(rear==size-1){
        cout<<"Queue is Overflow ";
    }
    else{
        cout<<"Enter elements :";
        rear++;
        cin>>q[rear];
    }

}
void Delete(){
    if(front>rear){
        cout<<"Queue is Overflow ";
    }
    else{
        
        cout<<"deleted value is : "<<q[front]<<endl;
        front++;
    }

}
void display(){
    if(front>rear){
        cout<<"Queue is Overflow ";
    }
    else{
        cout<<"Elments are : ";
        for (int i=front;i<=rear;i++){
            cout<<q[i]<<" ";
        }
    }

}
int main(){
    int ch;
    do{
   cout<<"\n\t-----Queue-----"<<endl;
   cout<<"Press 1 for insert opreation ."<<endl;
   cout<<"Press 2 for delete opreation ."<<endl;
   cout<<"Press 3 for display opreation ."<<endl;
   cout<<"Enter value : ";
   cin>>ch;
   switch (ch)
   {
   case 1:insert();
   break;/* constant-expression */
    /* code */
    case 2:Delete();
    break;
    case 3:display();
    break;
    case 4:break;
    default:cout<<"Invalid choice  ";
    
   
  
   }}while (ch!=4);
   
  
   
}

