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
    //cout<<endl<<"Liczba samochodow:"<<howManyCars<<endl;
  }
  ~Car()
  {
    cout<<"Destruktor dziala"<<endl;
    //howManyCars--;
  }
  void show()
  {
    cout<<endl<<name<<" Wiek: "<<age<<" Cena: "<<price<<endl;
  }
  void ratio()
  {
    cout<<endl<<"Proporcja ceny do wieku samochodu "<<name<<" = "<<price/age<<endl;
  }
};

int main()
{
  Car c1("Opel",10,5000);
  Car c2("Astra",25,7000);
  c1.show();
  c2.show();
  c1.ratio();
  c2.ratio();
  return 0;
}
