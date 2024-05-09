#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void check (string a, string b, string h);
int Count (int x);
 
int main (){
    
    long long x; cin >> x;

    int c = Count(x);
    
    for (int i = pow(10, c / 4); i < pow(10, c / 2); i++)
    {
        for (int j = pow(10, c / 4); j < pow(10, c / 2); j++)
        {   
            if (i * j == x)
            {
                string a = to_string(i), b = to_string(j), h = to_string(x);
                check (a, b, h);   
            }
        }   
    }    
}
 
int Count (int x)
{   
    int c = 0;
    while (x != 0)
    {
        x /= 10;
        c++;
    }

    return c;
}

void check (string a, string b, string h){

    int m; m = 0;

    for (int l = 0; l < a.size(); l++)
    {
        for (int k = 0; k < h.size(); k++)
        {
            if (a[l] == h[k])
            {
                m++;
            }
            
        }
        
    }

    for (int l = 0; l < b.size(); l++)
    {
        for (int k = 0; k < h.size(); k++)
        {
            if (b[l] == h[k])
            {
                m++;
            }
            
        }
        
    }

    if (m == h.size())
    {
        cout << a << " * " << b << " = " << h <<"\n";
    }
}
