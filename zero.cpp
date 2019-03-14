#include <iostream>

using namespace std;

class Car{
private:
  int age;
  int price;
  string name;
public:
  //static int howManyCars;

  Car(string n, int a,int p)
  {
    if(n==""||a<0||p<0) cout<<"Zle dane";
    else
    {name = n; age = a; price = p;}
    //howManyCars++;
    cout<<endl<<"Liczba samochodow:"<<howManyCars<<endl;
  }
  ~Car()
  {
    cout<<"Usunieto"<<endl;
    //howManyCars--;
  }
  void show()
  {
    cout<<endl<<name<<" Wiek: "<<age<<" Cena: "<<price<<endl;
  }
  void ratio()
  {
    cout<<endl<<"Price/Age = "<<price/age<<endl;
  }
};

int main()
{
  Car c1("Opel",10,5000);
  Car c2("Astra",25,5000);
  c1.show();
  c2.show();
  return 0;
}
