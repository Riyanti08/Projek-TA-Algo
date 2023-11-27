#include <iostream> //file header
#include <stdio.h> //standar input output seperti prinf dan scanf
#include <string.h> //untuk mengoprasikan strcpy
#include <time.h> //mengoversi waktu
#include <iomanip> //digunakan untuk mengatur tampilan layar setw () = mengatur lebar variabel
#include <conio.h> //untuk menampilkan hasil antarmuka contohnya itu getch

using namespace std; //untuk mendeklarasikan / memberitahukan kepada compiler
char ident[15]; //array 1 dimensi

void headerprogram() //menampilkan diawal program
{
   	cout <<"\n=============================================================================== " << endl;
	cout << "                           SELAMAT DATANG DI MECIMA PRO                          " << endl;
	cout << "===============================================================================  " << endl;
}

void headerprogram1() 
{
   	cout <<"\n=============================================================================== " << endl;
	cout << "                                    BE THE SUN                                   " << endl;
    cout << "                          2022 SEVENTEEN 1ST WORLD TOUR                          " << endl;
    cout << "                                   IN JAKARTA                                    " << endl;
    cout << "                                ________________                                 " << endl;
    cout << "                              2022.28.12 / 6.30 PM                               " << endl;
    cout << "                                GELORA BUNGKARNO                                 " << endl;
    cout << "                      Promoted By                   MPC                          " << endl;
    cout << "                                   MECIMA PRO                                    " << endl;
	cout << "===============================================================================\n" << endl;
}

void footerprogram() //akan dimunculkan di akhir program
{
    cout << "\n=========================================================================================" <<endl;
    cout << "  |                                                                                       |" <<endl;
    cout << "  |                           SELAMAT MENIKMATI KONSER ANDA DAN                           |" <<endl;
    cout << "  |                          SAMPAI BERJUMPA AYANGDEUL DI KONSER                          |" <<endl;
    cout << "  |                                                                                       |" <<endl;
    cout << "  =========================================================================================" <<endl;
}

void noid()
{
    atas1:
    cout << "Nomor Identitas (8 digit): ";
    cin.getline(ident,15);
    if(strlen(ident) > 7 && strlen(ident) <= 8) //strlen = memperoleh jumlah karakter dari suatu string
    {
        cout << "Indentitas Terdaftar\n";
    }
    else
    {
        cout << "Tulisakan Nomor Indentitas Anda Dengan Benar\n";
        goto atas1;

    }
}

void nohp()
{
    char nohp[50];
    atas2:
    cout << "Nomor Handphone: ";
    cin.getline(nohp,sizeof(nohp));
    if(strlen(nohp) > 10 && strlen(nohp) <= 12) //strlen = memperoleh jumlah karakter dari suatu string
    {
        cout << "Nomor Terdaftar\n";
    }
    else
    {
        cout << "Tulisakan Nomor Handphone Anda Dengan Benar\n";
        goto atas2;
    }
}

