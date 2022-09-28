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
    public ListNode removeNthFromEnd(ListNode head, int n) {
         ListNode s = new ListNode();
        s.next=head;
        ListNode sl=s;
        ListNode fs=s;
        for(int i=1;i<=n;i++){
            fs=fs.next;
        }
        while(fs.next!=null){
            fs=fs.next;
            sl=sl.next;
        }
        sl.next=sl.next.next;
        return s.next;
    }
}