# C++

1. Kadane Algorithm 
  Each time we get a positive-sum compare it with max_so_far and update max_so_far if it is greater than max_so_far <br/>
  <br/>max_so_far=INT_MIN;<br/>
  max_ending_here=0;<br/>
  for(i---Array.length)<br/>
      max_ending_here+=Arr[i]<br/>
      if(max_so_far<max_ending_here)<br/>
        max_so_far=max_ending_here<br/>
      if(max_ending_here<0)<br/>
        max_so_far=0<br/>
        <br/>
  return max_so_far
  
        
```cpp
#include<iostream>
using namespace std;
```
