#include <string>

// Print general help, invoked with "shikacracker -h/--help"
void print_help_general();

// Remove leading and trailing whitespace from a string.
// Taken from https://stackoverflow.com/a/1798170
std::string trim_wspace(const std::string &str,
                        const std::string &whitespace = " \t");

