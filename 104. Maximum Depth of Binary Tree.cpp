/*
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along
the longest path from the root node down to the farthest leaf node.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


//recursive
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

//level order 
// class Solution
// {
// public:
//     int maxDepth(TreeNode *root)
//     {
//         int depth = 0;

//         if (root == NULL)
//             return depth;

//         queue<TreeNode *> q;
//         q.push(root);

//         while (!q.empty())
//         {
//             int size = q.size();
//             depth++;
//             for (int i = 0; i < size; i++)
//             {
//                 TreeNode *temp = q.front();
//                 q.pop();
//                 if (temp->left != NULL)
//                     q.push(temp->left);
//                 if (temp->right != NULL)
//                     q.push(temp->right);
//             }
//         }

//         return depth;
//     }
// };
