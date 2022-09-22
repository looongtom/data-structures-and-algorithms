#include <bits/stdc++.h>
using namespace std;
#define N 8
int X1,X2,Y1,Y2;
struct cell {
	int x, y;
	int dis;
	cell() {}
	cell(int x, int y, int dis) : x(x), y(y), dis(dis){
	}
};
int check(int x, int y){
	if (x >= 1 && x <= N && y >= 1 && y <= N) return 1;
	return 0;
}
void reset(bool v[][N+1]){
for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++) v[i][j] = false;
}
int findMin(){
	int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
	int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
	queue<cell> q;
	q.push(cell(X1, Y1, 0));
	cell t;
	int x, y;
	bool chuaxet[N + 1][N + 1];
	reset(chuaxet);
	chuaxet[X1][Y1] = true;
	while (!q.empty()) {
		t = q.front();
		q.pop();
		if (t.x == X2 && t.y == Y2) return t.dis;
		for (int i = 0; i < 8; i++) {
			x = t.x + dx[i];
			y = t.y + dy[i];
			if (check(x, y) && !chuaxet[x][y]) {
				chuaxet[x][y] = true;
				q.push(cell(x, y, t.dis + 1));
			}
		}
	}
    return 0;
}
void Convert(string a,string b){
    Y1=int(a[1]-48);
    Y2=int(b[1]-48);
    X1=int(a[0]-'0'-48);
    X2=int(b[0]-'0'-48);
}
int main(){
    int t;
    cin>>t;
    while(t--){
    string a,b;
    cin>>a>>b;
    Convert(a,b);
	cout << findMin()<<endl;
    }
}
