#pragma once
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* p = head;
        ListNode* q = nullptr;
        ListNode* r = nullptr;
        ListNode* pOld = nullptr;
        while (p != nullptr) {
            q = p->next;
            if (q == nullptr) {
                break;
            }
            if (p == head) {
                head = q;
            }
            r = q->next;
            p->next = r;
            q->next = p;
            if (pOld != nullptr) {
                pOld->next = q;
            }
            pOld = p;
            p = r;
        }
        return head;
    }
};