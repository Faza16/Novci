#includ <iostream>

using namespace std;

    class Karte1 {
        private:
        char znakKarte [2];
        int brojKarte [2];

        public:
        cin>>znakKarte[0];
        cin>>brojKarte[0];
        cin>>znakKarte[1];
        cin>>brojKarte[1];
    }

    int brojIgraca(int a){
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
