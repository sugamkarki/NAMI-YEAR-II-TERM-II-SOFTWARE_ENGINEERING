// string::substring operation and string-to-int conversion
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

bool StringToInt(const string &s, int &i)
{
  istringstream myStream(s);
  
  if (myStream>>i)
    return true;
  else
    return false;
}

int main ()
{
   int result;

   string str="A bc def 123456 hijk mnp";
                                         
   string str2 = str.substr (9,3);   // position + offset

  unsigned pos = str.find("23");        

  string str3 = str.substr(pos);    
  //cout << str << '\n';
  cout << str2 << '\n';
  // cout << str3 << '\n';

  if (StringToInt(str2, result))
  {
    cout << "The string value is " << str2
         << " and the int value is " << result << endl;
  }
  else
  {
    cout << "Number conversion failed" <<endl;
  }

  system("PAUSE");

  return 0;
}

