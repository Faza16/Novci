#include <bits/stdc++.h>
#include "fje_poker.cpp"

using namespace std;

int main(){
    cout<<"Unesite broj igrača: ";
    int igraci = brojIgraca();
    bool ispravnaRuka = true;
    char znakKarte [5];
    int brojKarte [5];
    int score[10]; //prvi ide za koja je kombinacija, ostali za poredenja ostalih (nije nuzno 10, vjrv je manje)
    cout<<"Unosite svoje karte."<<endl;

    while(ispravnaRuka){
        for(int i=0; i<=4; i++){
            cout<<"Unesite znak "<< i+1 <<". karte:"<<endl;
            znakKarte[i] = unosZnakaKarte();
            cout<<"Unesite broj "<< i+1 <<". karte:"<<endl;
            brojKarte[i] = unosBrojaKarte();
        }
        cout<<endl;

        for(int j=0; j<=4; j++){
            if((znakKarte[j]==znakKarte[j-1] && brojKarte[j]==brojKarte[j-1]) ||
               (znakKarte[j]==znakKarte[j-2] && brojKarte[j]==brojKarte[j-2]) ||
               (znakKarte[j]==znakKarte[j-3] && brojKarte[j]==brojKarte[j-3]) ||
               (znakKarte[j]==znakKarte[j-4] && brojKarte[j]==brojKarte[j-4]) ){
                cout<<"Nije moguće imati dvije iste karte u ruci, unesite ponovo karte!"<<endl;
                break;
            }
            else{
                ispravnaRuka = false;
            }
        }
    }
    // score za poredenje ko ce da win-a treba biti napisan, da ne moze biti vise istih karata

    if(sviZnakoviIsti(znakKarte)){
        if(royalFlush(brojKarte)){
            cout<<"Imate Royal Flush"<<endl;
            score[0] = 10;
        }
        else if (straightFlush(brojKarte)){
            cout<<"Imate Straight Flush"<<endl;
            score[0] = 9;
        }
        else{
            cout<<"Imate Flush"<<endl;
            score[0] = 6;
        }

    }
    else{
        if(fourOfAKind(brojKarte)){
            cout<<"Imate Four Of A Kind"<<endl;
            score[0] = 8;
        }
        else if(fullHouse(brojKarte)){
            cout<<"Imate Full House"<<endl;
            score[0] = 7;
        }
        else if(straight(brojKarte)){
            cout<<"Imate Straight"<<endl;
            score[0] = 5;
        }
        else if(threeOfAKind(brojKarte)){
            cout<<"Imate Three Of A Kind"<<endl;
            score[0] = 4;
        }
        else if(twoPair(brojKarte)){
            cout<<"Imate Two Pair"<<endl;
            score[0] = 3;
        }
        else if(onePair(brojKarte)){
            cout<<"Imate Pair"<<endl;
            score[0] = 2;
        }
        else{
            cout<<"Imate High Card"<<endl;
            score[0] = 1;
        } //ukoliko ima high card 7 da izade poruka "Imate kitu" ili tako nesto (7 je najgori high card)
    }
    cout<<score[0]<<endl;
}
