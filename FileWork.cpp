#include "FileWork.h"
#include <fstream>
#include <string>
#include "StrWork.h"

using namespace std;


FileWork::FileWork(string fn)
:fileName(fn)
{
    //ctor
}

FileWork::~FileWork()
{
    //dtor
}
void FileWork::cutWithStr(string a)
{
    ifstream file(fileName.c_str());
    string strLine;
    while(getline(file, strLine))
    {
        StrWork strMode(strLine);
        string newline = strMode.cutStrWithStr(a);


    }

}
