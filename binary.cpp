#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <string>
#include <iostream>

using namespace std;
class boolean {
    private:
        char* array;
        int size;
    
    public:;
        boolean(int size_ent):array(nullptr) {
            size=(size_ent/8)+1;
            array= new char[size];

            for(int i=0;i<size_ent;++i) {
                array[i]= 0x00;
            }

        }
        
        void bitOn(int position) {


            int cual_array=position/8;
            int array_position = position % 8;


            char mask=0x01;
            mask= mask<<array_position;
            /*
            for(int i=0;i<8;++i) {
                unsigned long bit = (array[cual_array] >> i) & 1UL;
                cout<<bit;
            }

            cout<<endl;
            for(int i=0;i<8;++i) {
                unsigned long bit = (mask >> i) & 1UL;
                cout<<bit;

            }

*/
            array[cual_array]=array[cual_array] | mask;



        }
             
        void bitOff(int position) {

            //int cual_array=position/8;
            //int array_position = position % 8;


            char mask=0x01;
            mask= ~( mask<<position % 8);

            /*
            for(int i=0;i<8;++i) {
                unsigned long bit = (array[cual_array] >> i) & 1UL;
                cout<<bit;
            }

            cout<<endl;
            for(int i=0;i<8;++i) {
                unsigned long bit = (mask >> i) & 1UL;
                cout<<bit;

            }
            */
            array[position/8]=array[position/8] & mask;






        }
             
        bool operator[](int position) {
            char mask=0x01;
            mask=mask<<position%8;
            array[position/8]=array[position/8] & mask;
            if(array[position/8]==0){
                return false;
            }
            return true;
        }
    
        void clear() {
            for(int i=0;i<size;++i) {
                array[i]= 0x00;
            }



        }
        void print(){
            for(int  j= 0; j < size; j++) {
                cout << array[j] << ": ";
                for (int i = 0; i < 8; ++i) {
                    unsigned long bit = (array[j] >> i) & 1UL;
                    cout << bit;
                }
                cout<<endl;
            }
        }
             
        ~boolean() {
            delete[] array;
        }


};

#endif