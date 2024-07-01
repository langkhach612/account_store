-- Vô hiệu hóa ràng buộc khóa ngoại
SET foreign_key_checks = 0;

-- Tạo bản sao tạm thời của bảng tai_khoan với các giá trị khóa chính mới
CREATE TEMPORARY TABLE temp_tai_khoan AS
SELECT id_tai_khoan, generate_random_string() AS new_id
FROM tai_khoan;

-- Cập nhật giá trị khóa chính trong bảng tai_khoan
UPDATE tai_khoan tk
JOIN temp_tai_khoan temp ON tk.id_tai_khoan = temp.id_tai_khoan
SET tk.id_tai_khoan = temp.new_id WHERE tk.id_tai_khoan = temp.id_tai_khoan;

-- Cập nhật giá trị khóa phụ trong bảng acc_list
UPDATE acc_list al
JOIN temp_tai_khoan temp ON al.id_tai_khoan = temp.id_tai_khoan
SET al.id_tai_khoan = temp.new_id WHERE al.id_tai_khoan = temp.id_tai_khoan;

-- Cập nhật giá trị khóa phụ trong bảng giao_dich_list
UPDATE giao_dich_list gd
JOIN temp_tai_khoan temp ON gd.id_tai_khoan = temp.id_tai_khoan
SET gd.id_tai_khoan = temp.new_id WHERE gd.id_tai_khoan = temp.id_tai_khoan;

-- Bật lại ràng buộc khóa ngoại
SET foreign_key_checks = 1;
