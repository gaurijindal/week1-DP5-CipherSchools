#include <bits/stdc++.h>
using namespace std;

bool isMatching(char open, char close){
          return((open == '(' && close == ')') || ((open == '{' && close == '}') || ((open == '[' && close == ']'));
}
bool isOpen(char ch)
{
          return (ch == '(' || ch == '[');
}
bool isValid(string &str)
{
          if (str.size() == 0)
          {
                    return true;
          }
          else if (str.size() & 1)
          {
                    return false;
          }
          else
          {
                    stack<char> S;
                    for (int i = 0; i < str.size(); i++)
                    {
                              if (isOpen(str[i]))
                              {
                                        S.push(str[i]);
                              }
                              else{
                                        if(S.empty()){
                                                  return false;
                                        }
                                        if(isMatching(S.top(), str[i])){
                                                  return false;
                                        }
                                        S.pop();
                              }
                    }
                    return(S.empty());
          }
}
int main()
{
          return 0;
}