#include <iostream>
#include <vector>
using namespace std;

int N=0;
long long B;
vector<vector<int>> multiplication(vector<vector<int>> v1, vector<vector<int>> v2)
{
    vector<vector<int>> result(N, vector<int>(N));
    
    for(int r=0; r<N; r++)
    {
        for(int k=0; k<N; k++)
        {
            int t = v1[r][k];
            for(int c=0; c<N; c++)
            {
                result[r][c] = (result[r][c] + t * v2[k][c]) % 1000;
            }
        }
    }
       
    return result;
}
vector<vector<int>> pow(vector<vector<int>> a, long long b)
{
    if(b==1) return a;
    vector<vector<int>> result = pow(a, b/2);
    result = multiplication(result, result);
    
    if(b%2==1) result = multiplication(result, a);
    
    return result;
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<vector<int>> A;
    
 	cin >> N >> B;
	for(int r=0; r<N; r++)
    {
        vector<int> inner;
		for(int c=0; c<N; c++)
        {
            int input;
            cin >> input;
            inner.push_back(input);
        }
        A.push_back(inner);
    }
    
    vector<vector<int>> result = pow(A, B);
    
    for(int r=0; r<N; r++)
    {
        for(int c=0; c<N; c++)
        {
            cout << result[r][c]%1000 << " ";
        }
        cout << "\n";
    }
	
    return 0;
}
