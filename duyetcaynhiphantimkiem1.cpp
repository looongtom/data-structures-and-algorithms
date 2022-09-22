#include<bits/stdc++.h>
using namespace std;
typedef struct Node
{
    int data;
    Node *left;
    Node *right;
} node_t;

int LeftOf(const int value, const node_t *root){
    return value < root->data;
}

int RightOf(const int value, const node_t *root){
    return value > root->data;
}

node_t *Insert(node_t *root, const int value){
    if (root == NULL){
        node_t *node = (node_t *)malloc(sizeof(node_t));
        node->left = NULL;
        node->right = NULL;
        node->data = value;
        return node;
    }
    if (LeftOf(value, root))
        root->left = Insert(root->left, value);
    else if (RightOf(value, root))
        root->right = Insert(root->right, value);
    return root;
}

void PostOrder(node_t *root){
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }
}

void Run()
{
    int n, tmp;
    node_t *root = NULL;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        root = Insert(root, tmp);
    }
    PostOrder(root);

    cout << endl;
}

int main(){
    int t = 1;
    cin >> t;
    while (t--)
        Run();
}