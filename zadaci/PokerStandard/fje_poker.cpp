#include <bits/stdc++.h>

using namespace std;

    int brojIgraca(){
        int igraci;
        bool jedanIgrac = true;
        while(jedanIgrac){
            cin>>igraci;
            if (igraci<=6 && igraci>=2){
                jedanIgrac = false;
            }
            else{
                cout<<"Nije dovoljno igrača za igru ili ih je previše!"<<endl;
            }
        }
        return igraci;
    }

    int unosBrojaKarte(){
        int brojKarte;
        bool dobarBroj = true;
        while(dobarBroj){
            cin>>brojKarte;
            if (brojKarte>=1 && brojKarte<=14 && brojKarte!=11){
                dobarBroj = false;
            }
            else{
                cout<<"Ovaj broj ne može biti na karti"<<endl;
            }
        }
        return brojKarte;
    }

    char unosZnakaKarte(){
        char znakKarte;
        bool dobarZnak = true;
        while(dobarZnak){
            cin>>znakKarte;
<<<<<<< HEAD
            if (znakKarte!='c' && znakKarte!='d' && znakKarte!='h' && znakKarte!='s'){
                dobarBroj = false;
=======
            if (znakKarte!='c' || znakKarte!='d' || znakKarte!='h' || znakKarte!='s'){
                dobarZnak = false;
>>>>>>> 2c809356804493659f52d118047fb609b8cef226
            }
            else{
                cout<<"Ovaj znak ne može biti na karti"<<endl;
            }
        }
        return znakKarte;
    }
    
    bool sviZnakoviIsti (char ruka[5]) {
        bool JesteSZI;
        if (ruka[0]==ruka[1] && ruka[0]==ruka[2] && ruka[0]==ruka[3] && ruka[0]==ruka[4]){
            JesteSZI = true;
        }
        else{
            JesteSZI = false;
        }
        return JesteSZI;
    }

    bool royalFlush (int ruka[5]){
        bool jesteRF;
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        if(redoslijed[0] == 1 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14){
            jesteRF = true;
        }
        else{
            jesteRF = false;
        }
        return jesteRF;
    }

    bool straightFlush(int ruka[5]){
        bool jesteSF;
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        int prvaKarta = redoslijed[0];
        if((redoslijed[0] == prvaKarta && redoslijed[1] == prvaKarta + 1 && redoslijed[2] == prvaKarta + 2 && redoslijed[3] == prvaKarta + 3 && redoslijed[4] == prvaKarta + 4)||
        (redoslijed[0] == 7 && redoslijed[1] == 8 && redoslijed[2] == 9 && redoslijed[3] == 10 && redoslijed[4] == 12)||
        (redoslijed[0] == 8 && redoslijed[1] == 9 && redoslijed[2] == 10 && redoslijed[3] == 12 && redoslijed[4] == 13)||
        (redoslijed[0] == 9 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)){
            jesteSF = true;
        }
        else{
            jesteSF = false;
        }
<<<<<<< HEAD
=======
        return jesteSF;
    }
>>>>>>> 2c809356804493659f52d118047fb609b8cef226
    
    bool fourOfAKind(int ruka[5]){
        bool jesteFOAK;
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        if(redoslijed[0]==redoslijed[3] || redoslijed[1]==redoslijed[4]){
            jesteFOAK = true;
        }
        else{
            jesteFOAK = false;
        }
        return jesteFOAK;
    }

    bool fullHouse(int ruka[5]){
        bool jesteFH;
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        if((redoslijed[0] == redoslijed[2] && redoslijed[3]==redoslijed[4]) || (redoslijed[0]==redoslijed[1] && redoslijed[2]==redoslijed[4])){
            jesteFH = true;
        }
        else{
            jesteFH = false;
        }
        return jesteFH;
    }

    bool straight(int ruka[5]){
        bool jesteS;
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        int prvaKarta = redoslijed[0];
        if((redoslijed[0] == prvaKarta && redoslijed[1] == prvaKarta + 1 && redoslijed[2] == prvaKarta + 2 && redoslijed[3] == prvaKarta + 3 && redoslijed[4] == prvaKarta + 4)||
        (redoslijed[0] == 7 && redoslijed[1] == 8 && redoslijed[2] == 9 && redoslijed[3] == 10 && redoslijed[4] == 12)||
        (redoslijed[0] == 8 && redoslijed[1] == 9 && redoslijed[2] == 10 && redoslijed[3] == 12 && redoslijed[4] == 13)||
        (redoslijed[0] == 9 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)||
        (redoslijed[0] == 1 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)){
            jesteS = true;
        }
        else{
            jesteS = false;
        }
        return jesteS;
    }

    bool threeOfAKind(int ruka[5]){
        bool jesteTOAK;
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        if(redoslijed[0]==redoslijed[2] || redoslijed[1]==redoslijed[3] || redoslijed[2]==redoslijed[4]){
            jesteTOAK = true;
        }
        else{
            jesteTOAK = false;
        }
        return jesteTOAK;
    }

    bool twoPair(int ruka[5]){
        bool jesteTP;
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        if((redoslijed[0]==redoslijed[1] && redoslijed[2]==redoslijed[3])||
           (redoslijed[0]==redoslijed[1] && redoslijed[3]==redoslijed[4])||
           (redoslijed[1]==redoslijed[2] && redoslijed[3]==redoslijed[4])){
            jesteTP = true;
        }
        else{
            jesteTP = false;
        }
        return jesteTP;
    }

    bool onePair(int ruka[5]){
        bool jesteOP;
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        if(redoslijed[0]==redoslijed[1] || redoslijed[1]==redoslijed[2] || redoslijed[2]==redoslijed[3] || redoslijed[3]==redoslijed[4]){
            jesteOP = true;
        }
        else{
            jesteOP = false;
        }
        return jesteOP;
    }

    int highCard(int ruka[5]){
        int redoslijed[5];
        for(int i=0; i<=4; i++){
            redoslijed[i]=ruka[i];
        }
        sort(redoslijed, redoslijed+5);
        return redoslijed[4];
    }
