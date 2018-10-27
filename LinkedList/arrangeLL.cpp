/* Question: Segregate even and odd nodes in a Linked List
	Link: https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list/0
*/
#include<bits/stdc++.h>
using namespace std;

class Node {
	public :
	int data;
	Node *next;

	Node(int data) {
		this -> data = data;
		next = NULL;
	}
};
Node* takeInput_better(){
    int n;
    cin>>n;
    int data;
	Node *head = NULL;
	Node *tail = NULL;
	while(n--){
	    cin>>data;
		Node* newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = tail->next;
		}
		//cin>>data;
	}
	return head;
}

void arrange_LinkedList(Node** head)
{
  Node *odd = NULL, *even = NULL, *oddStart = NULL, *evenStart = NULL, *temp = *head;
  while(temp!=NULL){
	int val = temp->data;
    if(val%2==0){
      if(even==NULL){
        evenStart = temp;
        even = evenStart;
      }
      else{
        even->next = temp;
        even = even->next;
      }
    }
    else{
      if(odd==NULL){
        oddStart = temp;
        odd = oddStart;
      }
      else{
        odd->next = temp;
        odd = odd->next;
      }
    }
    temp = temp->next;
  }
  if(oddStart == NULL || evenStart == NULL){ 
        return; 
    } 
    
  even->next = oddStart;
  odd->next = NULL;
  
  *head =  evenStart;
}

void print(Node *head) {
	
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
	cout<<endl;
}

int main()
 {
     int t;
     cin>>t;
     while(t--){
         Node *head = takeInput_better();
         arrange_LinkedList(&head);
    	print(head);
     }
     
	
	return 0;
}
