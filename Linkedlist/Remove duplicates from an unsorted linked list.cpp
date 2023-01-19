class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        Node* root=new Node(0);
        Node* tmp;
        tmp=root;
        unordered_set<int>st;
        while(head){
            if(st.find(head->data)==st.end()){
                tmp->next=head;
                tmp=tmp->next;
                st.insert(head->data);
            }
            head=head->next;
        }
        tmp->next=NULL;
        return root->next;
    }
};