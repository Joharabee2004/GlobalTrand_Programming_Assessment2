#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubsttr(string str)
{
    int n = str.size();
    int res = 0; // result

    for (int i = 0; i < n; i++) {

        // Note : Default values in visited are false
        vector<bool> visited(256);

        for (int j = i; j < n; j++) {

            // If current character is visited
            // Break the loop
            if (visited[str[j]] == true)
                break;

            // Else update the result if
            // this window is larger, and mark
            // current character as visited.
            else {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }

        // Remove the first character of previous 
        //window

        visited[str[i]] = false;
    }
    return res;
}

// Driver code
int main()
{
    string str = "GlobalTrendProgramming";

    cout << "The input string is " << str << endl;
    int len = longestUniqueSubsttr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    return 0;
}
        // Remove the first character of previous if (visited[str[j]] == true)