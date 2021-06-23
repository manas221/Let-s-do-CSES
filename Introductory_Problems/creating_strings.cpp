#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void all_permutations(set<string> &output_step, string inp, int left, int right)
{
    if (left == right)
    {
        string s = inp;
        output_step.insert(s);
        return;
    }
    else
    {
        for (int i = left; i <= right; ++i)
        {

            swap(inp[left], inp[i]);
            all_permutations(output_step, inp, left + 1, right);
            swap(inp[left], inp[i]);
        }
    }
}

int main()
{
    string inp;
    set<string> output;
    cin >> inp;
    int sz = inp.length() - 1;
    all_permutations(output, inp, 0, sz);

    cout << output.size() << endl;
    for (string c : output)
    {
        cout << c << endl;
    }
    return 0;
    //don't know why it works for set but it doesn't work for vector
}