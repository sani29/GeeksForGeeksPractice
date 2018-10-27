/* Question: Reverse a linked list
	Link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1
*/

// Should reverse list and return new head.
Node* reverse(Node *head)
{
  if(head==NULL || head->next == NULL){
      return head;
  }
  Node* ans = reverse(head->next);
  Node* tail = head->next;
  
  tail->next = head;
  head->next = NULL;
  
  return ans;
}
