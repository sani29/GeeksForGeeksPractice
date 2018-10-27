/* Question: Print Linked List elements
	Link: https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1
*/

void display(Node *head)
{
  while(head!=NULL){
       cout<<head->data<<" ";
       head = head->next;
   }
}
