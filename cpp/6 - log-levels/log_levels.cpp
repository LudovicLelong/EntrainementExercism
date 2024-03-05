#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        // 2 for two position letter, begin message
        int positionCroch = line.find("]") + 2;

        std::string myMessage = line.substr(positionCroch + 1);

        return  myMessage;


    }

    std::string log_level(std::string line) {
        // return the log level

        int positioncrochStart = line.find("[") + 1;
        int positioncrochEnd = line.find("]") - 1;

        std::string messageError = line.substr(positioncrochStart, positioncrochEnd);

        return messageError;

    }

    std::string reformat(std::string line) {
        // return the reformatted message
        return message(line) + " (" + log_level(line) + ")";
    }
}
