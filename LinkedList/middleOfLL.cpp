struct Node
{
    int data;
    struct Node *next;
};

// TC -> O(N) + O(N/2)
// SC -> O(1)
Node *middleofLL(Node *head)
{
    Node *ans = head;
    int cnt = 0;
    while (ans)
    {
        ans = ans->next;
        cnt++;
    }
    ans = head;
    for (int i = 0; i < cnt / 2; i++)
        ans = ans->next;
    return ans;
}

// TC -> O(N/2)
// SC -> O(1)
Node *middleOfLL2(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
} 
