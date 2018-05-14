#include "StrWork.h"
#include <string>

using namespace std;


StrWork::StrWork(string a)
:strIn(a)
{
    //ctor
}

StrWork::~StrWork()
{
    //dtor
}
string StrWork::cutStrWithStr(string b)
{
    int i = strIn.find(b, 0);
    if (i == string::npos) {
        return strIn;
    }
    string newStr = strIn.substr(0, i + 1);
    return newStr;
}
string StrWork::replaceStr(string a, string b)
{
    string::size_type pos = 0;
    string::size_type srclen = a.size();
    string::size_type dislen = b.size();
    while(pos = strIn.find(a, pos) != string::npos)
    {
        strIn.replace(pos, srclen, b);
        pos += dislen;
    }

}
