// cai dat ngan xep
// https://topdev.vn/blog/ngan-xep-va-hang-doi-trong-c/ 
#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    
    int x = s.top();
    s.pop();

    cout << "Phan tu tren dinh ngan xep: " << x << endl;
    cout << "So phan tu con lai trong ngan xep: " << s.size() << endl;

    return 0;
}
