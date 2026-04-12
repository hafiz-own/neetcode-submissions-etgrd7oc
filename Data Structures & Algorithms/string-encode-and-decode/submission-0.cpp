class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";
        for(auto it : strs){
            str+=to_string(it.size()) + "#" + it;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while( i < s.size() ){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int size = stoi(s.substr(i,j-i));
            i = j+1;
            j = i+size;
            ans.push_back(s.substr(i,size));
            i = j;
        }
        return ans;
    }
};
