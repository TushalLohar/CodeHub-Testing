class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minute_angle =(double)minutes *6;
        double hour_angle =(double)(hour%12) *30 + (double)minutes *0.5;
        double ans = abs(minute_angle-hour_angle);

        return min(ans , 360-ans);
        
    }
};