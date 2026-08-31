# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        l1, l2 = head, head.next
        node = ListNode()
        while l2 and l2.next:
            l1 = l1.next
            l2 = l2.next.next

        second = l1.next
        prev = l1.next = None
        
        while second:
            temp = second.next
            second.next = prev 
            prev = second
            second = temp

        first, second = head, prev
        while second:
            temp1, temp2 = first.next, second.next
            first.next = second
            second.next = temp1
            first = temp1
            second = temp2
