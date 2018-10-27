/* Question: Add two numbers represented by linked lists
	Link: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
*/

Node*  addTwoLists(Node* first, Node* second){
  Node* res = NULL; // res is head node of the resultant list 
    Node *temp, *prev = NULL; 
    int carry = 0, sum; 
  
    while (first != NULL || second != NULL)
    { 
        sum = carry + (first? first->data: 0) + (second? second->data: 0); 
  
        // update carry for next calulation 
        carry = (sum >= 10)? 1 : 0; 
  
        // update sum if it is greater than 10 
        sum = sum % 10; 
  
        // Create a new node with sum as data 
        temp = newNode(sum); 
  
        // if this is the first node then set it as head of the resultant list 
        if(res == NULL) 
            res = temp; 
        else // If this is not the first node then connect it to the rest. 
            prev->next = temp; 
  
        // Set prev for next insertion 
        prev  = temp; 
  
        // Move first and second pointers to next nodes 
        if (first) first = first->next; 
        if (second) second = second->next; 
    } 
  
    if (carry > 0) 
      temp->next = newNode(carry); 
  
    // return head of the resultant list 
    return res;
}
