#include <bits/stdc++.h>
using namespace std;
#define v vector

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {

        ListNode *temp = node;
        temp->val = temp->next->val;
        temp->next = temp->next->next;
    }
};

int main()
{

    return 0;
}