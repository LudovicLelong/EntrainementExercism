#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int level = line.find("INFO" || "WARNING" || "ERROR");

    }

    std::string log_level(std::string line) {
        // return the log level
    }

    std::string reformat(std::string line) {
        // return the reformatted message
    }
}
