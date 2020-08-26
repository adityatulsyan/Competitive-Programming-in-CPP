//Interviewbit question link: https://www.interviewbit.com/problems/xor-between-two-arrays/
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct trienode{
    trienode *left = NULL, *right = NULL;
};

void insert(trienode* node, int val){
    for(int i = 31; i >= 0; i++){
        int k = (val>>i)&1;
        if(k == 0){
            if(node->left == NULL) node->left = new trienode();
            node = node->left; 
        }

        else{
            if(node->right == NULL) node->right = new trienode();
            node = node->right;
        }
    }
}

int find(trienode *node, vector<int> &arr){
    int ans = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        int temp = 0;
        for(int j = 31; j >= 0; j--){
            int k = (arr[i]>>j)&1;
            if(k == 0){
                if(node->right) temp += pow(2,j);
                else  node = node->left;
            }

            else{
                if(node->left) temp += pow(2, j);
                else node = node->right;
            }
        }
        ans = max(temp, ans);
    }
    return ans;
}    
int main(){
    vector<int> a{1, 2, 3};
    vector<int> b{4, 1, 2};
    
    trienode* node = new trienode();
    for(int j = 0; j < a.size(); j++) insert(node, a[j]);

    cout << "ans: " << find(node, b) << endl;
    return 0;
}