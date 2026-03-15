#include <iostream>
#include <vector>
#include <algorithm>  // Added for reverse
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        long long numb = 0;  // Initialized to 0
        for (int i = 0; i < num.size(); i++) {
            numb = numb * 10 + num[i];
        }

        numb = numb + k;

        vector<int> result;
        while (numb > 0) {
            result.push_back(numb % 10);
            numb = numb / 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
int main(){
    Solution sol;
    cout<<sol.addToArrayForm({1,2,0,0}, 34)[0]<<endl;
    return 0;
}