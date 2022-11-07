#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[])
{
    std::string filename;
    std::string s1;
    std::string s2;
    std::string str;
    std::stringstream buf;
    std::ifstream fin;
    std::ofstream fout;

    if (argc != 4)
    {
        std::cerr << "Invalid argument" << std::endl;
        exit(1);   
    }

    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    fin.open(filename);
    if (fin.fail())
    {
        std::cerr << "Can not open file" << std::endl;
        exit(1);
    }
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
    if (fout.fail())
    {
        std::cerr << "Can not open file" << std::endl;
        exit(1);
    }
    fout << str;

    fout.close();
    return 0;
}