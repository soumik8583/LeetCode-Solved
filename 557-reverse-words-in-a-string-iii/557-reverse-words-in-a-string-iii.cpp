class Solution {
public:
/*    string reverseWords(string s) {
        stack<char> st;
        string ss="";
        for(int i=1;i<s.size();i++){
         if(s[i]!=' '){
             st.push(s[i]);
         }
            else{
                while(st.empty() == false){
                    ss+=st.top()+' ';
                    //cout<<st.top();
                    st.pop();
                }
            }
        }
        return ss;
        
    }
};*/

void r( string &s,int start,int end)
{
while(start<end)
{
swap(s[start],s[end]);
start++,end--;
}
}
string reverseWords(string s) {
int j=0,n=s.size()-1;
for(int i=0;i<n+1;i++)
{
if(s[i+1]==' '|| i==n)
{
r(s,j,i);
    j=i+2;
}
}

   return s; 
}};


 