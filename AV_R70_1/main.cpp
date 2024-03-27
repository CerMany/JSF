class A
{
public:
    ~A() { /* Hàm hủy của A */ }
};

void foo()
{
    static A a; // Biến cục bộ tĩnh của kiểu A
    // Hàm hủy của biến A sẽ được gọi khi chương trình kết thúc
}

class B
{
public:
    ~B()
    {
        foo(); // Hàm hủy của B gọi hàm foo
        // Lúc này, nếu biến cục bộ tĩnh a trong foo đã bị hủy, việc truy cập a sẽ gây ra hành vi không xác định.
    }
};

static B B_var; // Biến cục bộ tĩnh của kiểu B

// Hàm hủy của B sẽ được gọi khi chương trình kết thúc.
