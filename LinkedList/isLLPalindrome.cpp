/* Question: Check if Linked List is Palindrome
	Link: https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
*/

bool helper(Node **left, Node *right){
    if(right==NULL){
        return true;
    }
    bool ans = helper(left,right->next);
    if(!ans){
        return false;
    }
    bool ans1 = (right->data == (*left)->data);
    
    *left = (*left)->next;
    return ans1;
    
}

bool isPalindrome(Node *head)
{
    helper(&head,head);
}
