
#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main()
{
    Node* head;
    head = new Node();
    Node* fol=new Node();
    Node* temp;
    head->data=1;
    fol=head;
    for(int i=2; i<7; i++){
        temp=new Node();
        temp->data=i;
        temp->next=NULL;
        fol->next=temp;
        fol=temp;
    }
    Node* dis;
    dis=new Node();
    dis=head;
    while(dis!=NULL){
        cout<<dis->data<<endl;
        dis=dis->next;
    }
    cout<<"INSERTION"<<endl;
    int val=10;
    int after=6;
    dis=new Node();
    dis=head;
    while(dis!=NULL){
        if(dis->data==after){
            Node* temp1;
            temp1=new Node();
            temp1->data=val;
            temp1->next=dis->next;
            dis->next=temp1;
            break;
        }
        dis=dis->next;
    }
    dis=new Node();
    dis=head;
    while(dis!=NULL){
        cout<<dis->data<<endl;
        dis=dis->next;
    }
    cout<<"DELETION"<<endl;
    dis=new Node();
    fol=new Node();
    dis=head;
    val=6;
    if(dis->data==val){
        head=dis->next;
    }
    else{
        while(dis!=NULL){
            if(dis->next ==NULL and dis->data==val){
                fol->next=NULL;
            }
            else if(dis->data==val){
                fol->next=dis->next;
            }
            fol=dis;
            dis=dis->next;
        }
    }
    dis=new Node();
    dis=head;
    while(dis!=NULL){
        cout<<dis->data<<endl;
        dis=dis->next;
    }

    return 0;
}
