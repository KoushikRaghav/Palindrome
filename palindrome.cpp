#include <bits/stdc++.h>
using namespace std;

char out[100];

int main () {

    //len=string length,first=first digit,last=last digit,k=max 
limit,n=no of digits
    int n, len, first, last, k;
    string str;

    cin>>n>>k;
    cin>>str;
    len = str.size();

    first = 0; last = len-1;
    while(first <= last)
    {
         //check for the first and last digit
         if(first == last)
            {
                    out[first] = str[first];
                    break;
            }
            if(str[first] == str[last])
            {
                    out[first] = str[first];
                    out[last] = str[last];
            }
            else
            {
                    if(str[first] >= str[last])
                    {
                            k--;
                            out[first] = out[last] = str[first];
                    }
                    else
                    {
                            k--;
                            out[first] = out[last] = str[last];
                    }
            }
            first++;
            last--;
    }

    if(k < 0)
    {
            printf("-1\n"); //print -1 when k<=0
            return 0;
    }

    //Maximizing number
    first = 0; last = len-1;
    while(first <= last)
    {
            if(first == last)
            {
                    if(out[first]<'9' && k>=1)
                         out[first] = '9';
                    break;
            }
            first++;
            last--;
    }
    out[len] = '\0';
    printf("%s\n", out);

    return 0;
}

