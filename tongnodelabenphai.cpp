#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
using namespace std;
struct Node {
	int data;
	Node *left = nullptr;
    Node *right = nullptr;
	Node(){}
	Node(int data) {
		this->data = data;
		this->left = nullptr;
        this->right = nullptr;
	}
};	

int sumRightLeft(Node* root) {
        if(root == nullptr) return 0;
        int sum = 0;
        Node* p = root->right;
        if(p != nullptr && p->left == nullptr && p->right == nullptr) {
            sum += p->data;
        }
    return sum + sumRightLeft(root->left) + sumRightLeft(root->right);
}
int main(){
    int T;
	cin >> T;
	while( T-- ){
         int n;
    cin >> n;
    Node *root = nullptr;
    map<int,Node*> tree;
    FOR(i,0,n-1) {
        int u,v; char x;
        cin >> u >> v >> x;
        if(tree.find(u) == tree.end()) {
            Node *temp = new Node(u);
            tree[u] = temp;
            if(root == nullptr) root = temp;
        }
        Node *t = tree[u];
        Node *p = new Node(v);
        if(x=='L') t->left = p;
        else t->right = p;
        tree[v] = p;
    }
    cout << sumRightLeft(root) << endl;
    }
}