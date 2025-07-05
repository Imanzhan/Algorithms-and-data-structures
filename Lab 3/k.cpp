#include <iostream> 
#include <vector> 
#include <climits> 
 
using namespace std; 
 
int main() { 
    int n, k; 
    cin >> n >> k; 
     
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i]; 
    } 
     
    int min_length = INT_MAX; 
    int sum = 0, start = 0; 
     
    for (int end = 0; end < n; ++end) { 
        sum += a[end]; 
         
        while (sum >= k) { 
            min_length = min(min_length, end - start + 1); 
            sum -= a[start]; 
            start++; 
        } 
    } 
     
    if (min_length == INT_MAX) {
        cout << -1 << endl; 
    } else { 
        cout << min_length << endl; 
    } 
     
    return 0; 
}