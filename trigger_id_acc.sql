DELIMITER //

CREATE TRIGGER before_insert_acc
BEFORE INSERT ON acc_list
FOR EACH ROW
BEGIN
    IF NEW.id_acc IS NULL THEN
        SET NEW.id_acc = generate_random_string();
    END IF;
END //

DELIMITER ;