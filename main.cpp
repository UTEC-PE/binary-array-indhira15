#include <iostream>
#include "binary.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    boolean Abool(64);
    Abool.print();
    //cout<<endl<<Abool[3];
    //el inicio es 0
    Abool.bitOn(10);

    cout<<endl;
    Abool.print();
    Abool.bitOff(10);
    cout<<"clear: "<<endl;
    Abool.clear();
    Abool.print();
    Abool.bitOn(3);

    cout<<"operador:"<<endl;
    cout<<Abool[3];

    system("read");

    return EXIT_SUCCESS;
}

