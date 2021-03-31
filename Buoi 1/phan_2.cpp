// I. Kiểu dữ liệu, biến, hằng

// 1. Giới thiệu các keyword của C++ [https://en.cppreference.com/w/cpp/keyword]

// 2. Các kiểu dữ liệu nguyên thủy [https://quantrimang.com/kieu-du-lieu-trong-cplusplus-156173]

/*
  Bonus: Wide character tương tự như kiểu dữ liệu char, 
  ngoại trừ nó chiếm gấp đôi không gian 
  và kết quả là có thể nhận các giá trị lớn hơn nhiều. 
  char có thể nhận 256 giá trị tương ứng với các mục 
  nhập trong bảng ASCII. Mặt khác,Wide character có thể 
  nhận 65536 giá trị tương ứng với giá trị UNICODE 
  là tiêu chuẩn quốc tế gần đây cho phép mã hóa các 
  ký tự cho hầu hết các ngôn ngữ và ký hiệu thường được sử dụng.
*/


// 3. Hằng số 

/*
  Có 2 cách khai báo hằng số 
  Cách 1: #define ten_hang gia_tri
  Cách 2 : const kieu_du_lieu gia_tri
*/

// 4. Quy tắc đặt tên

/*
  + Tên không được có ký số ở đầu. Ví dụ, 1st, 3ab, ... là sai.
  + Tên không được có dấu cách (space). Ví dụ, a b, he so a, he so b, ... là sai.
  + Tên không được chứa các ký tự đặc biệt như: @, #, $, ...
  + Tên không được trùng với từ khoá (keyword)
  + Hai biến bất kỳ nào đó nằm trong một hàm không được có cùng tên.
  + Hai biến bất kỳ nào đó nằm ngoài các hàm không được có cùng tên.
  + Tên biến không được trùng với tên hằng.
  + Có thể đặt tên biến hay tên hằng có cùng tên với tên hàm chứa nó, nhưng không nên làm điều này.
*/


// 5. Boolean - kiểu true / false


// Code ví dụ phan_2_vd.cpp


