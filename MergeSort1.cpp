#include <bits/stdc++.h>
using namespace std;

void mergeSortedArrays(vector<int> &a, int m, vector<int> &b, int n) {
          int i = m - 1, j = n - 1, k = m + n - 1;
          while(i >= 0 && j >= 0){
                    if(a[i] > b[j]){
                              a[k] = a[i];
                              i--;
                    }
                    else{
                              a[k] = b[j];
                              j--;
                    }
                    k--;
          }
          while(j >= 0){
                    a[k] = b[j];
                    j--;
                    k--;
          }
}
int main(){
          int n;
	vector<int> v;
          int m;
	vector<int> t;

	cout << "Enter Size of Vector : ";
	cin >> n;
	v = vector<int>(n);
	cout << "Enter Elements of Vector : ";
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	mergeSortedArrays(v, n, t, m);

	cout << "Vector Obtained After Sorting: " << endl;
	for (int i = 0; i < n; ++i) {
		cout << v[i] << ' ';
	}
          return 0;
}