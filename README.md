Dự án Giám sát Nhiệt độ dùng cảm biến LM35 và Arduino
📝 Giới thiệu
Dự án này được thực hiện nhằm mục đích đo lường và giám sát nhiệt độ môi trường sử dụng cảm biến Analog LM35 và board mạch Arduino. Dữ liệu nhiệt độ sẽ được xử lý và hiển thị trực tiếp lên Serial Monitor/Serial Plotter của Arduino IDE.

🚀 Tính năng
Đọc giá trị điện áp từ cảm biến LM35 thông qua cổng Analog (A0).
Chuyển đổi giá trị Analog sang độ C với độ chính xác cao.
Hiển thị dữ liệu dưới dạng văn bản và đồ thị thời gian thực.
Hệ thống cảnh báo qua Serial khi nhiệt độ vượt ngưỡng (tùy chọn

🛠 Linh kiện sử dụng
Aruino Uno R3
Cảm biến LM35

💻 Hướng dẫn cài đặt
- Kết nối phần cứng:
Chân VCC của LM35 -> 5V Arduino.
Chân Out của LM35 -> Analog Pin A0 Arduino.
Chân GND của LM35 -> GND Arduino.
- Nạp code:
Mở file LM35_TempReader.ino bằng Arduino IDE.
Chọn đúng Board và Cổng COM.
Nhấn Upload.
