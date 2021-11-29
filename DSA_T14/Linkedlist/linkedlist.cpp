#include<bits/stdc++.h>
#include "list.h"
using namespace std;


int main(){
	List l;
	l.push_front(1);
	l.push_front(0);
	l.push_back(2);
	Node* head=l.begin();
	l.insert(3,1);
	while(head!=NULL){
		cout<<head->getData()<<"->";
		head=head->next;
	}
	cout<<endl;
	cout<<l.search(head,1);

	return 0;
}