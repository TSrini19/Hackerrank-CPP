#include <iostream>
#include <map> 

using namespace std;

int main()
{
    int queries, type, marks;
    string name;
    map<string, int> m;
    
    cin >> queries;
    
    for(int i=0; i<queries; i++)
    {
        cin >> type >> name;
        
        if (type == 1)
        {
            cin >> marks;
            m[name] += marks;
        }
        
        else if (type == 2)
        {
            m.erase(name);
        }
        
        else if (type == 3)
        {
            cout << m[name] << endl;
        }
    }
}
