#include <iostream>
using namespace std;


class seseorang {
    public:
    //pure virtual function
    virtual void pesan()=0;

    //virtual function biasa
    // virtual void pesan()
    // {
    //     cout << "pesan dari seseorang" << endl;
    // }

};

class joko : public seseorang 
{
public:
    // Deklarasi
    void pesan()
    {
        // Implementasi
        cout << "Pesan dari joko" << endl;
    }
};

int main(){

}
