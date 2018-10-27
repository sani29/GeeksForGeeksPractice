/* Question: Insert in Middle of Linked List
      Link: https://practice.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1

*/


// function should insert node at the middle
// of the linked list
Node* insertInMiddle(Node* head, int x)
{
	Node *slow = head, *fast = head, *temp = NULL;
	Node *newNode = new Node;
	while(fast->next!=NULL && fast->next->next!=NULL){
	    slow = slow->next;
	    fast = fast->next->next;
	}
	newNode->data = x;
	newNode->next = slow->next;
	slow->next = newNode;
	
	return head;
}
