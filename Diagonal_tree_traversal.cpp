/* Structure of binary tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public: 
    void L(Node* root, vector<vector<int>>& a, int l) { 
        if (root == nullptr) return; 

        if (l >= a.size()) {
            a.push_back({});
        }

        a[l].push_back(root->data);

        L(root->left, a, l + 1); 
        L(root->right, a, l); 
    } 

    vector<int> diagonal(Node *root) {
        // code here
        vector<vector<int>> a; 

        L(root, a, 0); 

        vector<int> b; 

        for (int i = 0; i < a.size(); i++) { 
            for (int j = 0; j < a[i].size(); j++) { 
                b.push_back(a[i][j]); 
            } 
        } 

        return b;
    }
}; 