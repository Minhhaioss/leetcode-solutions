class Solution {
public:
    bool isValid(string s) {
        bool ret = true;
        stack<char> mystack;
        char c;
        for (int i = 0; (i < s.length()) && (ret == true); i++)
        {
            switch (s[i])
            {
            case '(':
                c = ')';
                mystack.push(c);
                break;
            case '[':
                c = ']';
                mystack.push(c);
                break;
            case '{':
                c = '}';
                mystack.push(c);
                break;
                            
            default:
                if (!mystack.empty())
                {
                    if (s[i] != mystack.top())  ret = false;
                    else mystack.pop();
                }
                else ret = false;
                
                break;
            }

        }
        if (!mystack.empty()) ret = false;

        return ret;        
    }
};