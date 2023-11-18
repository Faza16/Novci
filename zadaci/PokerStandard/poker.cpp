#include <bits/stdc++.h>
#include "fje_poker.cpp"

using namespace std;

int main(){
    cout<<"Unesite broj igrača"<<endl;
    int igraci = brojIgraca();
    char znakKarte [5];
    int brojKarte [5];
    int score[10]; //prvi ide za koja je kombinacija, ostali za poredenja ostalih (nije nuzno 10, vjrv je manje)
    cout<<"Unesite svoje karte"<<endl;
    znakKarte[0] = unosZnakaKarte();
    brojKarte[0] = unosBrojaKarte();
    znakKarte[0] = unosZnakaKarte();
    brojKarte[1] = unosBrojaKarte();
    znakKarte[2] = unosZnakaKarte();
    brojKarte[2] = unosBrojaKarte();
    znakKarte[3] = unosZnakaKarte();
    brojKarte[3] = unosBrojaKarte();
    znakKarte[4] = unosZnakaKarte();
    brojKarte[4] = unosBrojaKarte(); // broj karte=sort(broj karte) treba napraviti

    // score za poredenje ko ce da win-a treba biti napisan, da ne moze biti vise istih karata

    if(sviZnakoviIsti(znakKarte)){
      if(royalFlush(brojKarte)){
        score[0] = 10;
      }
      else{
        if (straightFlush(brojKarte)){
            score[0] = 9;
        }
        else{
            score[0] = 6;
        }
      }

    }
    else{
        if(fourOfAKind(brojKarte)){
            score[0] = 8;
        }
        else{
            if(fullHouse(brojKarte)){
                score[0] = 7;
            }
            else{
                if(straight(brojKarte)){
                    score[0] = 5;
                }
                else{
                    if(threeOfAKind(brojKarte)){
                        score[0] = 4;
                    }
                    else{
                        if(twoPair(brojKarte)){
                            score[0] = 3;
                        }
                        else{
                            if(onePair(brojKarte)){
                                score[0] = 2;
                            }
                            else{
                                score[0] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
}