-- tạo 1 database có tên 'acc'
CREATE TABLE `acc`.`nguoi_dung` ( -- tạo bảng người dùng
  `CCCD` VARCHAR(12) NOT NULL,
  `ho_ten` VARCHAR(45) NOT NULL,
  `dia_chi` VARCHAR(45) NOT NULL,
  `so_dien_thoai` VARCHAR(11) NULL,
  PRIMARY KEY (`CCCD`));
  
  CREATE TABLE `anguoi_dungcc`.`tai_khoan` ( -- tạo bảng tài khoản
  `id_tai_khoan` VARCHAR(10) NOT NULL,
  `ten_tai_khoan` VARCHAR(45) NOT NULL,
  `mat_khau` VARCHAR(45) NOT NULL,
  `so_du` INT NOT NULL,
  `CCCD` VARCHAR(12) NOT NULL,
  PRIMARY KEY (`id_tai_khoan`),
  INDEX `FK_CCCD_idx` (`CCCD` ASC) VISIBLE,
  CONSTRAINT `FK_CCCD`
    FOREIGN KEY (`CCCD`)
    REFERENCES `acc`.`nguoi_dung` (`CCCD`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

CREATE TABLE `acc`.`acc_list` ( -- tạo bảng danh sách acc
  `id_acc` VARCHAR(45) NOT NULL,
  `ten_tai_khoan` VARCHAR(45) NOT NULL,
  `mat_khau` VARCHAR(45) NOT NULL,
  `gia_tien` INT NOT NULL,
  `loai` VARCHAR(45) NOT NULL,
  `id_tai_khoan` VARCHAR(10) NULL,
  PRIMARY KEY (`id_acc`),
  INDEX `FK_id_taikhoan_idx` (`id_tai_khoan` ASC) VISIBLE,
  CONSTRAINT `FK_id_taikhoan`
    FOREIGN KEY (`id_tai_khoan`)
    REFERENCES `acc`.`tai_khoan` (`id_tai_khoan`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);acc_list
    
CREATE TABLE `acc`.`giao_dich_list` ( -- tạo bảng danh sách giao dịch
  `id_giaodich` VARCHAR(10) NOT NULL,
  `thoi_gian` DATETIME NOT NULL,
  `loai` VARCHAR(4) NOT NULL,
  `id_acc` VARCHAR(45) NOT NULL,
  `id_tai_khoan` VARCHAR(10) NOT NULL,
  PRIMARY KEY (`id_giaodich`),
  INDEX `FK_acc_idx` (`id_acc` ASC) VISIBLE,
  INDEX `FK_tai_khoan_idx` (`id_tai_khoan` ASC) VISIBLE,
  CONSTRAINT `FK_acc`
    FOREIGN KEY (`id_acc`)
    REFERENCES `acc`.`acc_list` (`id_acc`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `FK_tai_khoan`
    FOREIGN KEY (`id_tai_khoan`)
    REFERENCES `acc`.`tai_khoan` (`id_tai_khoan`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);
    