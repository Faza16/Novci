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

    if(sviZnakoviIsti(znakKarte)){
      if(royalFlush(brojKarte)){
        //---------------------------------------------
      }
      else{
        if (straightFlush(brojKarte)){
            //----------------------------------------------
        }
        else{
            //-------------------FLUSH-------------
        }
      }

    }
    else{
        if(fourOfAKind(brojKarte)){
            //----------------------------
        }
        else{
            if(fullHouse(brojKarte)){
                //-------------------
            }
            else{
                if(straight(brojKarte)){
                    //-------------------
                }
                else{
                    if(threeOfAKind(brojKarte)){
                        //-----------------
                    }
                    else{
                        if(twoPair(brojKarte)){
                            //--------------------
                        }
                        else{
                            if(pair(brojKarte)){
                                //-------------------
                            }
                            else{
                                //----------highCard--------
                            }
                        }
                    }
                }
            }
        }
    }
}