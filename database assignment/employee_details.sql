-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 15, 2022 at 07:25 PM
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
-- Database: `myproject`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee_details`
--

CREATE TABLE `employee_details` (
  `firstname` varchar(40) NOT NULL,
  `lastname` varchar(30) NOT NULL,
  `address` varchar(30) NOT NULL,
  `city` varchar(50) NOT NULL,
  `age` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `employee_details`
--

INSERT INTO `employee_details` (`firstname`, `lastname`, `address`, `city`, `age`) VALUES
('Mickey', 'Mouse', '123 Fantasy Way', 'Anaheim', 73),
('Bat', 'Man', '321 Cavern Ave', 'Gotham', 54),
('Wonder', 'Woman', '987 Truth Way', 'Paradise', 39),
('Donald', 'Duck', '555 Quack Street', 'Mallard', 65),
('Bugs', 'Bunny', '567 Carrot Street', 'Rascal', 58),
('Wiley', 'Coyote', '999 Acme Way', 'Canyon', 61),
('Cat', 'Woman', '234 Purrfect Street', 'Hairball', 32),
('Tweety', 'Bird', '543', 'itotltaw', 28);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
