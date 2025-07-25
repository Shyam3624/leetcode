# Definition for singly-linked list.

class Solution(object):
    
    def addTwoNumbers(self, l1, l2):
        dummy = ListNode()
        current = dummy
        carry = 0

        # Traverse both lists
        while l1 or l2 or carry:
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0

            total = v1 + v2 + carry
            carry = total // 10
            digit = total % 10

            current.next = ListNode(digit)
            current = current.next

            # Move to the next node if available
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next

        return dummy.next
        
        