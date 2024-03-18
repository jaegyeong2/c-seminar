#include <iostream>
using namespace std;
int sum(int n,int m){
	cout << n + m << endl;
	return 0;
}
int main(){
	/*1¹ø
	cout << "HELLO WORLD";

	return 0;

	2¹ø
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;*/
	int n, m;
	cin >> n >> m;
	sum(n,m);
	cout << n + m << endl << n - m << endl << n * m << endl << n / m << endl;

	return 0;
}