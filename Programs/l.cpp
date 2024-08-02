#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> getSubarrays(const string& s) 
{
    int n = s.size();
    vector<string> subarrays;
    char u = s[0];
    string v ;
    v += u;
    u = s[n-1];
    v += u;
    subarrays.push_back(v);
    // Iterate over each starting index
    for (int i = 0; i < 1; i++) 
    {
        // Iterate over each ending index
        for (int j = i; j < n; j++) 
        {
            string subarray = "";
            // Construct the subarray from index i to j
            for (int k = i; k <= j; k++) {
                subarray += s[k];
            }
            subarrays.push_back(subarray);
        }
    }

    return subarrays;
}

int main() 
{
    string s = "27021";
    cout << "Original string: " << s << endl;
    vector<string> subarrays = getSubarrays(s);

    // Print the subarrays
    cout << "Subarrays:" << endl;
    for (const string& subarray : subarrays) {
        cout << subarray << endl;
    }

    return 0;
}
