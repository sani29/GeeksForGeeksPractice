/* Question: Remove every k'th node
	  Link: https://practice.geeksforgeeks.org/problems/remove-every-kth-node/1
*/

Node * deleteK(Node *head,int K)
{
   if(head == NULL || K==0){
        return head;
    }
    if(K==1){
        return NULL;
    } 
  Node *temp = head, *n = head;
  int count=1;
  while(temp!=NULL ){
      if(count%K == 0){
          n->next = temp->next;
      }
      n = temp;
      temp = temp->next;
      count++;
  }
  return head;
}
