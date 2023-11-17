#include <bits/stdc++.h>
#include "fje_poker.cpp"

using namespace std;

int main(){
    int igraci = brojIgraca();
    char znakKarte [5];
    int brojKarte [5];
    znakKarte[0] = unosZnakaKarte();
    brojKarte[0] = unosBrojaKarte();
    znakKarte[0] = unosZnakaKarte();
    brojKarte[1] = unosBrojaKarte();
    znakKarte[2] = unosZnakaKarte();
    brojKarte[2] = unosBrojaKarte();
    znakKarte[3] = unosZnakaKarte();
    brojKarte[3] = unosBrojaKarte();
    znakKarte[4] = unosZnakaKarte();
    brojKarte[4] = unosBrojaKarte();

    // testiranje karata, score za poredenje ko ce da win-a treba biti napisan

    if(sviZnakoviIsti()){
      if(royalFlush()){
        //---------------------------------------------
      }
      else{
        if (straightFlush()){
            //----------------------------------------------
        }
        else{
            //-------------------FLUSH-------------
        }
      }

    }
    else{
        //-----------------------------------------Sve ostalo-----
    }
}