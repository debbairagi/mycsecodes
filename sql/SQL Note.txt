CREATE TABLE branch(
    branch_name char(20),
    branch_city char(20),
    assets int,
    PRIMARY KEY(branch_name)
);


INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Agrabad branch', 'Chittagong', '900K');

INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Khulshi branch', 'Chittagong', '500K');

INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Gulshan branch', 'Dhaka', '1000K');


CREATE TABLE account(
    account_number char(20),
    branch_name char(20),
    balance int,
    PRIMARY KEY(account_number),
    FOREIGN KEY(branch_name) REFERENCES branch(branch_name));


INSERT INTO account(account_number,branch_name,balance)
VALUES('A-001','Gulshan branch', '25K');

INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Banani branch', 'Dhaka', '700K');

INSERT INTO account(account_number,branch_name,balance)
VALUES('A-001','Gulshan branch', '25K');

CREATE TABLE info(
    id int PRIMARY KEY NOT NULL,
    name varchar(20),
    batch varchar(20),
    major varchar(20),
    blood_Group char(10),
    phone_number int(11),
    email_address varchar(20)
);

CREATE TABLE info(
    id int AUTO_INCREMENT PRIMARY KEY NOT NULL,
    name varchar(20),
    batch varchar(20),
    major varchar(20),
    blood_Group char(10),
    phone_number int(11),
    email_address varchar(20)
);
