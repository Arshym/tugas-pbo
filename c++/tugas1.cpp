#include<iostream>
using namespace std;
int main(){
	//variabel dan tipe data
	string namae;
	int usia;
	
	//inputan dan outputan
	cout<<"siapa nama anda? ";cin>>namae;
	cout<<"berapa usia anda? ";cin>>usia;
	cout<<"nama anda "<<namae<<" dan usia anda "<<usia<<" tahun";
	cout<<endl<<endl;
	
	//array satu dimensi
	int angka[5] = {1, 3, 5, 7, 9};
	cout<<"angka = "<<angka[1];
	cout<<endl<<endl;
	
	//array multidimensi
	string nama[3][3] = {{"ucuk", "paji", "ochi"},
					   	 {"jae", "sahi", "dobby"},
					     {"ruto", "jongu", "uwan"}};
	cout<<"nama pada indeks ke-(1,1) adalah = "<<nama[1][1];
	cout<<endl<<endl;
	
	//perulangan for
	for(int i=0; i<3; ++i){
        cout << "find your treasure"<<endl;
    }
    cout<<endl<<endl;
    
    //percabangan if else
    int x = 1;
    int y = 3;
    if(x >= y){
        cout<<"x lebih besar atau sama dengan y"<<endl;
    }else{
        cout<<"x lebih kecil daripada y"<<endl;
    }
	cout<<endl;
	
	//perulangan while
	int j;
	while(j <= 3){
        cout<<j<<" ";
        ++j;
    }
    cout<<endl;
    
    //perulangan do while
    int a=1;
 	do{
 		cout<<"Hello Treasure"<<endl;
    	a++;
	} while(a <= 3);
	cout<<endl;
	
	//comment
	/*comment
	  comment*/
	
	return 0;
}
