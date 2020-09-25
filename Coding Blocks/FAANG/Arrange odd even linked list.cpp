#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
};
Node* head=NULL;
void oddeven()
{
	Node *temp=head;
	if(head==NULL)
	return;
	Node *odd_head=NULL;
	Node *odd_tail=NULL;
	Node *even_head=NULL;
	Node *even_tail=NULL;
	bool isodd=1;
	while(temp!=NULL)
	{
		if(isodd)
		{
			if(odd_head==NULL)
			{
				odd_head=odd_tail=temp;
			}
			else
			{
				odd_tail->next=temp;
				odd_tail=temp;
			}
            temp=temp->next;
			odd_tail->next=NULL;
		}
		else
		{
			if(even_head==NULL)
			{
				even_head=even_tail=temp;
			}
			else
			{
				even_tail->next=temp;
				even_tail=temp;
			}
            temp=temp->next;
			even_tail->next=NULL;
		}
		//temp=temp->next;
        isodd=!isodd;
	}
    odd_tail->next=even_head;
}

void print()
{
    Node* temp=head;
    if(temp==NULL)
        return;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void push(int d){
	Node* temp=head;
    Node* ptr=new Node();
	ptr->data=d;
	ptr->next=NULL;
	if(head==NULL)
		{head=ptr; return;}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=ptr;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        push(x);
    }
    cout<<"Original List: ";
    print();
    cout<<endl;
    oddeven();
    cout<<"Modified List: ";
    print();
	return 0;
}
