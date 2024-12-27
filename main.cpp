#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // float a,b,res;
    // cout<<"Enter the number : ";
    // cin>>a;
    // cout<<"Enter the number : ";
    // cin>>b;
    // res=sqrt(pow(a,2)+pow(b,2));
    // cout<<res<<endl;

    // float a,b,res;
    // cout<<"Enter the number : ";
    // cin>>a;
    // cout<<"Enter the number : ";
    // cin>>b;
    // res=sqrt(pow(a,2)+pow(b,2)) + a + b;
    // cout<<res<<endl;
    //ребро куба по площади всех граненй
    // float a, res;
    //
    // cout << "Enter the number : ";
    // cin >> a;
    // res = sqrt(a / 6);
    // cout << res << endl;

    int a;
    cout << "Enter the number : ";
    cin >> a;
    if (a%10==(a-a%10)/10) {
        cout<< "correct";

    } else {
        cout << "wrong";
    }

    return 0;
}
