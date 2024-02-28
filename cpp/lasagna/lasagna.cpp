// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // TODO: Return the correct time.
    int minuteLasagne = 40;
    return minuteLasagne;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // TODO: Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    p = new ovenTime();
    int result = actualMinutesInOven - p;
    return result;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // TODO: Calculate and return the preparation time with the
    int result = numberOfLayers *= 2;

    return result;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // TODO: Calculate and return the total time so far.
    int elapsedTime = numberOfLayers + actualMinutesInOven;
    return elapsedTime;
}
