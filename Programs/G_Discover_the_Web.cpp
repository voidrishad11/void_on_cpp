#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) 
    {
        stack<string> back ;
        stack<string> forw;
        string current = "http://www.lightoj.com/";
        vector<string> commands;

        string command;
        cout << "Case " << t << ":\n";
        while (cin >> command && command != "QUIT") 
        {
            if (command == "VISIT") {
                string url;
                cin >> url;

                back.push(current);
                current = url;
                while (!forw.empty()) forw.pop();
            } 
            else if (command == "BACK") 
            {
                if (!back.empty()) 
                {
                    forw.push(current);
                    current = back.top();
                    back.pop();
                } 
                else 
                {
                    cout << "Ignored\n";
                    continue;
                }
            } 
            else if (command == "forw") 
            {
                if (!forw.empty()) 
                {
                    back.push(current);
                    current = forw.top();
                    forw.pop();
                } 
                else 
                {
                    cout << "Ignored\n";
                    continue;
                }
            }
            cout << current << "\n";
        }     
    }
    return 0;
}
