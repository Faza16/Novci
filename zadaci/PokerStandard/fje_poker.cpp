#include <bits/stdc++.h>

using namespace std;

    int brojIgraca(){
        int igraci;
        bool jedanIgrac = true;
        while(jedanIgrac){
            cin>>igraci;
            if (igraci<=6 && graci>=2){
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
            if (znakKarte!='c' && znakKarte!='d' && znakKarte!='h' && znakKarte!='s'){
                dobarBroj = false;
            }
            else{
                cout<<"Ovaj znak ne može biti na karti"<<endl;
            }
        }
        return znakKarte;
    }

    class Karte1 {
        private:
            char znakKarte [5];
            int brojKarte [5];

        public:
            znakKarte[0] = znakKarte();
            brojKarte[0] = unosBrojaKarte();
            znakKarte[0] = znakKarte();
            brojKarte[1] = unosBrojaKarte();
            znakKarte[2] = znakKarte();
            brojKarte[2] = unosBrojaKarte();
            znakKarte[3] = znakKarte();
            brojKarte[3] = unosBrojaKarte();
            znakKarte[4] = znakKarte();
            brojKarte[4] = unosBrojaKarte();
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
        int redoslijed[5] = ruka[5];
        sort(redoslijed, redoslijed+5);
        if(redoslijed[5]== {1, 10, 12, 13, 14}){
            jesteRF = true;
        }
        else{
            jesteRF = false;
        }
        return jesteRF;
    }

    bool straightFlush(int ruka[5]){
        bool jesteSF;
        int redoslijed[5] = ruka[5];
        sort(redoslijed, redoslijed+5);
        if
    }



