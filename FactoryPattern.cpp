#include<iostream>

Class Product
{
public:
    Product GetProduct();
};

Class Factory : public Product
{

public:
    virtual void* GetProduct() = 0;

};

Product::GetProduct()
{
    Product *p1 = new Product();
    return p1;
}

int main()
{
    Factory *FacObj = new Factory();
    FacObj->GetProduct();
}