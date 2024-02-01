#include <iostream>
using namespace std;

template <typename T>
T VBC(T* &arr) {
	T size = _msize(arr) / sizeof(arr[0]);
	return BSch(arr, tg, 0, size-1)
}
template <typename T>
T BSch(T* arr,T left, T right) {
	if (left > right) return -1;
	int mid = left + (right - left) / 2;
	if (arr[mid] == tg) {
		return mid;
	}
	else if (arr[mid] > tg) {
		return BSch(arr, tg, left, mid - 1);
	}
	else {
		return BSch(arr, tg, mid + 1, right);
	} 
}

int main()
{
	int* arr = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int tg = 9;
	VBC(arr);
}



