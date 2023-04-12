/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode *nnode=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return nnode;
    }
    
    // basically idhr 1->2->3->4->NULL pe nnode pe 4 return hoga and head k value 3 rhega pehele se to uske bad tmko 3->next->next that is (4->NULL) ko 4->3 kr derhe ho aur 3->NULL kr derhe ho.
    //     phir next call me phirse 2->3->4 ke case me 3->2 ko point krega and 2->null ko aur 4->3 pehele se hi kia hua hai pichle call se
    //         finally tmko nnode return kr dena hai jo ki suru pe hi 4 tha aur har bar 4 hi arha hai..
};
// iterative
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *prev=NULL;
//         ListNode *curr=head;
//         ListNode *next;
//         while(curr){
//             next=curr->next;
//             curr->next=prev;
            
//             prev=curr;
//             curr=next;
//         }
//         head=prev;
//         return head;
//     }
// };