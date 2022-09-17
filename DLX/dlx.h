#include<ctime>
#include<iostream>
#include<climits>
#include<vector>
#include<fstream>

using namespace std;

struct Node {
    Node *up, *down, *left, *right, *colRoot, *rowRoot;
    int num;
    int size;
    Node(int i = -1):num(i),size(0) {};
};

class DLX {
public:
    DLX(vector<vector<int>> &matrix, int m, int n);
    ~DLX() {delete Head;}
    void init();
    void link(vector<vector<int>> &matrix);
    void cover(Node *cRoot);
    void recove(Node *cRoot);
    bool search(int k = 0);
    vector<int> getResult() const {return result;}
    int getUpdates() const {return _updates;}
private:
    Node *Head;
    vector<int> result;
    int _row, _col, _updates;
};


