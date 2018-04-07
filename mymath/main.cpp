#include <iostream>
#include "mymath.h"
#include <cstdlib>

using namespace std;

int main()
{
   string menu;

    cout<<"Witaj w programie wykorzystujacym moje funkcje"<<endl;
    cout<<"Aby przejsc dalej zatwierdz wybrany przycisk: " <<endl;
    cout<<"[1] - obliczanie pola trojkata na podstawie dlugosci jego bokow"<<endl;
    cout<<"[2] - obliczanie silni" <<endl;
    cout<<"[3] - obliczanie objetosci kuli" <<endl;
    cout<<"[4] - obliczanie potegi dowolnego stopnia" <<endl;
    cout<<"[5] - sprawdzanie czy trojkaty sa do siebie podobne" <<endl;
    cout<<endl;
    cout<<"Podaj i zatwierdz swoj wybor: ";
    cin>>menu;
    system( "cls" );

        if(menu=="1")
        {
            cout<<"Obliczanie pola trojkata na podstawie dlugosci jego bokow"<<endl;
            cout<<"--------------------------------------------------"<<endl;
       double side_a, side_b, side_c;
        cin>>side_a>>side_b>>side_c;
        cout<<"Pole tego trojkata to: "<<TriangleArea(side_a, side_b, side_c);

        }
        else
            if(menu=="2")
            {
                cout<<"Obliczanie silni"<<endl;
                cout<<"--------------------------------------------------"<<endl;
                int Fac;
                cin>>Fac;
                cout<<"Wynik to: "<<Factorial(Fac)<<endl;

            }
            else
                if(menu=="3")
                {
                    cout<<"Obliczanie objetosci kuli"<<endl;
                    cout<<"--------------------------------------------------"<<endl;
                    int radius;
                    cin>>radius;
                    cout<<"Objetosc kuli to: "<<Sphere_vol(radius)<<endl;
                }
                else
                    if(menu=="4")
                    {
                        cout<<"Obliczanie potegi dowolnego stopnia"<<endl;
                        cout<<"--------------------------------------------------"<<endl;
                        int base, index;
                        cout<<"Podaj podstawe: "<<endl;
                        cin>>base;
                        cout<<"Podaj wyklanik: "<<endl;
                        cin>>index;
                        cout<<endl;
                        cout<<"Wynik to: "<<Power(base, index)<<endl;
                    }
                    else
                        if(menu=="5")
                        {
                            cout<<"Sprawdzanie czy trojkaty sa do siebie podobne"<<endl;
                            cout<<"1 - TAK" <<endl;
                            cout<<"0 - NIE" <<endl;
                            cout<<"--------------------------------------------------"<<endl;
                            double x1, x2, y1, y2;
                            cout<<"Podaj dlugosci pary bokow trojkata: "<<endl;
                            cin>>x1>>y1;
                            cout<<"Teraz podaj dlugosc odpowiednich bokow drugiego trojkata "<<endl;
                            cin>>x2>>y2;
                            cout<<"Trojkaty sa podobne: "<<isSimilar(x1,y1,x2,y2)<<endl;

                        }

    return 0;
}
