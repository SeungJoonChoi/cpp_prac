#include "Utils.hpp"

void open_infile(std::ifstream &fin, std::string filename)
{
    fin.open(filename);
    if (fin.fail())
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

void open_outfile(std::ofstream& fout, std::string filename)
{
    fout.open(filename);
    if (fout.fail())
    {
        std::cerr << "Can not open file" << std::endl;
        exit(1);
    }
}