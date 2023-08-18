#pragma once
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution
{
public:
    bool hasCycle(ListNode* head) {
        ListNode* quick = head;
        ListNode* slow = head;
        while (quick != nullptr) {
            quick = quick->next;
            if (quick == slow) {
                return true;
            }
            if (quick == nullptr) {
                break;
            }
            quick = quick->next;
            if (quick == slow) {
                return true;
            }
            slow = slow->next;
        }
        return false;
    }
};