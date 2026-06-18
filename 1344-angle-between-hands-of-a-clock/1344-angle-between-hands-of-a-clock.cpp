class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourHand = (hour % 12) * 30.0 + minutes * 0.5;
        double minHand = minutes * 6.0;
        double diff = abs(hourHand - minHand);
        return min(diff, 360.0 - diff);
    }
};