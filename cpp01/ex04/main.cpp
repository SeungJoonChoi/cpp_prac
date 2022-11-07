#include "replace.hpp"

int main(int argc, char *argv[])
{
    std::ifstream fin;
    std::ofstream fout;
    std::string filename;
    std::string s1;
    std::string s2;
    std::string string;

    if (argc != 4)
    {
        std::cerr << "Invalid argument" << std::endl;
        exit(1);   
    }

    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    open_infile(fin, filename);

    string = infile_to_string(fin);

    fin.close();

    replace(string, s1, s2);

    open_outfile(fout, filename + ".replace");
    fout << string;

    fout.close();
    return 0;
}