int main()
{
    cout << fixed;
    cout << setprecision(0);
	int  kode_tiket, jenis, i, tiket, beli, total_beli, bayar, kembali, tipe, mulai;
    string seat;
	float harga, jlh_harga,pajak,jum_tiket,membership;
	char judul_tiket;
    char nama[20], identitas[25], tipe2, metode, jenkel, batal,alamat[100],lagi;
    int jumlah, total,rumus;

	headerprogram();

    cout << endl; //NewLine
    cout << "--------------------------------" <<endl;
    cout << "|Enter sekali untuk melanjutkan|" <<endl;
    cout << "--------------------------------" <<endl;

    getch(); //memanggil
    system("cls"); //untuk mengenter ke halaman selanjutnya

    cout << endl;
    cout << "-----------------------------------------------------------------------------------------" <<endl;
    cout << "|                              Masukan Data Pribadi Anda                                |" <<endl;
    cout << "-----------------------------------------------------------------------------------------" <<endl;

    atas3:
    noid(); //ini akan mengembalikan ke no identitas
    nohp(); // ngembaliin ke no hp yg dimasukin
    cout << "Nama Anda : "; cin.getline(nama, sizeof(nama));
    cout << "Alamat dari Kamu adalah : "; cin.getline(alamat, sizeof(alamat));

    ulang:
    cout << "Jenis Kelamin " <<endl;
    cout << "a. Perempuan  " <<endl;
    cout << "b. Laki-Laki  " <<endl;
    cout << "Pilih Jenis Kelamin[a/b]: "; cin >> jenkel;

    switch (jenkel)
    {
        case 'a':
        cout << "--------------------------------" <<endl;
        cout << "|        Anyeong Fangirl ^.^   |" <<endl;
        cout << "-------------------------------- \n" <<endl;
        cout << "--------------------------------" <<endl;
        cout << "|Enter sekali untuk melanjutkan|" <<endl;
        cout << "--------------------------------" <<endl;
        break;
        case 'b':
        cout << "--------------------------------" <<endl;
        cout << "|        Anyeong Fanboy ^.^    |" <<endl;
        cout << "--------------------------------\n" <<endl;
        cout << "--------------------------------" <<endl;
        cout << "|Enter sekali untuk melanjutkan|" <<endl;
        cout << "--------------------------------" <<endl;
        break;
        default:
        cout << "--------------------------" <<endl;
        cout << "|Mohon Pilih dengan Benar|" <<endl;
        cout << "--------------------------" <<endl;
        goto ulang;
    }
    getch(); //memanggil
    system("cls"); //untuk mengenter ke halaman selanjutnya

    headerprogram();

    cout <<endl;

    cout << "Nama: " << nama <<endl;

    kembali:

    cout << " ============================================================================== " << endl;
	cout << "                             TIKET KONSER SEVENTEEN                             " << endl;
	cout << "                                 BE THE SUN                                     " << endl;
	cout << " ============================================================================== " << endl;
	cout << " _______________________________________________________________________________" << endl;
	cout << "|                  |               |                        |                   | " << endl;
	cout << "|    Kode Tiket    |     Seat      |          Tipe          |       Harga       | " << endl;
	cout << "|_______________________________________________________________________________|" << endl;
	cout << "|        1         |     Blue      |        Standing        |  Rp. 3.600.000    | " << endl;
	cout << "|        2         |     Pink      |        Standing        |  Rp. 2.500.000    | " << endl;
	cout << "|        3         |    Yellow     |      Free Standing     |  Rp. 1.900.000    | " << endl;
	cout << "|        4         |     Green     |      Free Standing     |  Rp. 1.500.000    | " << endl;
	cout << "|        5         |     Purple    |      Free Standing     |  Rp. 1.100.00     | " << endl;
	cout << "|_______________________________________________________________________________| " << endl;
    cout << "--------------------------------------------------------------------------------- " <<endl;


    cout << "Silahkan Pilih Tiket Konser yang Anda Inginkan" <<endl;
    atas4:
    cout << "Pilih[1-5]: "; cin >> tipe2;

    time_t sekarang = time(0);
    tm *waktu = localtime(&sekarang);

    pajak = 0.05;
    membership = 0.05;

    switch (tipe2)
	{
		case '1':
            cout << "Anda Memilih Seat Blue Konser\n" << "Dengan Tipe Standing\n" << "Dengan Harga Rp 3.600.000\n" <<endl;
			cout << "\nJumlah Tiket Yang Dibeli : "; 
			cin >> jum_tiket;
            harga = 3600000;
            membership = (harga * 0.05);
            pajak = (harga * pajak);
            rumus = ((harga - pajak)*jum_tiket);
            bayar = (rumus + membership);
            cout << endl;
            cout << "Waktu Pemesanan Tiket: " << setw(2) << setfill('0') << waktu->tm_hour << ":"
            << setw(2) << setfill('0') << waktu->tm_min << ":" //setw untuk mengatur lebar dari suatu tampilan data. 
            << setw(2) << setfill('0') << waktu->tm_sec << endl; 
            //setfill untuk menampilkan suatu karakter yang diletakkan didepan nilai yang diatur oleh fungsi setfill().
            //harus menyertakan fungsi header file iomanip
            break;
        case '2':
			cout << "Anda Memilih Seat Pink Konser\n" << "Dengan Tipe Standing\n" << "Dengan Harga Rp 2.500.000\n" <<endl;
			cout << "\nJumlah Tiket Yang Dibeli : "; 
			cin >>jum_tiket;
            harga = 2500000;
            membership = (harga * 0.05);
            pajak = (harga * pajak);
            rumus = ((harga - pajak)*jum_tiket);
            bayar = (rumus + membership);
            cout << endl;
            cout << "Waktu Pemesanan Tiket: " << setw(2) << setfill('0') << waktu->tm_hour << ":"
            << setw(2) << setfill('0') << waktu->tm_min << ":" //setw untuk mengatur lebar dari suatu tampilan data.
            << setw(2) << setfill('0') << waktu->tm_sec << endl;
            //setfill untuk menampilkan suatu karakter yang diletakkan didepan nilai yang diatur oleh fungsi setfill().
            //harus menyertakan fungsi header file iomanip
            break;
        case '3':
			cout << "Anda Memilih Seat Yellow Konser\n" << "Dengan Tipe Free Standing\n" << "Dengan Harga Rp 1.900.000\n" <<endl;
			cout << "\nJumlah Tiket Yang Dibeli : "; 
			cin >> jum_tiket;
            harga = 1900000;
            membership = (harga * 0.05);
            pajak = (harga * pajak);
            rumus = ((harga - pajak)*jum_tiket);
            bayar = (rumus + membership);
            cout << endl;
            cout << "Waktu Pemesanan Tiket: " << setw(2) << setfill('0') << waktu->tm_hour << ":"
            << setw(2) << setfill('0') << waktu->tm_min << ":" //setw untuk mengatur lebar dari suatu tampilan data.
            << setw(2) << setfill('0') << waktu->tm_sec << endl;
            //setfill untuk menampilkan suatu karakter yang diletakkan didepan nilai yang diatur oleh fungsi setfill().
            //harus menyertakan fungsi header file iomanip
            break;
        case '4':
			cout << "Anda Memilih Seat Green Konser\n" << "Dengan Tipe Free Standing\n" << "Dengan Harga Rp 1.500.000\n" <<endl;
			cout << "\nJumlah Tiket Yang Dibeli : "; 
			cin >> jum_tiket;
            harga = 1500000;
            membership = (harga * 0.05);
            pajak = (harga * pajak);
            rumus = ((harga - pajak)*jum_tiket);
            bayar = (rumus + membership);
            cout << endl;
            cout << "Waktu Pemesanan Tiket: " << setw(2) << setfill('0') << waktu->tm_hour << ":"
            << setw(2) << setfill('0') << waktu->tm_min << ":" //setw untuk mengatur lebar dari suatu tampilan data.
            << setw(2) << setfill('0') << waktu->tm_sec << endl;
            //setfill untuk menampilkan suatu karakter yang diletakkan didepan nilai yang diatur oleh fungsi setfill().
            //harus menyertakan fungsi header file iomanip
            break;
        case '5':
			cout << "Anda Memilih Seat Purple Konser\n" << "Dengan Tipe Free Standing\n" << "Dengan Harga Rp 1.100.000\n" <<endl;
			cout << "\nJumlah Tiket Yang Dibeli : "; 
			cin >> jum_tiket;
            harga = 1100000;
            membership = (harga * 0.05);
            pajak = (harga * pajak);
            rumus = ((harga - pajak)*jum_tiket);
            bayar = (rumus + membership);
            cout << endl;
            cout << "Waktu Pemesanan Tiket: " << setw(2) << setfill('0') << waktu->tm_hour << ":"
            << setw(2) << setfill('0') << waktu->tm_min << ":" //setw untuk mengatur lebar dari suatu tampilan data.
            << setw(2) << setfill('0') << waktu->tm_sec << endl;
            //setfill untuk menampilkan suatu karakter yang diletakkan didepan nilai yang diatur oleh fungsi setfill().
            //harus menyertakan fungsi header file iomanip
            break;
    }

    cout << endl;
    cout << "--------------------------------" <<endl;
    cout << "|Enter sekali untuk melanjutkan|" <<endl;
    cout << "--------------------------------" <<endl;

    getch(); //memanggil
    system("cls"); //untuk mengenter ke halaman selanjutnya

    headerprogram1();

    cout << "Nomor Idetitas:" << ident << endl;
    cout << "Nama: " << nama << endl;
    cout << "Alamat: " << alamat << endl;
    cout << "Membeli tiket sejumlah : "<< jum_tiket<<endl;
    cout << "Harga 1 tiket : "<<harga<<endl;
    cout << "Anda Kena Pajak sebesar " << pajak <<" dan mendapatkan diskon membership sebesar "<<membership<<endl;
    cout << "Total Bayar Anda : "<< bayar << endl;
    cout << "======================================================" << endl;
    cout << "Pembayaran" << endl;
    cout << "======================================================" << endl;
    cout << "Uang Bayar Anda: ";
    cin >> kembali;
    kembali = kembali - bayar;
    cout << "Uang Kembali Anda: " << kembali << endl;
    cout << endl;

    cout << "Apakah Ingin Membeli Lagi? [Y/T] : "; cin >> lagi;
            if (lagi=='Y' || lagi == 'y')
            {
                cout<<endl;
                goto kembali;
            }
            else if(lagi=='T' || lagi == 't')
            {
            cout << "\n----------------------------------------------------------------------------------------- " <<endl;
            cout << "          Terimakasih "<<nama<<" telah melakukan pembelian tiket di MECIMA PRO            " <<endl;
            cout << "  ----------------------------------------------------------------------------------------- " <<endl;
            cout <<endl;
            }
    footerprogram();
    cout << endl;

    return 0;
}