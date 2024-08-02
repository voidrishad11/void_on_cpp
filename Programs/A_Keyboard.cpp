#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    char side;
    cin>>side;
    string sent;
    cin>>sent;
    long long l = sent.size();
    string one = "qwertyuiop";
    string two = "asdfghjkl;";
    string thr = "zxcvbnm,./";
    if (side == 'R')
    {
        for (int i = 0; i < l; i++)
        {
            switch (sent[i])
            {
                //qwertyuiop
                case 'w':
                    sent[i] = 'q';
                    break;
                case 'e':
                    sent[i] = 'w';
                    break;
                case 'r':
                    sent[i] = 'e';
                    break;
                case 't':
                    sent[i] = 'r';
                    break;
                case 'y':
                    sent[i] = 't';
                    break;
                case 'u':
                    sent[i] = 'y';
                    break;
                case 'i':
                    sent[i] = 'u';
                    break;
                case 'o':
                    sent[i] = 'i';
                    break;
                case 'p':
                    sent[i] = 'o';
                    break;
                //asdfghjkl;
                case 's':
                    sent[i] = 'a';
                    break;
                case 'd':
                    sent[i] = 's';
                    break;
                case 'f':
                    sent[i] = 'd';
                    break;
                case 'g':
                    sent[i] = 'f';
                    break;
                case 'h':
                    sent[i] = 'g';
                    break;
                case 'j':
                    sent[i] = 'h';
                    break;
                case 'k':
                    sent[i] = 'j';
                    break;
                case 'l':
                    sent[i] = 'k';
                    break;
                case ';':
                    sent[i] = 'l';
                    break;
                //zxcvbnm,./
                case 'x':
                    sent[i] = 'z';
                    break;
                case 'c':
                    sent[i] = 'x';
                    break;
                case 'v':
                    sent[i] = 'c';
                    break;
                case 'b':
                    sent[i] = 'v';
                    break;
                case 'n':
                    sent[i] = 'b';
                    break;
                case 'm':
                    sent[i] = 'n';
                    break;
                case ',':
                    sent[i] = 'm';
                    break;
                case '.':
                    sent[i] = ',';
                    break;
                case '/':
                    sent[i] = '.';
                    break;
            }
        } 
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            switch (sent[i])
            {
                //qwertyuiop
                case 'q':
                    sent[i] = 'w';
                    break;
                case 'w':
                    sent[i] = 'e';
                    break;
                case 'e':
                    sent[i] = 'r';
                    break;
                case 'r':
                    sent[i] = 't';
                    break;
                case 't':
                    sent[i] = 'y';
                    break;
                case 'y':
                    sent[i] = 'u';
                    break;
                case 'u':
                    sent[i] = 'i';
                    break;
                case 'i':
                    sent[i] = 'o';
                    break;
                case 'o':
                    sent[i] = 'p';
                    break;
                //asdfghjkl;
                case 'a':
                    sent[i] = 's';
                    break;
                case 's':
                    sent[i] = 'd';
                    break;
                case 'd':
                    sent[i] = 'f';
                    break;
                case 'f':
                    sent[i] = 'g';
                    break;
                case 'g':
                    sent[i] = 'h';
                    break;
                case 'h':
                    sent[i] = 'j';
                    break;
                case 'j':
                    sent[i] = 'k';
                    break;
                case 'k':
                    sent[i] = 'l';
                    break;
                case 'l':
                    sent[i] = ';';
                    break;
                //zxcvbnm,./
                case 'z':
                    sent[i] = 'x';
                    break;
                case 'x':
                    sent[i] = 'c';
                    break;
                case 'c':
                    sent[i] = 'v';
                    break;
                case 'v':
                    sent[i] = 'b';
                    break;
                case 'b':
                    sent[i] = 'n';
                    break;
                case 'n':
                    sent[i] = 'm';
                    break;
                case 'm':
                    sent[i] = ',';
                    break;
                case ',':
                    sent[i] = '.';
                    break;
                case '.':
                    sent[i] = '/';
                    break;
            }
        } 
    }
    cout<<sent<<"\n";
    return 0;
}