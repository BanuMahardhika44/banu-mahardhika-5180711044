#include<iostream>

using namespace::std;

main(){

    int N[15];
    int i, j,a,b,c,d,k,n,bts,baru;


cout<<"\n=====PROGRAM UNTUK MENCARI DATA NILAI ANGKA,EDIT DATA DAN HAPUS DATA=====\n"<<endl;
cout<<"\nInputkan Jumlah Indeks : ";cin>>bts;
cout<<endl;

    for(i=0;i<bts;i++)
    {
        cout<<"\nData Indeks ["<<i<<"]= ";cin>>N[i];
    }
    cout<<endl;
    cout<<"\nMasukkan Nilai Yang Dicari= ";
    cin>>n;

    for(j=0;j<bts;j++)
    {
    if(N[j]==n)
    {
    cout<<"\nNilai yang dicari ditemukan pada indeks ke ["<<j<<"]";
    }
   }
cout<<endl;
cout<<"\nMasukkan indeks yang ingin diganti = ";cin>>c;
cout<<"\nMasukkan data pengganti            = ";cin>>baru;
a = c;N[a] = baru;
cout<<"\nData Baru  = \n";

for(b=0;b<bts;b++)
{
cout<<"\nData["<<b<<"]="<<N[b]<<"\n";
}
cout<<endl;
cout<<"\nMasukkan indeks yang ingin dihapus = ";cin>>d;
i=d;
cout<<"\nNilai yang dihapus = ";
cout<<" "<<N[i]<<" pada indeks ke ["<<i<<"] \n";
cout<<"\n========Hasil=========\n";

for(j=d;j<bts;j++)
{
N[j]=N[j+1];
}
for(k=0;k<bts-1;k++)
{
cout<<"\nData["<<k<<"]="<<N[k];
}
return 0;
}
