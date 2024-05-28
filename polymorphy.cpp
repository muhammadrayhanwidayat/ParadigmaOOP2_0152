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

class lia : public seseorang
{
public:
    void pesan()
    {
        cout << "Pesan dari lia" << endl;
    }
};


int main(){
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();

}
