/*
9. Data Control Language (DCL)
Lab 1: Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table.
Lab 2: Revoke the INSERT permission from user1 and give it to user2.
*/

CREATE ROLE USER1;

CREATE USER user1 IDENTIFIED BY 'us1@123' DEFAULT ROLE USER1;

CREATE USER user2 IDENTIFIED BY 'us2@123' DEFAULT ROLE USER1;

GRANT SELECT ON courses TO user1;

REVOKE SELECT ON courses FROM user1;

GRANT INSERT on courses TO user2;