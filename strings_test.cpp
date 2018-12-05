#include <iostream>
#include <string>
#include <fstream>
#include <boost/regex.hpp>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{   
    string separator="-----------\n";
    string fileName = "test.txt";
    string buffor, temp;
    fstream file;
    int lineCount = 0;
    cout << "Nazwa:" << fileName << endl;
    //cin>>fileName;

    file.open(fileName);
    if (file.is_open())
    {
        file.seekg(0, file.end);
        double length = static_cast<double>(file.tellg());
        file.seekg(0, file.beg);
        //printf("FILE SIZE: %.0f Bajtow\n", length);
        //printf("FILE SIZE: %f MB\n", length/(1024*1024));
        buffor.reserve(static_cast<int>(ceil(length)));
        while (getline(file, temp))
        {
            lineCount++;
            buffor += (temp + '\n');
        }
        file.close();
    }
    else
    {
        perror("blad odzczytu");
        exit(-1);
    }
    cout<<buffor<<endl;
    cout<<separator;
    boost::regex exp{"[\\s\\n]"};
    std::string fm{" "};
    buffor = boost::regex_replace(buffor, exp, fm);
    std::cout << buffor << endl;
     cout<<separator;
    boost::regex expr{"([ ]{1,})"};
    std::string fmt{"_"};
    buffor = boost::regex_replace(buffor, expr, fmt);
    cout << buffor << endl;

    return 0;
}
