#include<bits/stdc++.h>
using namespace std;

int t, n, k, t_i, case_num = 0;

int main() 
{
    cin >> t;
    while (t--) {
        case_num++;
        cin >> n >> k;
        int max_time = 0;
        for (int i = 0; i < n; i++) {
            cin >> t_i;
            max_time = max(max_time, t_i);
        }
        cout << "Case " << case_num << ": " << max_time * k << endl;
    }

    return 0;
}