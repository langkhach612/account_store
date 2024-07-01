DELIMITER //

CREATE TRIGGER before_insert_giao_dich
BEFORE INSERT ON giao_dich_list
FOR EACH ROW
BEGIN
    IF NEW.id_giaodich IS NULL THEN
        SET NEW.id_giaodich = generate_random_string();
    END IF;
END //

DELIMITER ;