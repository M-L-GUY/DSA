# C++

1. Kadane Algorithm 
  Each time we get a positive-sum compare it with max_so_far and update max_so_far if it is greater than max_so_far <br/>
  1..<br/>max_so_far=INT_MIN;<br/>
  2..max_ending_here=0;<br/>
  3..for(i---Array.length)<br/>
  4..    max_ending_here+=Arr[i]<br/>
  5..     if(max_so_far<max_ending_here)<br/>
        max_so_far=max_ending_here<br/>
      if(max_ending_here<0)<br/>
        max_so_far=0<br/>
        <br/>
  return max_so_far
  
        
```cpp
#include<iostream>
using namespace std;
```
