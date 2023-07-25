#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//Sap xep chon: Selection sort
//O(N^2)
//Tu tuong:O moi buoc se dua phan tu nho nhat chua duoc sap xep ve dau day
void selectionSort(int a[] , int n){
	//Buoc i : Chon phan tu nho nhat chua duoc sap xep va hoan vi voi a[i]
	for(int i = 0; i < n - 1;i++){
		//Di tim phan tu nho nhat chua duoc sap xep
		int min_pos = i;//Ban dau coi thang i la nho nhat
		for(int j = i + 1; j < n;j++){
			if(a[min_pos] >  a[j]){
				min_pos = j;
			}
		}
		// doi cho a[i],a[min_pos]
		int tmp = a[i];a[i] = a[min_pos];a[min_pos] = tmp;
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	selectionSort(a,n);
	cout << endl;
	for(int x : a){
		cout << x << " ";
	}
	return 0;
}


