class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j){
            cout << s[i] << " " << s[j] << " ";
            if(!bool(isalnum(s[i])) || !bool(isalnum(s[j]))){
                if(!bool(isalnum(s[i]))) i++;
                if(!bool(isalnum(s[j]))) j--;
                cout << "Continuing" << endl;
                continue;
            }
            if(tolower(s[i]) == tolower(s[j])){
                cout << "Equal " << endl;
                i++,j--;
            }
            else{
                cout << "MISMATCH " << endl;
                return false;
            }
        }
        return true;
    }
};
