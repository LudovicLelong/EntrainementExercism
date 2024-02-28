#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int level = line.find("INFO" || "WARNING" || "ERROR");
        int goodPositionStart = level + 2;

        std::string newLine = line.substr(goodPositionStart);

        return newLine;
    }

    std::string log_level(std::string line) {
        // return the log level
        std::string arrayLog[3] = {"INFO", "WARNING", "ERROR"};
        std::string log = "";

       for (int i = 0; i < 3; i++) {
           std::string wordLog = arrayLog[i];

            if (line.find(wordLog)) {
                log = wordLog;
            }
       }

        return log;
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        std::string log_line_result = log_line::message(line) + " (" + log_line::log_level(line) + ")";
        return log_line_result;
    }
}
