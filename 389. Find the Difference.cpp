
//Solution 1
class Solution {
public:
    char findTheDifference(string s, string t) {
        int n1 = s.size();
        int n2 = n1 + 1;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
    
        for(int i = 0; i < n1; ++i){
            if(s[i] != t[i])
                return t[i];
        }
        return t[n1];
    }
};

//Solution 2 
class Solution {
public:
    char findTheDifference(string s, string t) 
    {
      for(int i = 0; i < s.size(); i++)
		t[i+1] = t[i+1] + t[i]-s[i]; //Passing the diff: (t[i]-s[i]) to t[i+1]
      return t[t.size() - 1]; //The diff will be carried over to the last element eventually
    }
};
