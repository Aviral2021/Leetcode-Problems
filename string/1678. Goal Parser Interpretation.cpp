class Solution {
public:
    string interpret(string command) {
        string s;
        int len = command.size();
        for (int i = 0; i < len; i++) {
            if (command[i] == 'G') {
                s.push_back('G');
            }
            else if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    s.push_back('o');
                }
                else {
                    s.push_back('a');
                    s.push_back('l');
                }
            }

        }
        return s;

    }
};