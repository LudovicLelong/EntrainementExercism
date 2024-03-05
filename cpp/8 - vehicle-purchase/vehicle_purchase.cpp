#include "vehicle_purchase.h"

namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        // TODO: Return true if you need a license for that kind of vehicle.
        if (kind == "truck" || kind == "car") {
            return true;
        } else {
            return false;
        }
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        // TODO: Return the final decision in a sentence.
        std::string plusEndSentence = " is clearly the better choice.";
        for (std::string::size_type size = 0; size < option1.length(); size++) {
            if (option1[size] > option2[size]) {
                return option2 + plusEndSentence;
            } else if (option1[size] < option2[size]) {
                return option1 + plusEndSentence;
            }
        }
        return "error";
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        // TODO: Return the age-corrected resell price.
        if (age < 3) {
            int result =  original_price * 0.8;
            return result;
        } else if (age >= 3 && age < 10) {
            int result  =  original_price * 0.7;
            return  result;
        } else if (age >= 10) {
            int result = original_price * 0.5;
            return result;
        } else {
            return 000.0;
        }

    }

}  // namespace vehicle_purchase
