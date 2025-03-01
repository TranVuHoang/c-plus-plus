#include <iostream>
using namespace std;

int main()
{
    //Xuất dữ liệu hiển thị ra màn hình
    cout << "Chuong trinh c++ dau tien\n";

    //Nhập dữ liệu từ bàn phím
    float math_score, physical_score, chemistry_score, mean_score;
    cout<< "Moi ban nhap vao diem toan:";
    // Nhập
    cin >> math_score;  

    cout << "Moi ban nhap vao diem ly:";    
    // Nhập
    cin >> physical_score;

    cout << "Moi ban nhap vao diem hoa:";
    // Nhập
    cin >> chemistry_score;

    //Tính điểm trung bình
    cout << "Diem trung binh 3 mon hoc: " << (math_score + physical_score + chemistry_score) / 3;

}