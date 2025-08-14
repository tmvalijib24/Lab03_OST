#include<bits/stdc++.h>
using namespace std;

void reverse_array(vector<int>& arr) {
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();

    cout << "Original array: ";
    for (auto num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    reverse_array(arr);

    cout << "The reverse array is: ";
    for (auto num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
