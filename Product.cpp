
#include "Product.h"
#include <iostream>
#include<fstream>
#include<cstring>
#include <cstdlib>

using namespace std;

Product::Product() {
}

Product::Product(int pcode, char* pname, char* pmanufacturer, char* pmd, char* ped, char* pu, char* pq){
    productcode = pcode;
    strcpy(name, pname);
    strcpy(manufacturer, pmanufacturer);
    strcpy(manufacture_date,pmd);
    strcpy(expiry_date,ped);
    strcpy(unit,pu);
    strcpy(quantity,pq);
}

void Product::GetProduct() {
    cout << "\n";
    cout << "ProductCode....,,,,," << productcode << endl;
    cout << "Name................"<< name << endl;
    cout << "Manufacturer........"<< manufacturer << endl;
    cout<<"Manufacture date......"<<manufacture_date<<endl;
    cout<<"Expiry date..........."<<expiry_date<<endl;
    cout<<"Unit.................."<<unit<<endl;
    cout<<"Quantity.............."<<quantity<<endl;
}
