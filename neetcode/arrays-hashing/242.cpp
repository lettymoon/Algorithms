// 242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        
        if(s == t)
            return true;
        else
            return false;
    }

    int main(){
        string s, t;
        cin >> s;
        cin >> t;

        if(isAnagram(s, t) == true)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        return 0;
    }
};