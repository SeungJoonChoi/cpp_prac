#include "MyString.hpp"
#include "Utils.hpp"

int main(int argc, char *argv[])
{
    MyString a;
    std::ifstream fin;
    std::ofstream fout;
    std::string filename;
    std::string s1;
    std::string s2;

    if (argc != 4)
    {
        std::cerr << "Invalid argument" << std::endl;
        exit(1);   
    }

    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    open_infile(fin, filename);

    a.setString(infile_to_string(fin));

    fin.close();

    a.replaceAll(s1, s2);

    open_outfile(fout, filename + ".replace");
    fout << a.getString();

    fout.close();
    return 0;
}