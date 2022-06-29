#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    int arr[15000];
    cin >> N >> M;

    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);

    int l = 0, r = N-1, ans = 0;
    while(l < r) {
        if(arr[l] + arr[r] > M) r--;
        else if(arr[l] + arr[r] < M) l++;
        else {ans++; r--;};
    }

    cout << ans;

}