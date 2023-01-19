class Solution
{
    public:
    Node *compute(Node *head){
     stack<Node*>stk;
     while(head){
         while(!stk.empty()&&(stk.top()->data)<(head->data)){
             stk.pop();
         }
         stk.push(head);
         head=head->next;
     }
     Node *root=new Node(0);
     Node* tmp;
     tmp=root;
     stack<Node*>ans;
     while(!stk.empty()){
         ans.push(stk.top());
         stk.pop();
     }
     
     while(!ans.empty()){
         tmp->next=ans.top();
         ans.pop();
         tmp=tmp->next;
     }
     
     return root->next;
    }
};