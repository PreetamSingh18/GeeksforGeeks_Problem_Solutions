// Preetam Singh (mr_vision)
//Find median in a stream;

class Solution{
public:
priority_queue<int>MaxH;
    priority_queue<int,vector<int>,greater<int>> MinH;
    void insertHeap(int &x)
    {
        if(MaxH.empty() && MinH.empty()){
            MaxH.push(x);
        }
        else if(x>MaxH.top()){
            MinH.push(x);
        }
        else{
            MaxH.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
     if(MaxH.size()>MinH.size() && ((MaxH.size()-MinH.size())>1)){
      MinH.push(MaxH.top());
      MaxH.pop();
     }
     else if(MaxH.size()<MinH.size() && ((MinH.size()-MaxH.size())>1)){
      MaxH.push(MinH.top());
      MinH.pop();
     }
        
    }
    
    //Function to return Median.
    double getMedian()
    { double med;
     if(MaxH.size()>MinH.size()){
       med= double(MaxH.top());
      }
      else if(MaxH.size()<MinH.size()){
       med = double(MinH.top());
      }
      else if(MaxH.size()==MinH.size()){
      med= (double(MaxH.top())+double(MinH.top()))/double(2);
       }
       return med;
        
    }
    };
