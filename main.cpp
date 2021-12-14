#include <iostream>
using namespace std;


string userString;
string out="";

/* Define your function here */ 
string RemoveNonAlpha(string userString) 
{
  for (int i=0;i<userString.size();++i) {
    if (isalpha(userString[i])) {
      out=out+userString[i];
    }
  }
  return out; 
}


int main() {
  getline(cin, userString);
  RemoveNonAlpha(userString);
  cout << out<<endl;
   /* Type your code here. Your code must call the function.  */
  return 0;
}
