#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <fstream>
#include <sstream>

// std::ifstream open_infile(char *argv[]);
void open_infile(std::ifstream &fin, std::string filename);

std::string infile_to_string(std::ifstream& fin);

// std::ofstream open_outfile(std::string filename);
void open_outfile(std::ofstream &fout, std::string filename);

#endif