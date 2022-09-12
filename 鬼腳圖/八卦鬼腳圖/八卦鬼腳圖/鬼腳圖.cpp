#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;


bool v[8][8] = { false };
bool u[8][8] = { false };
bool t[8][8] = { false };
bool s[8][8] = { false };
bool r[8][8] = { false };

void ans(int x)
{
	int n = x;
	x = x - 1;
	char a[8] = { 'A','B','C','D','E','F','G','H' };
	for (int p = 0; p < 8; p++)
	{
		if (v[x][p]) {
			x = p;
			break;
		}
	}
	for (int p = 0; p < 8; p++)
	{
		if (u[x][p]) {
			x = p;
			break;
		}
	}
	for (int p = 0; p < 8; p++)
	{
		if (t[x][p]) {
			x = p;
			break;
		}
	}
	for (int p = 0; p < 8; p++)
	{
		if (s[x][p]) {
			x = p;
			break;
		}
	}
	for (int p = 0; p < 8; p++)
	{
		if (r[x][p]) {
			x = p;
			break;
		}
	}
	cout <<"No. "<< n <<" 參賽者之抽籤碼為 [" << a[x] << "]" << endl;
}

int main(void) {
	int i,j;
	char x;
	cout << endl << " 請輸入i,j,x : " << endl;
	while (cin >> i >> j >> x)
	{
		if (abs(i - j) == 1 || abs(i - j) == 7) {
			switch (x)
			{
			case 'v':
				v[i - 1][j - 1] = true;
				v[j - 1][i - 1] = true;
				break;
			case 'u':
				u[i - 1][j - 1] = true;
				u[j - 1][i - 1] = true;
				break;
			case 't':
				t[i - 1][j - 1] = true;
				t[j - 1][i - 1] = true;
				break;
			case 's':
				s[i - 1][j - 1] = true;
				s[j - 1][i - 1] = true;
				break;
			case 'r':
				r[i - 1][j - 1] = true;
				r[j - 1][i - 1] = true;
				break;
			default:
				cout << "資料輸入錯誤!" << endl;
				break;
			}
			cout << " 請輸入i,j,x : (如無資料請輸入N/n)" << endl;
		}
		else cout << "資料輸入錯誤!"<<endl;
	}

	/*for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++)
		{
			cout << u[i][j] << " ";
		}
		cout << endl;
	}*/
	for (int t=1;t<9;t++)
	ans(t);

	system("pause"); return(0);
}
