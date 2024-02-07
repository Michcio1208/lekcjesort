-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 07 Lut 2024, 13:58
-- Wersja serwera: 10.4.24-MariaDB
-- Wersja PHP: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `zawodnicy`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `szkoly`
--

CREATE TABLE `szkoly` (
  `IDS` int(11) NOT NULL,
  `szkola` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `zaw`
--

CREATE TABLE `zaw` (
  `IDZ` int(11) NOT NULL,
  `imie` varchar(20) DEFAULT NULL,
  `nazwisko` varchar(20) DEFAULT NULL,
  `ID_szkoly` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `szkoly`
--
ALTER TABLE `szkoly`
  ADD PRIMARY KEY (`IDS`);

--
-- Indeksy dla tabeli `zaw`
--
ALTER TABLE `zaw`
  ADD PRIMARY KEY (`IDZ`),
  ADD KEY `ID_szkoly` (`ID_szkoly`);

--
-- Ograniczenia dla zrzutów tabel
--

--
-- Ograniczenia dla tabeli `zaw`
--
ALTER TABLE `zaw`
  ADD CONSTRAINT `zaw_ibfk_1` FOREIGN KEY (`ID_szkoly`) REFERENCES `szkoly` (`IDS`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
