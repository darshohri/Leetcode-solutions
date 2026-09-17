/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL || k == 0) {
        return head;
    }
    struct ListNode* current = head;
    int length = 1;
    while (current->next != NULL) {
        current = current->next;
        length++;
    }
    k = k % length;
    if (k == 0) {
        return head;
    }
        current->next = head;
    struct ListNode* newEnd = head;
    for (int i = 1; i < length - k; i++) {
        newEnd = newEnd->next;
    }
struct ListNode* newHead = newEnd->next;
    newEnd->next = NULL;

    return newHead;
}