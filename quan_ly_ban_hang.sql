set dateformat DMY
create DATABASE test_huynhvch
use test_huynhvch
Create table KHACHHANG
(
	MAKH		char(4) primary key,
	HOTEN		varchar(40),
	DCHI		varchar(50),
	SODT		varchar(20),
	NGSINH		smalldatetime,
	DOANHSO		money,
	NGDK		smalldatetime,
	CMND		varchar(10)
)

Create table NHANVIEN
(
	MANV		char(4) primary key,
	HOTEN		varchar(40),
	NGVL		smalldatetime,
	SODT		varchar(20)
)

Create table SANPHAM
(
	MASP		char(4) primary key,
	TENSP		varchar(40),
	DVT			varchar(40),
	NUOCSX		varchar(40),
	GIA			money,
)
Create table HOADON
(
	SOHD		int primary key, 
	NGHD		smalldatetime, 
	MAKH		char(4), 
	MANV		char(4),
	TRIGIA		money
)
Create table CTHD
(
	SOHD		int foreign key references HOADON(SOHD),
	MASP		char(4) foreign key references SANPHAM(MASP),
	SL			int
)