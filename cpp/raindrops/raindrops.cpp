#include <string>
#include "raindrops.h"

namespace raindrops {

    std::string convert (int number) {
        std::string resultString = "";

        //trouver si un nombre est plus divisible

        if (number % 3 == 0) {
            resultString += "Pling";
        }
        if (number % 5 == 0) {
            resultString += "Plang";
        }
        if (number % 7 == 0) {
            resultString += "Plong";
        }
        if (resultString.empty()) {
            resultString = std::to_string(number);
        }

        return resultString;
    }
}  // namespace raindrops
