#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>

void open_infile(std::ifstream &fin, std::string filename);
std::string infile_to_string(std::ifstream& fin);
void open_outfile(std::ofstream &fout, std::string filename);
void replace(std::string &source, std::string &s1, std::string &s2);

#endif