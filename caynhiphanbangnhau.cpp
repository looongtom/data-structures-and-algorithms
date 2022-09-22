#include<bits/stdc++.h>
using namespace std;
typedef struct node_t{
    int data;
    node_t *left;
    node_t *right;
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
    if (LeftOf(value, root)) root->left = Insert(root->left, value);
    else if (RightOf(value, root)) root->right = Insert(root->right, value);
    return root;
}

int isIdentical(node_t *root1, node_t *root2){
    if (root1 == NULL && root2 == NULL) return 1;
    else if (root1 != NULL && root2 == NULL) return 0;
    else if (root1 == NULL && root2 != NULL)  return 0;
    else{
        if (root1->data == root2->data && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right)) return 1;
        else  return 0;
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
         int n, tmp;
    char c_tmp;
    node_t *root1 = NULL, *root2 = NULL;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        root1 = Insert(root1, tmp);
        cin >> tmp;
        root1 = Insert(root1, tmp);
        cin >> c_tmp;
    }
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        root2 = Insert(root2, tmp);
        cin >> tmp;
        root2 = Insert(root2, tmp);
        cin >> c_tmp;
    }
    if (isIdentical(root1, root2)) cout << 1 << endl;
    else cout << 0 << endl;
    }
}