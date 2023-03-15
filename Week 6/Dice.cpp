#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Hàm mô phỏng quá trình đổ xúc xắc (trả về giá trị từ 1 đến 6)
int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(0));

    int sum1 = 0; // Tổng điểm của người chơi 1
    int sum2 = 0; // Tổng điểm của người chơi 2
    bool player1Turn = true; // Biến đánh dấu lượt chơi của người chơi 1

    // Cách đổi lượt 1: Lần lượt đổ xúc xắc
    while (sum1 < 100 && sum2 < 100) { 
        int dice = rollDice();
        if (player1Turn) {
            sum1 += dice;
            cout << "xuc xac nguoi choi 1: " << dice << "\tTong nguoi 1: " << sum1 << endl;
        } else {
            sum2 += dice;
            cout << "xuc xac nguoi choi 2: " << dice << "\tTong nguoi 2: " << sum2 << endl;
        }
        player1Turn = !player1Turn; // Đổi lượt đổ xúc xắc cho người chơi khác
    }

    
    if (sum1 >= 100 && sum2 >= 100) {
        cout << "Hoa nhau! Ca hai nguoi choi deu dat diem 100!" << endl;
    } else if (sum1 >= 100) {
        cout << "Nguoi choi 1 thang cuoc!" << endl;
    } else {
        cout << "Nguoi choi 2 thang cuoc!" << endl;
    }

    return 0;
}