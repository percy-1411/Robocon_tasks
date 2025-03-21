class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> bracket;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                bracket.push(s[i]);
            }
            else
            {
                if (!bracket.empty() && (bracket.top() == '(' && s[i] == ')' || bracket.top() == '{' && s[i] == '}' || bracket.top() == '[' && s[i] == ']'))
                    bracket.pop();
                else
                {
                    return false;
                }
            }
        }
        return bracket.empty();
    }
};

