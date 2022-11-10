//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
string remove(string s){
    int i=0;
         int n=s.size();
        string req="";
        while(i<n){
            if(i<n-1 && s[i]==s[i+1]){
                while(i<n-1 && s[i]==s[i+1]){
                    i++;;
                }
            }
            else {
                req+=s[i];
            }
            
                i++;
            
        }
      /*  if(req==""){
            req+=s[0];
        }*/
        return req;;
}
    string rremove(string s){
        // code here
         string ss="";
        while(s.size()!=ss.size()){
            ss=s;
            s=remove(s);
        }
        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends