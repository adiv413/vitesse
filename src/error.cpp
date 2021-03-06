#include "error.hpp"

void Error::print() {
    std::cerr << error_type << " (line " << line << ", column " << col << " in file " << filename << "): " << error_desc << "\n";

    if(error_line[error_line.length() - 1] == '\n') std::cerr << "\t" << error_line;
    else std::cerr << "\t" << error_line << '\n';
    
    std::cerr << "\t" << std::string(col, ' ') << "^" << "\n\n";
}
