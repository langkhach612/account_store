CREATE DATABASE IF NOT EXISTS gym;
USE gym;
CREATE TABLE IF NOT EXISTS admin (
    id INT AUTO_INCREMENT PRIMARY KEY,
    email VARCHAR(255) NOT NULL,
    username VARCHAR(255) NOT NULL,
    password VARCHAR(255) NOT NULL
);
INSERT INTO admin (email, username, password) VALUES
('admin@example.com', 'admin', 'admin123'),
('user1@example.com', 'user1', 'password1'),
('user2@example.com', 'user2', 'password2');

CREATE TABLE IF NOT EXISTS coach (
    id INT AUTO_INCREMENT PRIMARY KEY,
    coachId VARCHAR(50),
    name VARCHAR(100),
    address VARCHAR(255),
    gender VARCHAR(10),
    phoneNum INT,
    status VARCHAR(50)
);

CREATE TABLE IF NOT EXISTS coach1 (
    id INT AUTO_INCREMENT PRIMARY KEY,
    coachId VARCHAR(50),
    name VARCHAR(100),
    address VARCHAR(255),
    address1 varchar(255),
    gender VARCHAR(10),
    phoneNum INT,
    status VARCHAR(50)
);

INSERT INTO `coach` (`id`, `coachId`, `name`, `address`, `gender`, `phoneNum`, `status`) VALUES
(2, 'CID-101', 'Marco Man', 'Test (1) Address', 'Male', 1231248125, 'Active'),
(3, 'CID-102', 'Trial (2)', 'Test (2) Address', 'Male', 2139239284, 'Active'),
(4, 'CID-103', 'Trial (3)', 'Trial (3)', 'Female', 1236125262, 'Active');

INSERT INTO `coach1` (`id`, `coachId`, `name`, `address`, `address1`, `gender`, `phoneNum`, `status`) VALUES
(2, 'CID-101', 'Marco Man', 'Test (1) Address', 'Test (1) Address', 'Male', 1231248125, 'Active'),
(3, 'CID-102', 'Trial (2)', 'Test (2) Address', 'Test (1) Address' ,'Male', 2139239284, 'Active'),
(4, 'CID-103', 'Trial (3)', 'Trial (3)', 'Test (1) Address', 'Female', 1236125262, 'Active');


CREATE TABLE IF NOT EXISTS `member` (
  `id` int(11) NOT NULL AUTO_INCREMENT PRIMARY KEY,
  `memberId` varchar(100) NOT NULL,
  `name` varchar(100) NOT NULL,
  `address` varchar(500) NOT NULL,
  `phoneNum` int(100) NOT NULL,
  `gender` varchar(100) NOT NULL,
  `schedule` varchar(100) NOT NULL,
  `startDate` date DEFAULT NULL,
  `endDate` date DEFAULT NULL,
  `price` double NOT NULL,
  `status` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;



INSERT INTO `member` (`id`, `memberId`, `name`, `address`, `phoneNum`, `gender`, `schedule`, `startDate`, `endDate`, `price`, `status`) VALUES
(8, '101', 'Tuan', 'Thai Ha', 8888, 'Male', '11AM - 1PM', '2023-01-02', '2023-04-12', 5000, 'Paid'),
(9, '102', 'Khoi', 'Minh Khai', 12323123, 'Female', '3PM - 5PM', '2023-01-03', '2023-03-21', 3850, 'Paid'),
(10, '103', 'Vinh', 'Dai Tu', 1253633, 'Male', '3PM - 5PM', '2023-01-04', '2023-02-13', 2000, 'Paid'),
(11, '104', 'Hoang', 'Dinh Cong', 1246365324, 'Others', '5PM - 7PM', '2023-01-05', '2023-03-19', 3650, 'Paid'),
(12, '105', 'Hung', 'Hoang Mai', 1246365324, 'Others', '5PM - 7PM', '2023-01-05', '2023-03-19', 3650, 'Paid');


ALTER TABLE `admin`
  ADD PRIMARY KEY (`id`);


ALTER TABLE `coach`
  ADD PRIMARY KEY (`id`);
  
coach1ALTER TABLE `coach1`
  ADD PRIMARY KEY (`id`);


ALTER TABLE `member`
  ADD PRIMARY KEY (`id`);


ALTER TABLE `admin`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;


ALTER TABLE `coach`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

ALTER TABLE `member`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;
  
member  ALTER TABLE `coach1`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=30;
COMMIT;


