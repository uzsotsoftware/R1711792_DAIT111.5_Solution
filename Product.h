#include <iostream>
#include<fstream>
#include<cstring>
#include <cstdlib>
#ifndef PRODUCT_H
#define PRODUCT_H
class Product {
    int productcode;
    char name[40];
    char manufacturer[15];
    char manufacture_date[8];
    char expiry_date[8];
    char unit[10];
    char quantity[13];


public:
    Product();
    Product(int pcode, char *pname, char *pmanufacturer,char *pmd,char *ped,char *pu,char *pq);
    void GetProduct();
};
#endif /* PRODUCT_H */

