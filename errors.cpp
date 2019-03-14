#include <iostream>

using namespace std;

class Bus{
private:
  int seats;
  int money;
  int minutes;
public:
  Bus(int s , int mo, int mi)
  {
    if(mo<0||s<1||mi<0) cout<<"Zle dane";
    else
    {seats = s; money = mo; minutes = mi;}
  }
  ~Bus()
  {
    cout<<"Bus destroyed"<<endl;
  }
  void worth()
  {
    cout<<"Wybierajac autobus oszczedzasz "<<money<<" zlotych ,ale tracisz "<<minutes<<" minut "<<endl;
    if(seats>50)
    {
      cout<<"Duża szansa na wolne miejsce"<<endl;
    }
    else
    {
      cout<<"Raczej nie posiedzisz"<<endl;
    }
  }
};

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
    cout<<"Car destroyed"<<endl;
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
  int* tab = new int[60];
  Car c1("Opel",10,5000);
  Car c2("Astra",25,7000);
  Bus b1(51,7,45);
  c1.show();
  c2.show();
  c1.ratio();
  c2.ratio();
  b1.worth();
  return 0;
}
