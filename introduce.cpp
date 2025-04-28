#include <iostream>
using namespace std;

class hewan {
    private:
    string jeniskelamin;

    public:
    string tipe;
    string umur;
    
    void inputdata() {
        cout << "Masukkan jenis kelamin = " << endl;
        cin >> jeniskelamin;
        cout << "Masukkan tipe = " << endl;
        cin >> tipe;
        cout << "Masukkan umur = " << endl;
        cin >> umur;
    }

    void tampilhewan(){
        cout << "jenis kelaminnya adalah " << jeniskelamin << endl;
    
    }
};

int main() {
    hewan amoy;
    amoy.inputdata();
    cout << "umurnya adalah = " << amoy.umur << endl;
    cout << "tipenya adalah = " << amoy.tipe << endl;
    amoy.tampilhewan();
}