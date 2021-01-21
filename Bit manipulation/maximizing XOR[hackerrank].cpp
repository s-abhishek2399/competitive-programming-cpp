#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {
    vector <int> output;
    for(int i=l; i<r+1;i++)
    {
        for(int j=i; j<r+1;j++)
        {
            int x = i^j;
            output.push_back(x);
        }
           
        
            
    }

    return *max_element(output.begin(), output.end()); 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int l;
    cin >> l;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int r;
    cin >> r;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = maximizingXor(l, r);

    fout << result << "\n";

    fout.close();

    return 0;
}

