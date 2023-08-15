/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void sol(Node* node,unordered_set<Node*>&visit,map<Node*,Node*>&mp){
        if(visit.find(node)!=visit.end()){
            return;
        }
        if(!node){
            return;
        }
        // cout<<".";
        int x=node->val;
        // cout<<"X : "<<x<<endl;
        Node* nw=new Node(x);
        mp[node]=nw;
        visit.insert(node);
        for(int i=0;i<node->neighbors.size();i++){
            sol(node->neighbors[i],visit,mp);
        }
    }
    Node* cloneGraph(Node* node) {
        unordered_set<Node*>visit;
        map<Node*,Node*>mp;
        sol(node,visit,mp);
        for(auto it:mp){
            // cout<<it.first->val<<" "<<it.second->val<<endl;
            for(int i=0;i<it.first->neighbors.size();i++){
                it.second->neighbors.push_back(mp[it.first->neighbors[i]]);
            }
        }
        return mp[node];
    }
};