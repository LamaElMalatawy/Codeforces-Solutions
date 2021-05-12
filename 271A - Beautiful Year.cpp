#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>> n;
    bool check;
    for(int i=n+1; i<= 10000; i++)
    {
        check=true;
        int a[10] = {0};
        string s = to_string(i);
        for(int j=0; j< s.size(); j++)
        {

            switch(s[j])
            {
                case '0':
                    a[0]++;
                    break;
                case '1':
                    a[1]++;
                    break;
                case '2':
                    a[2]++;
                    break;
                case '3':
                    a[3]++;
                    break;
                case '4':
                    a[4]++;
                    break;
                case '5':
                    a[5]++;
                    break;
                case '6':
                    a[6]++;
                    break;
                case '7':
                    a[7]++;
                    break;
                case '8':
                    a[8]++;
                    break;
                case '9':
                    a[9]++;

            }

        }
        for(int k =0; k < 10; k++)
        {

            if(a[k] > 1)
            {
                check = false;
                break;
            }
        }


        if (check)
        {
            cout << i <<endl;
            break;
        }
    }

    return 0;
}
