#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<int> st;

  for(int i=1; i<=5; ++i)
    st.push(i*10);

  cout << "Num. elementos: "
       << st.size()
       << "\n\n";

  cout << "Pilha: ";

  while( ! st.empty() )
  {
    cout << st.top() << " ";
    st.pop();
  }

  cout << "\n\nNum. elementos: "
       << st.size()
       << endl;
}
