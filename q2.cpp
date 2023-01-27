#include <bits/stdc++.h>
using namespace std;

vector<string> dialpad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void letterCombinations(string & input, string &strSoFar, vector<string> &result, int start, int end)
{

          if (start > end)
          {
                    result.push_back(strSoFar);
                    return;
          }
          else
          {
                    char digitPressed = input[start];
                    string possibleMoves = dialpad[digitPressed - '0'];

                    for (int i = 0; i < possibleMoves.size(); i++)
                    {

                              strSoFar.push_back(possibleMoves[i]);
                              letterCombinations(input, strSoFar, result, start + 1, end);
                              strSoFar.pop_back();
                    }
          }
}
vector<string> generateParenthesis(const int n)
{
          vector<string> result;
          int open = n, close = n;
          string strSoFar = "";
          generateParenthesis(strSoFar, result, open, close);
          return result;
}

int main()
{
          return 0;
}