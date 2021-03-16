#include <iostream>

using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
   // in địa chỉ của x tại đây
}
void g(int yval)
{
   int y;
   cout << &y;
   // in địa chỉ của y tại đây
}
int main()
{
   f(7);
   g(11);
   return 0;
}
//Địa chỉ của biến x và biến y là giống nhau vì vị trí của stack frame cho hàm f khi nó chạy trùng 
với vị trí của hàm g khi nó được gọi (đều bắt đầu trên đỉnh stack của hàm main), cả hai hàm f và g 
cùng có 1 tham số kiểu int, cùng kiểu trả về, x và y cùng là biến địa phương đầu tiên của hàm, do 
đó trình biên dịch xếp x và y ở cùng một địa chỉ.

