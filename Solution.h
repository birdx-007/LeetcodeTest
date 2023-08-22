#pragma once
#include "ListNode.h"
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        while (n > 1) {
            if (fast == nullptr) {
                return head;
            }
            fast = fast->next;
            n--;
        }
        if (fast == nullptr) {
            return head;
        }
        else if (fast->next == nullptr) {
            ListNode* newHead = head->next;
            head->next = nullptr;
            delete head;
            return newHead;
        }
        else {
            fast = fast->next;
        }
        ListNode* slow = head;
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* toBeRemoved = slow->next;
        slow->next = toBeRemoved->next;
        toBeRemoved->next = nullptr;
        delete toBeRemoved;
        return head;
    }
};