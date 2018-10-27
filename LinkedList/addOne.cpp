/* Question: Add 1 to a number represented as linked list
	Link: https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
*/

/* Function to reverse the linked list */
Node *reverse(Node *head) 
{ 
    Node * prev   = NULL; 
    Node * current = head; 
    Node * next; 
    while (current != NULL) 
    { 
        next  = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    return prev; 
} 
  
/* Adds one to a linked lists and return the head 
   node of resultant list */
Node *addOneUtil(Node *head) 
{ 
    // res is head node of the resultant list 
    Node* res = head; 
    Node *temp, *prev = NULL; 
  
    int carry = 1, sum; 
  
    while (head != NULL) 
    { 
        sum = carry + head->data; 
  
        // update carry for next calulation 
        carry = (sum >= 10)? 1 : 0; 
  
        // update sum if it is greater than 10 
        sum = sum % 10; 
  
        // Create a new node with sum as data 
        head->data = sum; 
  
        // Move head and second pointers to next nodes 
        temp = head; 
        head = head->next; 
    } 
  
    // if some carry is still there, add a new node to 
    // result list. 
    if (carry > 0) 
        temp->next = newNode(carry); 
  
    // return head of the resultant list 
    return res; 
} 

// This function mainly uses addOneUtil().   
Node *addOne(Node *head)
{
    head = reverse(head); 
  
    // Add one from left to right of reversed 
    // list 
    head = addOneUtil(head); 
  
    return reverse(head); 
}
