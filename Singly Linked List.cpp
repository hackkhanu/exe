#include <iostream>
#include <conio.h>
using namespace std;

struct Std{
	int id;
	Std* next;
};
Std* head=NULL;

bool isEmpty(){
	if(head==NULL)
	return true;
	else	
	return false;

}

void insert(){
	if(isEmpty())
	{
	    Std* obj = new Std;	
	    head=obj;
	    cout<<"Enter Value : ";cin>>obj->id;cout<<endl;
	    obj->next=NULL;
	}
	else{
		Std* temp;
		temp=head;
		Std* obj = new Std;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		cout<<"Enter Value : ";cin>>obj->id;cout<<endl;
		temp->next=obj;
		obj->next=NULL;		
	}
}

void Searching(){
	if(!isEmpty()){
		 Std* temp;
	temp=head;
	bool found = false;
    int idd;
    cout<<"\nSearching...\n";
	cout<<"Enter Value : ";cin>>idd;
   	  while(temp->next != NULL)
	   { 
		if(temp->id==idd)
		{
			found = true;
		}
		temp=temp->next;
	   }
	   if(temp->id==idd)
	   {
		found=true;
	   }
	
	   if(found==true){
		cout<<endl<<idd<<"  : found ...\n";
	   }
	   else if(found==false){
		   cout<<"Not Found....\n";
	      }
	}
	else{
		cout<<"Linked List is Empty...\n";
	}
}

void Deleting(){
	
	if(!isEmpty()){
	Std* temp1;
	Std* temp2;
	Std* temp3;
	bool founding = false;
	temp1=head;
	int idd;
	cout<<"\nDeleting...\n";
	cout<<"Enter Value : ";cin>>idd;
	
	if(head->id==idd){
		Std* temp;
		if(head->next==NULL){
			temp = head;
			head=NULL;
		    delete temp;
		    founding = true;
		    cout<<"Deleted the first node...\n";
		}
		else{
			temp = head;
			head=temp->next;
		    delete temp;
		    founding = true;
		    cout<<"Deleted...\n";
		}		
	}
	else{
		while(temp1->next!=NULL)
		{
			if(temp1->next->id==idd){
				temp3=temp1->next;
				temp1->next=temp3->next;
				delete temp3;
				founding = true;
				cout<<"deleted...\n";	
				continue;
			}
			temp1=temp1->next;	
		}
	}
	if(founding==false){
		cout<<"\nNot found....\n";
	}
	} 
	else {
		cout<<"\nLinked list is Empty...\n";
	}
}

void Display(){
	
	if(!isEmpty()){
		Std* temp;
	    temp=head;
	while(temp->next!=NULL){
		cout<<temp->id<<endl;
		temp=temp->next;
    	}
        cout<<temp->id<<endl;
	}	
	else{
		cout<<"\nLinked list is Empty...\n";
	}	
}

int main(){
	label:;
	system("cls");
	char a;
	cout<<"\n1 -> Insert \n2 -> Searching \n3 -> Deleting \n4 -> Display \n5 -> isEmpty \nEnter Choice : ";cin>>a;
	switch(a){
		case '1' : insert();
		break;
		case '2' : Searching();
		break;
		case '3' : Deleting();
		break;
		case '4' : Display();
		break;
		case '5' : if(isEmpty())cout<<"\nEmpty..\n"; else cout<<"\nNot Empty...\n";
		break;
		default : cout<<"\nWrong input...\n";
		break;
	}
	char ch;
		cout<<"\nWant to Continue : ";ch=getch();
		if(ch=='y'){
			goto label;
		}
		else{
			cout<<"Exit....\n";
		}
}

// hell
