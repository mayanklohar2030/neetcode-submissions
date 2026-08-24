/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
static bool cmp(Interval a, Interval b){
    return a.start<b.start;
}
    bool canAttendMeetings(vector<Interval>& intervals) {
         sort(intervals.begin(), intervals.end(), cmp);
        //int start=intervals[0][0];
        int endd=intervals[0].end;
        bool ans=true;
        // sort(intervals.begin(), intervals.end(), cmp);

        for(int i=1; i<intervals.size(); i++){
            if(endd>intervals[i].start){
                ans=false;
                break;
                
            }
            //start=intervals[i][0];
            endd=intervals[i].end;
        }
        return ans;
        
    }
};
