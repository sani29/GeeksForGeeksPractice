/* Question: linked list of strings forms a palindrome
    Link: https://practice.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1
*/

bool isPalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool Compute(Node* root){
   string s;
   Node* temp = root;
   while(temp!=NULL){
       s += temp->data;
       temp = temp->next;
   }
   return isPalindrome(s);
}
