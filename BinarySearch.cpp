#include <iostream>
using namespace std;

int findHelper(const int* const list, int from, int to, int value) {
	if (from > to) {
		return -1;
	} else  {
		int mid = from + (to - from) / 2;
		if (list[mid] == value) {
			return mid;
		} else if(list[mid] > value) {
			return findHelper(list , from, mid - 1, value);
		} else {
			return findHelper(list, mid + 1, to, value);
		}
	}
}

int find(int* list, int size, int value) {
	return findHelper(list, 0, size - 1, value);
}

//网上代码
int binary_search(const int arr[],int low,int high,int key) {
	int mid=low+(high-low)/2;
	if(low>high)
		return-1;
	else {
		if(arr[mid]==key)
			return mid;
		else if(arr[mid]>key)
			return binary_search(arr,low,mid-1,key);
		else
			return binary_search(arr,mid+1,high,key);
	}
}


void main() {
	int a[] = {1,2,3,4,5, 234, 1234, 1235, 9999};
	int pos = find(a, sizeof(a) / sizeof(int), 5);
	cout << pos << endl;
}
