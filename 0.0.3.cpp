#include <iostream>
#include <iomanip>
using namespace std;

const int M = 6;
const int N = 4;
enum modes{moveRight, moveUp, moveLeft, moveDown} moving;

int main()
{
    int array[M][N];
    moving = moveRight;
    int m = 0;
    int n = 0;
    int mMax = M-1;
    int nMax = N-1;
    int mMin = 0;
    int nMin = 1;
    for(int i = 0 ; i < M*N ; i++)
    {
        array[m][n] = i;
        if(moving == moveRight)
        {
            if(m < mMax)
            {
                m++;
            }
            else
            {
                moving = moveUp;
                mMax = m-1;
                n++;
            }
        }
        else if(moving == moveUp)
        {
            if(n < nMax)
            {
                n++;
            }
            else
            {
                moving = moveLeft;
                nMax = n-1;
                m--;
            }
        }
        else if(moving == moveLeft)
        {
            if(m > mMin)
            {
                m--;
            }
            else
            {
                moving = moveDown;
                mMin = m+1;
                n--;
            }
        }
        else if(moving == moveDown)
        {
            if(n > nMin)
            {
                n--;
            }
            else
        {
                moving = moveRight;
                nMin = n+1;
                m++;
            }
        }
    }
    for(int j = N-1 ; j>=0 ; j--)
    {
        for(int i = 0 ; i<M ; i++)
        {
            cout << setw(3) << array[i][j] << " ";
        }
        cout << endl;
    }
}
