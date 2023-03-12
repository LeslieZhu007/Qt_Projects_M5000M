#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    /*
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    while (!s1.empty()) {
        cout<<"stack ceiling element:"<<s1.top()<<endl;
        s1.pop();
    }
    */
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);

    cout<<"front:"<<q1.front()<<endl;
    cout<<"back:"<<q1.back()<<endl;
    cout<<"size:"<<q1.size()<<endl;

    while (!q1.empty()) {
        cout<<"front:"<<q1.front()<<endl;
        q1.pop();
    }



    return 0;
}
