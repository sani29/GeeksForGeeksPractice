/* Question: Reverse a Linked List in groups of given size
	Link: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
*/

struct node *reverse (struct node *head, int k)
{ 
  node* prev = NULL;
  node* current = head;
  node* nextNode = head->next;
  
  int count=1;
  while(current != NULL && count <= k){
     nextNode = current->next;
    current->next = prev;
    prev = current;
    current = nextNode; 
    count++;
  }
  if(nextNode!=NULL){
      head->next = reverse(nextNode, k);
  }
  return prev;
}

