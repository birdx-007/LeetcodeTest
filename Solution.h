#pragma once
#include "ListNode.h"
#include "TreeNode.h"
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <utility>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        // ��ת�����ַ���
        reverse(s.begin(), s.end());

        int n = s.size();
        int idx = 0;
        for (int start = 0; start < n; ++start) {
            if (s[start] != ' ') {
                // ��һ���հ��ַ�Ȼ��idx�ƶ�����һ�����ʵĿ�ͷλ��
                if (idx != 0) s[idx++] = ' ';

                // ѭ�����������ʵ�ĩβ
                int end = start;
                while (end < n && s[end] != ' ') s[idx++] = s[end++];

                // ��ת��������
                reverse(s.begin() + idx - (end - start), s.begin() + idx);

                // ����start��ȥ����һ������
                start = end;
            }
        }
        s.erase(s.begin() + idx, s.end());
        return s;
    }
};