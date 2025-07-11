class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
  
 for (auto &ch : s)
 {
     if (ch == '(' || ch == '[' || ch == '{')
     {
         stack.push(ch);
     }
     else if (!stack.empty())
     {
         if ((ch == ')' && stack.top() == '(') || (ch == ']' && stack.top() == '[') || (ch == '}' && stack.top() == '{'))
         {
             stack.pop();
         }
         else {
             return false;
         }
     }
     else {
         return false;
     }
 }
 return stack.empty() ? true:false;

    }
};