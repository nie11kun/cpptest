#ifndef STRWORK_H
#define STRWORK_H
#include <string>

using namespace std;

class StrWork
{
    public:
        StrWork(string a);
        virtual ~StrWork();
        string cutStrWithStr(string b);
        string replaceStr(string a, string b);
    protected:

    private:
        string strIn;
};

#endif // STRWORK_H
