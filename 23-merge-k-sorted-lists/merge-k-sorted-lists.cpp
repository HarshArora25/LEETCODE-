class Solution {
public:
    class compare {
    public:
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; // min-heap
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> p;

      // agr list NULL h to wo push ni krna h heap m
        for (auto node : lists) {
            if (node != nullptr) p.push(node);
        }

        ListNode* head = new ListNode(0); // dummy node
        ListNode* tail = head;

        while (!p.empty()) {
            ListNode* temp = p.top();
            p.pop();

            tail->next = temp;
            tail = tail->next;

            if (temp->next)
                p.push(temp->next);
        }

        return head->next;
    }
};
