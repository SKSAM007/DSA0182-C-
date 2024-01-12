#include <iostream>
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); 
        ListNode* current = dummy;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        if (carry > 0) {
            current->next = new ListNode(carry);
        }
        return dummy->next;
    }
};
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}
int main() {
    ListNode* l1 = new ListNode(3);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(2);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);
    printList(result);
    delete l1;
    delete l2;
    while (result != nullptr) {
        ListNode* temp = result;
        result = result->next;
        delete temp;
    }
    return 0;
}
