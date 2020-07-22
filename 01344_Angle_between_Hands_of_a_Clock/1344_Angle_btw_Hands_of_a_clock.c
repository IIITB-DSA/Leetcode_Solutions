/*	https://leetcode.com/problems/angle-between-hands-of-a-clock/	*/

double angleClock(int hour, double min){
    double ans = fabs(360 * (min/60 - (((((hour%12)*5) + (5/(60/min)))/60)))); 
    return ans > 180? 360 - ans: ans; 
}