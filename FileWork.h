#ifndef FILEWORK_H
#define FILEWORK_H
#include <string>
#include <fstream>

using namespace std;

class FileWork
{
    public:
        FileWork(string fn);
        virtual ~FileWork();
        void cutWithStr(string a);
    protected:

    private:
        string fileName;
        string line;

};

#endif // FILEWORK_H
