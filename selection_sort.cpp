#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    vector<int> vec(5, 0);
    for (int i = 0; i < 5; i++) {
        cin >> vec[i];
    }
    // Start time measurement
    auto start = high_resolution_clock::now();
    // Selection sort
    for (int i = 0; i < vec.size() - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[j] < vec[min_index]) {
                min_index = j;
            }
        }
        swap(vec[i], vec[min_index]);
    }
    // End time measurement
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    for (auto it : vec) {
        cout << it << " ";
    }
    cout << endl << "Execution time: " << duration.count() << " microseconds" << endl;
    return 0;
}
