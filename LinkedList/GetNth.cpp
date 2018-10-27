/* Question: Node at a given index in linked list
	Link: https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1
*/

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
    int ans=0;
  while(head!=NULL){
      
      if(index==0){
          ans = head->data;
      }
      index--;
      head=head->next;
  }
  return ans;
}

