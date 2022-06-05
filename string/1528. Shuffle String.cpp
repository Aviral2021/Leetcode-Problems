class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int len_s = s.size();
        string s_final(s.size(), 'a');

        for (int i = 0; i < len_s; i++) {
            s_final[indices[i]] = s[i];



        }

        return s_final;

    }
};