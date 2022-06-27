#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "ucup";    
    data1.NIM = "12341234";
    data1.jurusan = "ilkom";
    data1.IPK = 10;
    Mahasiswa data2;
    data2.nama = "udang";    
    data2.NIM = "323232";
    data2.jurusan = "tani";
    data2.IPK = 8;
    cout << "nama dari data 1 adalah: " << data1.nama << endl;
    cout << "nim dari data 1 adalah: " << data1.NIM << endl;
    cout << "jurusan dari data 1 adalah: " << data1.jurusan << endl;
    cout << "IPK dari data 1 adalah: " << data1.IPK << endl;
    cout << "\n" << endl;
    cout << "nama dari data 2 adalah: " << data2.nama << endl;
    cout << "nim dari dari data 2 adalah: " << data2.NIM << endl;
    cout << "jurusan dari data 2 adalah: " << data2.jurusan << endl;
    cout << "IPK dari data 2 adalah: " << data2.IPK << endl;

    return 0;
}
