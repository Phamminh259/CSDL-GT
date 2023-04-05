// https://blog.luyencode.net/hang-doi-queue/
// vi du 
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    
    q.push(10);
    q.push(20);
    q.push(30);

   
    cout << "kich thuoc cua hang doi la " << q.size() << endl;

   
    cout << "phan tu dau cua hang doi " << q.front() << endl;

    
    cout << "phan tu o cuoi hang doi " << q.back() << endl;

    
    q.pop();

    
    cout << "cac phan tu con lai cua hang doi la ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
