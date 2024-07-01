DELIMITER //

CREATE TRIGGER before_insert_tai_khoan
BEFORE INSERT ON tai_khoan
FOR EACH ROW
BEGIN
    IF NEW.id_tai_khoan IS NULL THEN
        SET NEW.id_tai_khoan = generate_random_string();
    END IF;
END //

DELIMITER ;
