/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<int> ans;   
    map<TreeNode*, TreeNode*> parent;  // son=>parent  
    set<TreeNode*> visit;    //record visied node
    
    void findParent(TreeNode* node){
        if(!node ) return;
        if( node->left ){
            parent[node->left] = node;
            findParent(node->left);
        }
        if( node->right){
            parent[node->right] = node;
            findParent(node->right);
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        if( !root ) return {};
        
        findParent(root);
        dfs(target, K );
        return ans;
    }
    void dfs( TreeNode* node, int K){
        if( visit.find(node) != visit.end() )
            return;
        visit.insert(node);
        if( K == 0 ){
            ans.push_back(node->val);
            return;
        }
        if( node->left ){
            dfs(node->left, K-1);
        }
        if( node->right){
            dfs(node->right, K-1);
        }
        TreeNode* p = parent[node];
        if( p )
            dfs(p, K-1);
    }
};



// class Solution {
// public:
    
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
//     {
//         map<TreeNode*, TreeNode*> myMap;
//         queue<TreeNode*> traversal;
//         set<TreeNode*> visited;
//         vector<int> ans;
        
//         traversal.push(root);
        
//         while(!traversal.empty())
//         {
//             TreeNode* temp = traversal.front();
//             traversal.pop();
            
//             if(temp->left != NULL)
//             {
//                 traversal.push(temp->left);
//                 myMap[temp->left] = temp;
//             }
//             if(temp->right != NULL)
//             {
//                 traversal.push(temp->right);
//                 myMap[temp->right] = temp;
//             }
//         }
        
//         traversal.push(target);
//         visited.insert(target);
        
//         for(int i = 0; i < k; i++)
//         {
//             TreeNode* temp = traversal.front();
//             traversal.pop();
            
//             if(temp != root)
//             {
//                 if (visited.find(myMap[temp]) == visited.end()) 
//                 {
//                     cout << "Inserting:" << myMap[temp]->val << " ";
//                     traversal.push(myMap[temp]);
//                     visited.insert(myMap[temp]);
//                 }
//             }
//             if (visited.find(temp->left) == visited.end()) 
//             {
//                 cout << "Inserting:" << temp->left->val << " ";
//                 traversal.push(temp->left);
//                 visited.insert(temp->left);
//             }
            
//             if (visited.find(temp->right) == visited.end()) 
//             {
//                 cout << "Inserting:" << temp->right->val << " ";
//                 traversal.push(temp->right);
//                 visited.insert(temp->right);
//             }
//             cout << traversal.front()->val;
//         }
        
//         // while(!traversal.empty()) 
//         // {
//         //     cout << traversal.front()->val << endl;
//         //     traversal.pop();
//         // }
        
//         return ans;
        

//     }
// };