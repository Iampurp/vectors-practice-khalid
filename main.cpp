#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void setNum(vector<int>& a);
//vector<int>

float avOfNum(vector<int>& a);

int randNum(int small, int large);

void randVec(vector<int>& a);

void randVecS(vector<int>& a);

void printVec(const vector<int>& a);


int main()
{

    vector<int> a;
    vector<int> b;

    //setNum(a);

    //cout << a.empty() << endl;
    //cout << a.capacity() << endl;
    //cout << a.size() << endl;

    //cout << randNum(81, 128379);
    randVec(b);

    cout << "size of array " << b.size() << endl;

    printVec(b);

    cout << "average of numbers " << avOfNum(b) << endl;

    cout << endl;
    cout << endl;


    randVecS(a);

    cout << "size of array " << a.size() << endl;

    printVec(a);

    cout << "average of numbers " << avOfNum(a) << endl;


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

int randNum(int small, int large)
{

    return rand() %(large - small + 1) + small;
}

void randVec(vector<int>& a)
{
    a.resize(randNum(1, 15));
    for(int i = 0; i < a.size(); i++)
    {
        a[i] = randNum(1 , 40);
    }
}

void randVecS(vector<int>& a)
{
    do
    {
        a.push_back(randNum(1, 40));
    }while (a[a.size() - 1] != 40);
}

void printVec(const vector<int>& a)
{
    for(int i = 0; i < a.size(); i++)
    {
       cout << a[i] << endl;
    }

}
