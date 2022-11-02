#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[])
{
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string str;
    std::stringstream buf;
    std::ifstream fin;
    std::ofstream fout;

    (void)argc;

    fin.open(filename);
    buf << fin.rdbuf();
    fin.close();
    str = buf.str();

    size_t pos = 0;
    while(1)
    {
        pos = str.find(s1);
        if (pos == std::string::npos)
            break;
        else
        {
            str.erase(pos, s1.length());
            str.insert(pos, s2);
        }
    }

    fout.open(filename + ".replace");
    fout << str;

    fout.close();
    return 0;
}