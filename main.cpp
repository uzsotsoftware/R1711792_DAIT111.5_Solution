#include <iostream>
#include<fstream>
#include<cstring>
#include <cstdlib>
#include "Product.h"

using namespace std;
void WriteToFile(Product product);

void GetRecordDetails() {
    char opt;
    char ch;

    int pcode;
    char pname[40];
    char pmanufacturer[15];
    char pmd[8];
    char ped[8];
    char pu[10];
    char pq[13];
    do {

        cout << "Enter Productcode..";
        cin >> pcode;
        cin.ignore();
        cout << "Enter Name..";
        cin.getline(pname, 40);
        cout << "Enter Manufacturer..";
        cin.getline(pmanufacturer, 15);
        cout << "Enter manufacturing date";
        cin.getline(pmd, 8);
        cout << "Enter expiry date";
        cin.getline(ped, 8);
        cout << "Enter Units";
        cin.getline(pu, 10);
        cout << "Enter Quantity";
        cin. getline(pq, 13);



        Product product(pcode, pname, pmanufacturer, pmd, ped, pu, pq);
        WriteToFile(product);

        cout << "Another record <y-yes n-no>" << endl;
        opt = getchar();
        cin.ignore();

    } while (opt != 'n');


}

void WriteToFile(Product product) {

    ofstream outFile("product", ios::app | ios::binary);
    outFile.write((char*) &product, sizeof (Product));
    outFile.flush();

    if (outFile)
        cout << "\nRecord saved successfully" << endl;
    else
        cout << "Error saving file" << endl;
    outFile.close();

}

void ReadFromFile(streamsize position);

void ReadRecordPosition() {
    streamsize position;
    cout << "Enter the record number to retrieve...";
    cin>>position;
    ReadFromFile(position);
}

void ReadFromFile(streamsize position) {
    Product product;

    ifstream inFile("product", ios::in | ios::binary);

    inFile.seekg(sizeof (Product)*(position - 1), ios::beg);
    inFile.read((char *) &product, sizeof (Product));
    product.GetProduct();
}

int main() {
    GetRecordDetails();
    ReadRecordPosition();
}
