#include <iostream>                            
#include <stack>
#include <queue>

using namespace std;

class Solution {

   stack <char> stk:
   queue <char> que;
   public;

   char c;

   void pushCharacter(char ch) {
       stk.push(ch);
   }
   {
       c = stk.top();
       stk.pop();
       return c:
   }
   void enqueueCharacter(char ch) {
       que.push(ch);
   }
   char dequeueCharacter() {
       c = que.front();
       que.pop();
       return c;
   }

};
    
int main() {
    string s;
    getline(cin, s);

    Solution obj;

    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;

    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }

    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
