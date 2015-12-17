#include <iostream>
#include <vector>
#include <queue>

using namespace std;

template<typename T>
void PrintPopQueue(T &pq, const string &head="")
{
  cout << head;

  while(! pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
}

int main()
{
  int arr1[] = {-1,10,-5,1000,25,};
  vector<int> v1(arr1,arr1+(sizeof(arr1)/sizeof(int)));

  int arr2[] = {-12,110,-5,210,25,};
  vector<int> v2(arr2,arr2+(sizeof(arr2)/sizeof(int)));

  priority_queue<int> pq1(v1.begin(),v1.end());
  PrintPopQueue(pq1,"pq1: ");

  priority_queue<int>
    pq2(v1.begin(),v1.end(),less<int>(),v2);
  PrintPopQueue(pq2,"\npq2: ");

  priority_queue<int,deque<int>,greater<int> >
    pq3(v1.begin(),v1.end());
  PrintPopQueue(pq3,"\npq3: ");
}
