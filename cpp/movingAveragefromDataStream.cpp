// Moving Average from Data Stream

class MovingAverage {
public:
    /** Initialize your data structure here. */
    int windowsize=0;
    double sum=0;
    queue<int> q;

    MovingAverage(int size) {
        windowsize=size;

    }

    double next(int val) {
        if(q.size() < windowsize)
        {
            q.push(val);
            sum+=val;
            return sum/q.size();
        }

        else
        {
            sum-=q.front();
            q.pop();
            q.push(val);
            sum+=val;
            return sum/q.size();
        }

        /*  if(q.size()>windowsize)
        {
            sum-=q.front();
            q.pop();
        }

        q.push(val);
        sum+=val;
        return sum/q.size();  */
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */
