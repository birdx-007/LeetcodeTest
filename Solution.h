#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        buildHeap(nums, n);
        for (int cnt = 0; cnt < k - 1; cnt++) {
            removeHeapTop(nums, n);
        }
        return nums[0];
    }
    void buildHeap(vector<int>& nums, int heapSize) {
        int lastNonLeaveIndex = heapSize / 2 - 1;
        for (int nonLeaveIndex = lastNonLeaveIndex; nonLeaveIndex >= 0; nonLeaveIndex--) {
            maxHeapify(nums, nonLeaveIndex, heapSize);
        }
    }
    void removeHeapTop(vector<int>& nums, int& heapSize) {
        int heapTopIndex = 0, heapBottomIndex = heapSize - 1;
        swap(nums[heapTopIndex], nums[heapBottomIndex]);
        heapSize--;
        maxHeapify(nums, heapTopIndex, heapSize);
    }
    void maxHeapify(vector<int>& nums, int nonLeaveIndex, int heapSize) {
        int leftIndex = nonLeaveIndex * 2 + 1, rightIndex = nonLeaveIndex * 2 + 2;
        int largestIndex = nonLeaveIndex;
        if (leftIndex<heapSize && nums[leftIndex]>nums[largestIndex]) {
            largestIndex = leftIndex;
        }
        if (rightIndex<heapSize && nums[rightIndex]>nums[largestIndex]) {
            largestIndex = rightIndex;
        }
        if (largestIndex != nonLeaveIndex) {
            swap(nums[largestIndex], nums[nonLeaveIndex]);
            maxHeapify(nums, largestIndex, heapSize);
        }
    }
};