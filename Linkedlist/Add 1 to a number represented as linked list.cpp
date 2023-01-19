
class Solution
{
    public:
    int sol(Node *head){
        if(!head){
            return 1;
        }
        int r=sol(head->next);
         head->data+=r;
         int ty=head->data/10;
         head->data=(head->data)%10;
         return (ty);
    }
    Node* addOne(Node *head) {
        int x=sol(head);
        if(x==1){
            Node* root=new Node(1);
            root->next=head;
            return root;
        }
        return head;
    }
};