//Kelompok 6 :
//Tema : Password akun
//Naura Salsabilla 2217051079
//Dela Sylviayani 2217051048
//Pradya Hening Pertiwi 2217051005

#include <iostream>
using namespace std;

void cek(string password,int batas){	
    int kapital, huruf_kecil, angka, simbol;
    
	for (int i = 0; i < batas; i++){ 
	int c = (int)password[i]; //c=cek

        if (c >= 65 && c <= 90)//kode huruf besar A-Z
            kapital = 1;
        if (c >= 97 && c <= 122)//kode huruf kecil a-z
            huruf_kecil = 1;
        if (c >= 47 && c <= 57)//kode angka 1-10
            angka = 1;
        if (c >= 33 & c <= 47)//kode simbol
            simbol = 1;
    	if (c >= 58 & c <= 64)//kode simbol
            simbol = 1;
        if (c >= 91 & c <= 96)//kode simbol
            simbol = 1;
        if (c >= 123 && c <= 126)//kode simbol
            simbol = 1;
        }
   
    
        if (angka != 1)
            cout<< "\n\nTidak terdapat angka !\n";
        if (kapital != 1)
            cout<< "\nTidak terdapat huruf kapital !\n";
        if (huruf_kecil != 1)
            cout<< "\nTidak terdapat huruf kecil !\n";
        if (simbol != 1)
            cout<< "\nTidak terdapat simbol !\n";
        if (angka !=1 || kapital !=1 || huruf_kecil !=1 || simbol !=1)
            cout<< "\n\nHarap Masukkan Kembali Password.\n";

        if (angka== 1 && kapital== 1 && huruf_kecil== 1 && simbol== 1)
            cout << "\nPassword SUKSES\n";
}

int main(){
	char choice;
	cout<<"**********************************************************************"<<endl;
	cout<<"                        SELAMAT DATANG                                "<<endl;
	cout<<"**********************************************************************\n"<<endl;
	
	string menu[2]={"Lupa password","Keluar"};
  	cout<<"\tSILAHKAN PILIH MENU DIBAWAH INI: "<<endl;
  	cout<<endl;
  	
	for(int i=0;i<2;i++){
        cout<<"\t"<<i+1<<" "<<menu[i]<<endl;}
	cout<<"\tPilih Menu :";
	cin>>choice;
	
	if (choice == '2'){
	cout << "\n\n\tTerima kasih sudah menggunakan program kami.";
            cout << "\n\n";

}

	else if(choice == '1'){

	cout<<"\n============== Silahkan ganti password akun anda ====================="<<endl;
	cout<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"	Ketentuan :                                                  |"<<endl;
	cout<<"	1. Harus ada setidaknya satu huruf kecil                     |"<<endl;
	cout<<"	2. Berisikan setidaknya satu huruf kapital                   |"<<endl;
	cout<<"	3. Harus terdapat setidaknya satu karakter khusus.           |"<<endl;
	cout<<"	Karakter khusus dapat berupa:!@#$%^&*()-+,dll                |"<<endl;
	cout<<"	4. Harus Berisikan setidaknya satu angka                     |"<<endl;
	cout<<"	5. Tidak Melebihi Batas Maksimal Karakter                    |"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
   
    int n=8;
    string pass;	
	cout<<endl;
	cout<<"Maksimal jumlah karakter \t : "<<n<<endl; 
	cout<<"Masukkan password anda \t\t : ";
	cin>>pass;
   
   if(pass.size()<=n){
        cek(pass,n);
    
   }else{
    cout<<"\nPassword yang anda masukkan tidak sesuai ketentuan."<<endl;
    cout<<"\nHarap Masukkan Kembali Passwordnya Tsayy"<<endl;
}
    cout<<"========================== SELESAI ==================================="<<endl;
    return 0;

}

}
