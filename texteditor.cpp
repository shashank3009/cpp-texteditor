#include <cmath>
#include <cstdio>
#include <vector>

#include <iostream>
using namespace std;
class node{
	string data;
	node* next;
public:
	node(){
		data="";
		next=NULL;
	}
	node *head=NULL;
	void push(string str);
	string pop();

};

void node::push(string a){
	node *temp=new node();
	temp->data=a;
	if(head==NULL){
		head=temp;
		temp->next=NULL;
	}
	else{
		temp->next=head;
		head=temp;
	}
}

string node::pop(){
	node *temp=head;
	head=head->next;
    delete temp;
    if(head!=NULL)
	return head->data;
    else return "";
}



int main() {
	/*char *a="ram";
	string as(a);
	string str("asdf");
	string d=str+a;
	cout<<d<<endl;*/
	node n;
	int num,x,k;
	cin>>num;
	string str("");
	for(int i=0;i<num;i++){
		cin>>x;
		switch(x){
		case 1:{
			string sam;
			cin>>sam;
			str=str+sam;
			n.push(str);
			break;
		}
		case 2:{

			cin>>k;
			str=str.erase(str.length()-k,k);
			n.push(str);break;
		}
		case 3:{
			cin>>k;
			cout<<str.at(k-1)<<endl;break;
		}
		case 4:{
			str=n.pop();break;
		}

		}
	}

	return 0;
}
