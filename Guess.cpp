#include <iostream> 
using namespace std;
int main(){
    srand(time(0));
    int a = (rand()%100) + 1;
    while (true) {
        int n;
        cout<<"Enter your guess"<<endl;
        cin>>n;
        if (n>a) {
            cout<<"Too High"<<endl;
        }
        else if (n<a) {
            cout<<"Too Low"<<endl;
        }
        else {
            cout<<"Correct Guess!";
            break;
        }
    }
}