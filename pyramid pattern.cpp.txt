#include<iostream>
using namespace std;
/*         *
          * *
        *  *  *
      *  *   *  *
    *   *  *   *   *
*/
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i+j>5) // use if (i<=j) for top right triangle which goes from 5 to 1 star.
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
