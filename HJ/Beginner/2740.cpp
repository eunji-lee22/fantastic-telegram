#include <iostream>
using namespace std;
#define MAX_COUNT 100+1

int map[MAX_COUNT][MAX_COUNT] = {0};
void output(int n, int k)
{
	for(int r=0; r<n; r++)
	{
		for(int c=0; c<k; c++)
		{
			cout << map[r][c] << " ";
		}
		cout << "\n";
	}
}
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	int N, M, K;
	int A[MAX_COUNT][MAX_COUNT]={0}, B[MAX_COUNT][MAX_COUNT]={0};
 	cin >> N >> M;
	for(int r=0; r<N; r++)
		for(int c=0; c<M; c++)
			cin >> A[r][c];
	
	cin >> M >> K;
	for(int r=0; r<M; r++)
		for(int c=0; c<K; c++)
			cin >> B[r][c];

	for(int r=0; r<N; r++)
	{
		for(int c=0; c<K; c++)
		{
			for(int m=0; m<M; m++)
				map[r][c] += A[r][m] * B[m][c];
		}
	}

	output(N, K);

    return 0;
}