#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> reverse(std::queue<int> originalQueue);

queue<int> reverse(std::queue<int> originalQueue){

  
 
   stack<int> Stack; 
    while (!originalQueue.empty()) { 
        Stack.push(originalQueue.front()); 
        originalQueue.pop(); 
    } 
    while (!Stack.empty()) { 
        originalQueue.push(Stack.top()); 
        Stack.pop(); 
    } 
    return originalQueue;
    
} 
  
        
        
    //reverse(std::queue<int, std::deque<int, std::allocator<int> > >
 