/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode dum= new ListNode();
        ListNode prev =null, curr=head, nx=null;
        
        while(curr !=null){
            nx=curr.next;
            curr.next=prev;
            prev=curr;
            curr=nx;
        }
        head= prev;
        return head;
        
    }
}