#include <iostream>
using namespace std;

class lingkaran {
    public:
    double jarijari;
    double luaslingkaran;

    void inputdata(){
        cout << "Masukkan jarijari = " << endl;
        cin >> jarijari;
    }

    double hitungluas(){
        return 3.14 * jarijari * jarijari;

    }

};
int main(){
    lingkaran bulat;
    bulat.inputdata();
    cout << endl;
    cout << "luasnya adalah = " << bulat.hitungluas() << endl;
    cout << endl;
}