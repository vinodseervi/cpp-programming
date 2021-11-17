#include<iostream>
using namespace std;
//#include"Node.cpp"

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this -> data = data;
			next = NULL;
		}
};

Node* takeInput(){
	int data;
	cin>>data;
	Node *head = NULL;
	while(data != -1){
		Node *newnode = new Node(data);
		if(head == NULL){
			head = newnode;
		}
		else{
			Node *temp = head;
			while(temp -> next != NULL){
				temp = temp -> next;
			}
			temp -> next = newnode;
		}
		cin>>data;
	}
	return head;
}

void print(Node *head){
	while(head != NULL){
		cout<< head -> data << " ";
		head = head -> next;
	}
}

int main(){
	
//	Node *node1 = new Node(1);
//	Node *head = n  ode1;
//	Node *node2 = new Node(2);
//	Node *node3 = new Node(3);
//	Node *node4 = new Node(4);
//	Node *node5 = new Node(5);
//	
//	node1 -> next = node2;
//	node2 -> next = node3;
//	node3 -> next = node4;
//	node4 -> next = node5;
	
//	Node n1(1);
//	Node *head = &n1;
//	Node n2(2);
//    Node n3(3);
//    Node n4(4);
//    Node n5(5);
//    
//    n1.next = &n2;
//    n2.next = &n3;
//    n3.next = &n4;
//    n4.next = &n5;
//    print(head);
    Node *head = takeInput();
    print(head);
}
