#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string A,B;
        cin>>A>>B;
        int i =0;
        int checkerB[i],checkerA[i];
         
         for (int i=0;i<A.length();i++)
         {
            checkerA[i];
         }
          for (int i=B.length()-1;i=0;i--)
         {
           checkerB[i];
         }
         if (checkerA[i]==checkerB[i])
         {
            cout<<"Yes"<<endl;

         }
         else
         {
            cout<<"No"<<endl;
         }

    }
}
