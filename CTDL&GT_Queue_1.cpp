// https://blog.luyencode.net/hang-doi-trong-cpp/?fbclid=IwAR0MY7WBelxbYDo_EoDmv9uEDHOdV2Dnhfkv8P_dvxBU8TtF9ObcLMFgaig
#include <iostream>
const int MAX = 1e5; 
template<typename T> class Queue 
{
 T base[MAX]; 
 T *a = base; 
 int size = 0;
 public:
 Queue() 
 {
 
 }
 void Enqueue(T x) 
 {
 a[size] = x; 
 size++; 
 }
 void Dequeue() 
 {
 ++a; 
 size--; 
 }
 bool isEmpty() 
 {
 return size > 0; 
 }
 T front() 
 {
 return a[0];
 }
};
