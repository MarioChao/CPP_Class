#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int arr[1000];
    for(int i=0;i<1000;i++)
    {
        arr[i]=(rand()%(99-10+1))+10;
        cout<<arr[i]<<"  ";
    }
    return 0;
}