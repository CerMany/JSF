class Base
{
 public:
 Base (int x) : base_member (x) { }
 Base (const Base& rhs) : base_member (rhs.base_member) {}
 private:
 int base_member;
};

class Derived : public Base
{
 public:
 Derived (int x, int y, int z) : Base (x),
 derived_member_1 (y),
 derived_member_2 (z) { }
 Derived(const Derived& rhs) : Base(rhs),
 derived_member_1 (rhs.derived_member_1),
 derived_member_2 (rhs.derived_member_2) { }
 private:
 int derived_member_1;
 int derived_member_2;
};

//Định nghĩa lớp không khai báo rõ ràng một hàm tạo bản sao nên hàm tạo bản sao sẽ
//được khai báo mặc định với chữ ký X(const X&, int)
struct X {
 X(const X&, int);
};
//khi định nghĩa một constructor khác với cùng một chữ ký nhưng có một đối số mặc định
X::X(const X& x, int i =0) { /* ... */ }
