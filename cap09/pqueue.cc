#include <iostream>
#include <queue>

using namespace std;

int main()
{
  priority_queue<int> pq;

  pq.push(100);
  pq.push(-20);
  pq.push(50);

  while( ! pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
}
