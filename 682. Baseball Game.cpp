//More efficient solution
int calPoints(vector<string>& arr) {
        int n = arr.size();
        if(n == 1)
            return stoi(arr[0]);
        
        stack<int> st;
        for(auto ops : arr){
            if(ops == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x+y);
            }
            else if(ops == "D")
                st.push(2*st.top());
            else if(ops == "C")
                st.pop();
            else
                st.push(stoi(ops));
        }
        
        int sum = 0;
        while(!st.empty()){
            int x = st.top();
            sum += x;
            st.pop();
        }
        return sum;
    }

// Less efficient solution
class Solution {
public:
    int calPoints(vector<string>& arr) {
        int n = arr.size();
        if(n == 1)
            return stoi(arr[0]);
        
        vector<int> v;
        
        for(int i = 0; i < n; ++i){
            if(arr[i] == "D")
                v.push_back((v[v.size()-1] + v[v.size()-1]));
            else if(arr[i] == "+")
                v.push_back((v[v.size()-1] + v[v.size()-2]));
            else if(arr[i] == "C")
                v.pop_back();
            else{
                int num = atoi(arr.at(i).c_str());
                v.push_back(num);
            }
        }
        
        int sum = 0;
        for(auto p : v)
            sum += p;
        return sum;
    }
};


