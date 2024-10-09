#include <bits/stdc++.h>
using namespace std;

int N,M;
int t=0;
string s;
char arr[104][104];
vector<int> v;
char prevChar;
bool isCount = false;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for(int i=0; i<N; i++){
		cin >> s;
		for(int j=0; j<s.size(); j++){
			arr[i][j] = s[j];
		}
	}

	for(int i=0; i<N; i++){
		isCount = false;
		t=0;
		for(int j=0; j<M; j++){
			if(arr[i][j] == 'c') {
				v.push_back(0);
				isCount = true;
				t=0;
				prevChar = 'c';
			} else if(isCount && arr[i][j] != 'c') {
				t++;
				v.push_back(t);
			} else {
				v.push_back(-1);
			}
		}
	}

	int size = N*M;
	int b = 0;

	for(int i=0; i<size; i++){
			cout << v[i] << " ";
			b++;
			if(b==M) {
				cout << '\n';
				b = 0;
			}
		}

	return 0;
}