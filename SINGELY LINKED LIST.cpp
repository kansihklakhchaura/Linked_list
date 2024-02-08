#include <iostream>
using namespace std;
class node   /*This is comment add by Gaurav sati */
{          
	public:
		int data;
		node* next;
};
class list
{
	int n;
	node* first;
	public:
		list()
		{
			first=NULL;
		}
		void create()
		{
			node *current,*temp;
			temp=new node();
			cout<<"\nEnter the data: ";
			cin>>temp->data;
			temp->next=NULL;
			if(first==NULL)
			first=temp;
			else
			{
				current=first;
				while(current->next!=NULL)
				{
					current=current->next;
				}
				current->next=temp;
			}
		}
		void display()
		{
			node *current;
			current=first;
			while(current!=NULL)
			{
				cout<<"\n"<<current->data;
				current=current->next;
			}
		}
		void insert(int n)
		{
			node *current,*temp;
			temp=new node();
			cout<<"\nEnter data: ";
			cin>>temp->data;
			temp->next=NULL;
			if(n==1)
			{
				temp->next=first;
				first=temp;
			}
			else
			{
				current=first;
				while(current->next!=NULL)
				{
					current=current->next;
				}
				current->next=temp;
			}
		}
		void delete1(int n)
		{
			node *current,*t1;
			current=first;
			t1=first;
			if(n==1)
			{
				cout<<"\nData deleted: "<<current->data;
				first=current->next;
				delete(t1);
			}
			else
			{
				while(current->next!=NULL)
				{
					t1=current;
					current=current->next;
				}
				cout<<"\nData deleted: "<<current->data;
				t1->next=NULL;
				delete(current);
			}
		}
};
int main()
{
	int ch,n;
	list l1;
	char ans;
	do
	{
		cout<<"\nLINKED LIST";
		cout<<"\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.EXIT";
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				l1.create();
				break;
			case 2:
				l1.display();
				break;
			case 3:
				cout<<"\n1.Inserting in the beginning\n2.Inserting in the end\nEnter your choice:";
				cin>>n;
				l1.insert(n);
				break;
			case 4:
				cout<<"\n1.Delete from the beginning\n2.Delete from the end\nEnter your choice:";
				cin>>n;
				l1.delete1(n);
				break;
			case 5:
				exit(1);
				break;
			default:
				cout<<"You have entered a wrong choice";
		}
		cout<<"\n Do uou wish to continue?";
		cin>>ans;
	}while(ans=='Y'||ans=='y');
	return 0;
}
