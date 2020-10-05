#include <iostream>
#include<algorithm>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node *left;
	struct node *right;
}*head=NULL;







struct node *create(int n,struct node *head){
	struct node *nn,*temp=head;
	nn=new node();
	nn->left=nn->right=NULL;
	
	if(head==NULL){
		nn->data=n;
		head=nn;
	}
	
	else{
		if(temp->data < n){
			if(temp->right!=NULL){
				temp=temp->right;
				temp=create(n,temp);
			}
			else{
				temp->right=nn;
			}
		}
		if(temp->data > n){
			temp->left=nn;
			if(temp->left!=NULL){
				temp=temp->left;
				temp=create(n,temp);
			}
			else{
				temp->left=nn;
			}
		}
	}
	return head;
}











int main() {
	int a[6]={7,9,3,10,4,8};
	for(int i=0;i<6;i++){
		head=create(a[i],head);
	}
//	cout<<head->data;
	return 0;
}
