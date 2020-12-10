#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;




int main(){
    int m,n;
    char subpunct;
    cin>>m>>n;
    int max=0;
    int labirint[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>labirint[i][j];
            if(max<labirint[i][j]){
                max=labirint[i][j];
            }
        }
    }

    cin>>subpunct;

    if(subpunct=='a'){
        vector<pair<int,int>>vec;
        int cnt=0;
        for(int x=0;x<=max;x++){
            cnt=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(x==labirint[i][j]){
                        cnt++;
                    }
                }
            }
            if(cnt>0){
                vec.push_back(make_pair(x,cnt));
            }
        }

        for(int i=0;i<vec.size();i++){
            cout<<vec[i].first<<": "<<vec[i].second<<endl;
        }
    }else{cout<<endl;}


    if(subpunct=='b'){
        vector<pair<int,int>>vec;
        int cnt=0;

        for(int x=0;x<=max;x++){
            cnt=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(x==labirint[i][j]){
                        cnt++;
                    }
                }
            }
            if(cnt==1){
                vec.push_back(make_pair(x,cnt));
            }
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            cout<<vec[i].first<<' ';
        }cout<<endl;
    }else{cout<<endl;}


    if(subpunct=='c'){
        int indexM,indexN,cnt=0;
        for(int i=0;i<m;i++){
            if(labirint[i][0]==1){
                cnt++;
                indexM=i;
                indexN=0;
                break;
            }
            if(labirint[i][n-1]==1){
                cnt++;
                indexM=i;
                indexN=n-1;
                break;
            }
            for(int j=0;j<n;j++){
                if(labirint[0][j]==1||labirint[m-1][j]==1){
                    cnt++;
                    indexM=i;
                    indexN=j;
                    break;
                }
            }
        }



        if(cnt>0){
            cout<<indexM<<' '<<indexN<<endl;
        }else{cout<<"NU"<<endl;}




    }else{cout<<endl;}

    if(subpunct=='d'){
        int indexM,indexN,cnt=1,indexM_out,indexN_out;


        for(int i=0;i<m;i++){



            for(int j=0;j<n;j++){
                if(labirint[i][j]==1){
                    indexM=i;
                    indexN=j;
                }

            }
        }

        cnt=1;
        for(int x=0;x<m*n;x++) {
            for (int i = 0; i < m; i++) {
                if(labirint[i][indexN]==cnt+1){
                    if(i==indexM+1||i==indexM-1){
                        indexM=i;
                        cnt++;
                    }
                }
                for (int j = 0; j < n; j++) {
                    if (labirint[indexM][j] == cnt+1) {
                        if(j==indexN+1||j==indexN-1) {
                            indexN = j;
                            cnt++;
                        }

                    }
                }
            }
        }



        if(indexM==m-1||indexN==n-1||indexM==0||indexN==0){
            cout<<indexM<<' '<<indexN<<endl;
        }else{cout<<"NU"<<endl;

        }

    }else{cout<<endl;}

    if(subpunct=='e'){
        int indexM,indexN,cnt=1,indexM_out,indexN_out;


        for(int i=0;i<m;i++){



            for(int j=0;j<n;j++){
                if(labirint[i][j]==1){
                    indexM=i;
                    indexN=j;
                }

            }
        }
        vector<pair<int,int>>vvv;
        vvv.push_back(make_pair(indexM,indexN));
        cnt=1;
        for(int x=0;x<m*n;x++) {
            for (int i = 0; i < m; i++) {
                if(labirint[i][indexN]==cnt+1){
                    if(i==indexM+1||i==indexM-1){
                        indexM=i;
                        vvv.push_back(make_pair(indexM,indexN));
                        cnt++;
                    }
                }
                for (int j = 0; j < n; j++) {
                    if (labirint[indexM][j] == cnt+1) {
                        if(j==indexN+1||j==indexN-1) {
                            indexN = j;
                            vvv.push_back(make_pair(indexM,indexN));
                            cnt++;
                        }

                    }
                }
            }
        }



        for(int i=vvv.size()-1;i>=0;i--){
            cout<<vvv[i].first<<' '<<vvv[i].second<<endl;
        }

    }else{cout<<endl;}








}