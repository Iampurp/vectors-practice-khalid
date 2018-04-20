#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using namespace std;

void setNum(vector<int>& a);
//vector<int>

float avOfNum(vector<int>& a);

int main()
{
    vector<int> a;
    setNum(a);

    //cout << a.empty() << endl;
  //  cout << a.capacity() << endl;
//    cout << a.size() << endl;

    cout << avOfNum(a) << endl;


    return 0;
}

void setNum(vector<int>& a)
{
    cout << "how many numbers" << endl;
    int numofnum;
    cin >> numofnum;
    a.resize(numofnum);
    cout << "what numbers" << endl;

    for(int i = 0; i < numofnum; i++)
    {
        cin >> a[i];
    }
}

float avOfNum(vector<int>& a)
{
    float total = 0;
    for(int i = 0; i < a.size(); i++ )
    {
        total += a[i];
    }

    return total/a.size();
}
