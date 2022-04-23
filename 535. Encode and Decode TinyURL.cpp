class Solution {
public:
    unordered_map<string, string> urlmp;
    //long long mod = 56333525342; // No need of doing this as of now....
    string characters = "abcdefghijklmnopqrsstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXWZ0123456789";
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        long long randNum = rand();
        string tinyurl = converter(randNum);
        while(urlmp.find(tinyurl) != urlmp.end()){
            randNum = rand();
            string tinyurl = converter(randNum);
        }
        urlmp[tinyurl] = longUrl;
        return tinyurl;
    }
    
    string converter(long long num){
        string ans = "";
        while(num){
            int val = num % 62;
            ans = ans + characters[val];
            num /= 62;
        }
        return ans;
    }
    
    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return urlmp[shortUrl];
    }
};
