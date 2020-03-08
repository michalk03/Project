#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;
int main()
{
int n;
cin >> n;
int x;
int w1=0;
int w2=0;
int w3=0;
int w4=0;
int w5=0;
int w6=0;
int w7=0;
int w8=0;
int w9=0;
int w10=0;
fstream dane;
dane.open("dane.txt", ios::out);
srand(time(NULL));
for (int i = 0; i < n; i++)
{
    x = rand()%10+1;
dane << x << endl;
}
dane.close();
dane.open("dane.txt",ios::in);
string l;
int nr=1;
while(getline(dane,l))
{
    int nr = atoi(l.c_str());
    if(nr==1)
        w1++;
    else
    {
        if(nr==2)
            w2++;
        else
        {
            if(nr==3)

                w3++;
                else
                {
                    if(nr==4)
                        w4++;\
                    else
                    {
                        if(nr==5)
                            w5++;
                        else
                        {
                            if(nr==6)
                                w6++;
                            else
                            {
                                if(nr==7)
                                    w7++;
                                else
                                {
                                    if(nr==8)
                                        w8++;
                                    else
                                    {
                                        if(nr==9)
                                            w9++;
                                        else
                                            w10++;
                                    }
                                }
                            }
                        }
                    }
                }

        }
    }
    nr++;
}
dane.close();
fstream liczby;
liczby.open("liczby.txt",ios::out);
liczby<<"1. "<<w1<<endl;
liczby<<"2. "<<w2<<endl;
liczby<<"3. "<<w3<<endl;
liczby<<"4. "<<w4<<endl;
liczby<<"5. "<<w5<<endl;
liczby<<"6. "<<w6<<endl;
liczby<<"7. "<<w7<<endl;
liczby<<"8. "<<w8<<endl;
liczby<<"9. "<<w9<<endl;
liczby<<"10. "<<w10<<endl;
liczby.close();

return 0;
}
