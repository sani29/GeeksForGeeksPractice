/* Question: Multiply two linked lists
	Link: https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1
*/

/*The method multiplies 
two  linked lists first and second
and returns their product*/
long long  multiplyTwoLists (Node* first, Node* second)
{
    long long N= 1000000007;
    long long num1 = 0, num2 = 0;
    while (first || second)
    {
        if(first){
            num1 = ((num1%N)*10)%N + first->data;
            first = first->next;
        }
        if(second)
        {
            num2 = ((num2%N)*10)%N + second->data;
            second = second->next;
        }
    }

    return ((num1%N)*(num2%N))%N;
}
