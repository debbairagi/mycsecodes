CREATE TABLE branch(
    branch_name char(20),
    branch_city char(20),
    assets int,
    PRIMARY KEY(branch_name)
);


INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Khulna branch', 'Khulna', 900000);

INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Jessore branch', 'Jessore', 500000);

INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Koyra branch', 'Khulna', 1000000);

INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Dumuria branch', 'Khulna', 7000000);

INSERT INTO branch(branch_name,branch_city,assets)
VALUES('Gournodi branch', 'Barisal', 400000);



CREATE TABLE account(
    account_number char(20),
    branch_name char(20),
    balance int,
    PRIMARY KEY(account_number),
    FOREIGN KEY(branch_name) REFERENCES branch(branch_name)
);


INSERT INTO account(account_number,branch_name,balance)
VALUES('A-001','Khulna branch', 25000);

INSERT INTO account(account_number,branch_name,balance)
VALUES('A-002','Gournodi branch', 35000);

INSERT INTO account(account_number,branch_name,balance)
VALUES('A-003','Dumuria branch', 15000);

INSERT INTO account(account_number,branch_name,balance)
VALUES('A-004','Koyra branch', 45000);

INSERT INTO account(account_number,branch_name,balance)
VALUES('A-005','Jessore branch', 70000);


