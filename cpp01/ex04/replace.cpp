#include "replace.hpp"

void open_infile(std::ifstream &fin, std::string filename)
{
    fin.open(filename);
    if (fin.fail())
    {
        std::cerr << "Can not open file" << std::endl;
        exit(1);
    }
}

void open_outfile(std::ofstream& fout, std::string filename)
{
    fout.open(filename);
    if (fout.fail())
    {
        std::cerr << "Can not open file" << std::endl;
        exit(1);
    }
}

std::string infile_to_string(std::ifstream& fin)
{
    std::string str;
    std::stringstream buf;
    buf << fin.rdbuf();
    str = buf.str();

    return str;
}

void replace(std::string &source, std::string &s1, std::string &s2)
{
    size_t pos = 0;

    while(1)
    {
        pos = source.find(s1);
        if(pos == std::string::npos)
            break;
        else
        {
            source.erase(pos, s1.length());
            source.insert(pos, s2);
        }
    }
}