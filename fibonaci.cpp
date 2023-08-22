#include <iostream>

using namespace std;

int main()
{   
    int fst = 0, sec = 1, thd = 0;
    cout<<fst<< " " <<sec<< " " ;
    int count = 1;
    while (count<=8){ // fst sec upare 0,1 nia jaechi sethipaain 8 niagala
        thd = fst + sec;
        cout<< thd << " ";
        fst = sec;
        sec = thd;
        count = count+1;
    }
    return 0;
}

