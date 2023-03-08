# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        a = head
        while a:
            if a.next and a.next.val == a.val:
                a.next = a.next.next
            else:
                a = a.next
        return head
            