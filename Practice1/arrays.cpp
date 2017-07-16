#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int temp = 0;
	int i = 0;
	int arr[1000];
	int size = 0;
	int midpoint = 0;
	cin >> size;
	midpoint = size / 2;
	for (i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	for (i = 0; i < midpoint; ++i)
	{
		temp = arr[size - i - 1];
		arr[size - i - 1] = arr[i];
		arr[i] = temp;
	}
	for (i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}