#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef pair<string, int> pairs;
set<pairs> s;

void display()
{
    int f = 0;
    for (auto itr = s.begin(); itr != s.end(); itr++) {

        f = 1;
        pairs x = *itr;
        cout << x.first <<' '<< x.second<<endl;
    }
}
int main(){
    string text;
    int n;
    int marime;
    cin>>n;
    vector<string>vec;
    vector<char>litere;
    vector<pair<int,char>>vect;
    for(int i=0;i<n;i++){
        cin>>text;
        marime=text.size();
        transform(text.begin(),text.end(),text.begin(),::tolower);
        for(int j=0;j<text.size();j++){
            vect.push_back(make_pair(j,text[j]));
            litere.push_back(text[j]);
        }
        vec.push_back(text);
    }
    char sub;
    cin>>sub;
    if(sub=='a'){
        for(int i=0;i<vec.size();i++){
            sort(vec[i].begin(),vec[i].end());
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<endl;
        }
    }
    if(sub=='b'){
        int cnt=0;
        int pref;
        cin>>pref;
        for(int i=0;i<vec.size();i++){
            vec[i]=vec[i].substr(0,pref);
        }
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec.size();j++){
                if(vec[i]==vec[j]){
                    cnt++;
                }
            }
            s.insert(make_pair(vec[i],cnt));
            cnt=0;
        }
        display();
    }
    if(sub=='c'){
        int asc;
        char x;
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                x=vec[i][j];
                x=char(int(x-13));
                if(int(x)<97){
                    x=char(int(x+26));
                }
                cout<<x;
            }cout<<endl;
        }
    }
    if(sub=='d'){
        for(int i=0;i<litere.size();i++){
            for(int j=0;j<litere.size();j++){
                if(i==j)continue;
                if(litere[i]==litere[j]){
                    litere.erase(litere.begin()+j);
                    j=-1;
                }
            }
        }
        for(int i=litere.size()-1;i>=0;i--){
            cout<<litere[i]<<' ';
        }
    }
    if(sub=='e'){
        vector<char>final;
        int cnt=0,max=0;
        char fin;
        int aux=0,ultim=9999;
        for(int x=0;x<marime;x++){
            for(int i=0;i<vect.size();i++){
                for(int j=0;j<vect.size();j++){
                    //if(i==j)continue;
                    aux++;
                    if(vect[i].first==vect[j].first&&vect[i].second==vect[j].second&&vect[i].first==x){
                        cnt++;
                        if(cnt>=max){
                            max=cnt;


                        }
                    }
                }cnt=0; aux=0;
                //cout<<vect[i].first<<' '<<vect[i].second<<endl;
            }
            for(int i=0;i<vect.size();i++){
                for(int j=0;j<vect.size();j++){
                    //if(i==j)continue;
                    aux++;
                    if(vect[i].first==vect[j].first&&vect[i].second==vect[j].second&&vect[i].first==x){
                        cnt++;
                        if(cnt==max){
                            //max=cnt;
                            if(aux<ultim){
                                ultim=aux;
                                fin=vect[i].second;
                            }

                        }
                    }
                }cnt=0; aux=0;
                //cout<<vect[i].first<<' '<<vect[i].second<<endl;
            }
            final.push_back(fin);
            max=0;
            cnt=0;
            ultim=9999;
        }
        for(int i=0;i<final.size();i++){
            cout<<final[i];
        }
    }

}