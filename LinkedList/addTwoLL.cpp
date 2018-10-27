/* Question: Add two numbers represented by linked lists
	Link: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
*/

//write a function returns the resultant linked list
Node*  addTwoLists(Node* first, Node* second){
    Node *h1 =first, *h2=second;
  Node *ans=NULL, *tail=NULL, *temp;
  int sum=0,carry=0;
  while(h1!=NULL || h2!=NULL){
      sum = carry + (h1?h1->data:0) + (h2?h2->data:0);
      
      carry = (sum>=10)?1 : 0;
      sum = sum%10;
      
      temp = newNode(sum);
      
      if(ans == NULL){
          ans = temp;
      }
      else{
          tail->next = temp;
      }
      tail = temp;
      
      if(h1) h1 = h1->next;
      if(h2) h2 = h2->next;
      
  }
  if(carry>0){
      temp->next = newNode(carry);
  }
  return ans;
}
