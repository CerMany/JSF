#include <iostream>

class SharedData {
private:
    int* data;

public:
    SharedData(int value) {
        data = new int(value);
        std::cout << "Object created with data: " << *data << std::endl;
    }

    ~SharedData() {
        delete data;
        std::cout << "Object destroyed." << std::endl;
    }

    // Getter
    int getData() const {
        return *data;
    }
};

int main() {
    SharedData obj1(10);
    SharedData obj2 = obj1;

    std::cout << "obj1 data: " << obj1.getData() << std::endl;
    std::cout << "obj2 data: " << obj2.getData() << std::endl;

    return 0;
}
//khi hai đối tượng chia sẻ cùng một vùng nhớ, và khi một trong chúng bị hủy, việc giải phóng bộ nhớ có thể gây ra lỗi cho đối tượng còn lại
/*Trong ví dụ này, lớp SharedData chứa một con trỏ data trỏ đến một giá trị nguyên được cấp phát động trong constructor.
Khi chúng ta sao chép obj1 thành obj2, obj2 chỉ đơn giản là sao chép con trỏ data của obj1, không phải là dữ liệu mà nó đang trỏ đến.
Do đó, cả obj1 và obj2 đều chia sẻ cùng một vùng nhớ. Khi chúng ta kết thúc chương trình, destructor được gọi tự động cho cả obj1 và obj2.
Tuy nhiên, cả obj1 và obj2 đều cố gắng giải phóng bộ nhớ cho cùng một vùng nhớ mà con trỏ data của chúng đang trỏ đến.
Điều này gây ra lỗi double delete, khiến chương trình có thể gặp phải lỗi runtime. Trong trường hợp này, khi obj1 hoặc obj2 được hủy đầu tiên,
con trỏ data của đối tượng còn lại sẽ trỏ vào một vùng nhớ không tồn tại, gây ra lỗi khi đối tượng còn lại cố gắng giải phóng bộ nhớ.*/
