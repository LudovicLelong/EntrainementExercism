//
// Created by Ludovic Lelong on 26/02/2024.
//

#ifndef EXERCISM_CONDITIONFUNCTION_H
#define EXERCISM_CONDITIONFUNCTION_H


class ConditionFunction {
public :
    bool functionCalaculateCondition(bool variable1, bool variable2) {
        if (variable1 > variable2) {
            return true;
        } else {
            return false;
        }
    }
};


#endif //EXERCISM_CONDITIONFUNCTION_H
