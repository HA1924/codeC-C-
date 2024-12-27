#include<bits/stdc++.h>
using namespace std;
#define int long
#define long long long
const int MOD=1e9+7;
const int limit=100001;
void sol(){
	int muc1,muc2;
    cout<<"moi nhap dien ap muc1: ";cin>>muc1;
    cout<<"moi nhap dien ap muc2: ";cin>>muc2;
    double L=0.1;//dB
    int u1=muc1,u0=muc2;//bit '1':u1(v);bit '0':u0(v);
    double P1=20*log10(u1);
    double P0=20*log10(u0);
    double P1_b=P1-L;
    double P0_b=P0-L;
    double u1_b=pow(10,P1_b/20);
    double u0_b=pow(10,P0_b/20);
    double Nmax=(u1_b-u0_b)/2;
    // u1_c la u1" va u0_c la u0"
    cout<<"\n";
    cout<<"dai dien ap thu duoc o muc 1:\n";
    cout<<u1_b-Nmax<<" <"<<" u1_c "<<"< "<<u1_b+Nmax<<"\n";
    cout<<"\n";
    cout<<"dai dien ap thu duoc o muc 2:\n";
    cout<<u0_b-Nmax<<" <"<<" u0_c "<<"< "<<u0_b+Nmax;
}
main(){
// 	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
	cout<<"Co so thong tin so\n";
	cout<<"    bai tap 1.4\n";
    for(int i=0;i<3;i++){
    	cout<<".........................................\n";
    	cout<<"moi ban nhap thong so cau "<<i+1<<":\n";
    	sol();
    	cout<<"\n";
	}
    
    
}
