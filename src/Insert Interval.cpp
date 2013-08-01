/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int min = newInterval.start;
        int max = newInterval.end;
        vector<Interval> ret;
        if(intervals.empty() || intervals[intervals.size()-1].end < min)
        {
            intervals.push_back(newInterval);
            return intervals;
        }
        for(int i=0; i<intervals.size(); i++)
        {
            if(intervals[i].start > max)
            {
                newInterval.start = min;
                newInterval.end = max;
                ret.push_back(newInterval);
                ret.push_back(intervals[i]);
                max = min = INT_MAX;
                continue;
            }
            if(intervals[i].end < min)
            {
                ret.push_back(intervals[i]);
                continue;
            }
            min = std::min(min, intervals[i].start);
            max = std::max(max, intervals[i].end);
            if(i == intervals.size()-1)
            {
                newInterval.start = min;
                newInterval.end = max;
                ret.push_back(newInterval);            
            }
            
        }
        return ret;
    }
};