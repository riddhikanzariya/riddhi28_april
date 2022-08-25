-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 15, 2022 at 12:12 PM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 7.4.29

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `my_project`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `Employee_id` int(11) NOT NULL,
  `First_name` varchar(50) NOT NULL,
  `Last_name` varchar(50) NOT NULL,
  `Salary` bigint(20) NOT NULL,
  `Joining_date` datetime NOT NULL,
  `Department` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`Employee_id`, `First_name`, `Last_name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'john', 'abraham', 1000000, '2013-01-01 12:00:00', 'banking'),
(2, 'michael', 'clarke', 800000, '2013-01-01 12:00:00', 'insurance'),
(3, 'roy', 'thomas', 700000, '2013-02-01 12:00:00', 'banking'),
(4, 'tom', 'jose', 600000, '2013-02-01 12:00:00', 'insurance'),
(5, 'jerry', 'pinto', 650000, '2013-02-01 12:00:00', 'insurance'),
(6, 'philip', 'mathew', 750000, '2013-01-01 12:00:00', 'services'),
(7, 'testname1', '123', 650000, '2013-01-01 12:00:00', 'services'),
(8, 'testname2', 'lname%', 600000, '2013-01-01 12:00:00', 'insurance');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
