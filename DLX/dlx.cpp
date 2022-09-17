#include"dlx.h"

DLX::DLX(vector<vector<int>> &matrix, int m, int n)
    :_row(m), _col(n), _updates(0) {
    Head = new Node;
    Head->up = Head;
    Head->down = Head;
    Head->left = Head;
    Head->right = Head;
    init();
    link(matrix);
}

void DLX::init() {
    Node *newNode;
    for (int i = 0; i < _col; ++i) {
        newNode = new Node;
        newNode->up = newNode;
        newNode->down = newNode;
        newNode->right = Head->right;
        newNode->left = Head;
        
    }
}



