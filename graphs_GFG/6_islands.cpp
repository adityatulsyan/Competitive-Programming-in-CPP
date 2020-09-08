// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++)
        {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++)
            {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
} // } Driver Code Ends

/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
void dfs(vector<int> A[], vector<vector<bool>> &vec, int m, int n){
    vec[m][n] = true;

    if(m > 0 && A[m-1][n] == 1 && vec[m-1][n] == false) dfs(A, vec, m-1, n);
    if(n > 0 && A[m][n-1] == 1 && vec[m][n-1] == false) dfs(A, vec, m, n-1);
    if(m < vec.size()-1 && vec[m+1][n] == false && A[m+1][n] == 1) dfs(A, vec, m+1, n);
    if(n < vec[0].size()-1 && vec[m][n+1] == false && A[m][n+1] == 1) dfs(A, vec, m, n+1);
    if(m > 0 && n > 0 && A[m-1][n-1] == 1 && vec[m-1][n-1] == false) dfs(A, vec, m-1, n-1);
    if(m > 0 && n < vec[0].size()-1 && A[m-1][n+1] == 1 && vec[m-1][n+1] == false) dfs(A, vec, m-1, n+1);
    if(m < vec.size()-1 && n > 0 && A[m+1][n-1] == 1 && vec[m+1][n-1] == false) dfs(A, vec, m+1, n-1);
    if(m < vec.size()-1 && n < vec[0].size()-1 && A[m+1][n+1] == 1 && vec[m+1][n+1] == false) dfs(A, vec, m+1, n+1);
    return;
}

int findIslands(vector<int> A[], int N, int M)
{

    vector<vector<bool>> vec(N, vector<bool> (M, false));
    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(vec[i][j] == false && A[i][j] == 1){
                dfs(A, vec, i, j);
                count++;
            }
        }
    }
    return count;
    // Your code here
}