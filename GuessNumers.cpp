#include <iostream>
using namespace std;
int main() {
    int RightNo = 87;
    int GussNo;
    cout<< "Guess the number!  ";

    while(true){
    cin>>GussNo;
    if(GussNo==RightNo)
    {
    cout<<"Correct! Well done."<<endl;
    break;
    }
    else if(GussNo>RightNo)
        cout<<"the Number is Smaller! try again.."<<endl;
    else
        cout<<"the Number is Bigger! try again.."<<endl;
    }

system("pause");
    return 0;
}
