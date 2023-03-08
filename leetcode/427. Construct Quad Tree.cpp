#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};


class Solution {
public:
    Node* helper(vector<vector<int>>& grid, int x, int y, int length){
        if(length == 1){
            Node* node = new Node(grid[x][y], true);
            return node;
        }else{
            Node* topLeft = helper(grid, x, y, length / 2);
            Node* topRight = helper(grid, x , y + length / 2, length / 2);
            Node* bottomLeft = helper(grid, x + length / 2, y, length / 2);
            Node* bottomRight = helper(grid, x + length / 2, y + length / 2, length / 2);

            if(topLeft->isLeaf && topRight->isLeaf && bottomLeft->isLeaf && bottomRight->isLeaf && topLeft->val == topRight->val && topLeft->val == bottomLeft->val && topLeft->val == bottomRight->val){
                Node* node = new Node(grid[x][y], true);
                return node;
            }else{
                Node* node = new Node(false, false, topLeft, topRight, bottomLeft, bottomRight);
                return node;
            }
        }
    }

    Node* construct(vector<vector<int>>& grid) {
        return helper(grid, 0, 0, grid.size());
    }
};