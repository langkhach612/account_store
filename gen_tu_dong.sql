DELIMITER //

CREATE FUNCTION generate_random_string()
RETURNS varchar(10)
DETERMINISTIC
BEGIN
    DECLARE varchars varchar(62) DEFAULT '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
    DECLARE result varchar(10) DEFAULT '';
    DECLARE i INT DEFAULT 0;
    WHILE i < 10 DO
        SET result = CONCAT(result, SUBSTRING(varchars, FLOOR(1 + RAND() * 62), 1));
        SET i = i + 1;
    END WHILE;
    RETURN result;
END //

DELIMITER ;