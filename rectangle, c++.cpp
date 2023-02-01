#include <iostream>

using namespace std;
void draw(int a, int b) {
    string symbol;
    printf<< "Give any symbol." << endl;
    cin>>symbol;
    for(int i=0; i<a; i++)
    {
        cout<<endl;
        for(int j=0; j<b; j++)
        cout<<symbol;
    }
}
int main()
{
    int a,b;
    bool check=false;
    while(check==false) {
        cout << "Input two sides of square/rectangle." << endl;
        cin>>a>>b;
        if(a&&b>1)
        check=true;
        else
        cout << "Invalid parameters. Side(s) cannot be smaller than 1." << endl;
    }
    draw(a,b);
    return 0;
}
