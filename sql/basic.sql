{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": [
    "CREATE TABLE branch(\n",
    "    branch_name char(20),\n",
    "    branch_city char(20),\n",
    "    assets int,\n",
    "    PRIMARY KEY(branch_name)\n",
    ");\n",
    "\n",
    "\n",
    "INSERT INTO branch(branch_name,branch_city,assets)\n",
    "VALUES('Agrabad branch', 'Chittagong', '900K');\n",
    "\n",
    "INSERT INTO branch(branch_name,branch_city,assets)\n",
    "VALUES('Khulshi branch', 'Chittagong', '500K');\n",
    "\n",
    "INSERT INTO branch(branch_name,branch_city,assets)\n",
    "VALUES('Gulshan branch', 'Dhaka', '1000K');\n",
    "\n",
    "\n",
    "CREATE TABLE account(\n",
    "    account_number char(20),\n",
    "    branch_name char(20),\n",
    "    balance int,\n",
    "    PRIMARY KEY(account_number),\n",
    "    FOREIGN KEY(branch_name) REFERENCES branch(branch_name));\n",
    "\n",
    "\n",
    "INSERT INTO account(account_number,branch_name,balance)\n",
    "VALUES('A-001','Gulshan branch', '25K');\n",
    "\n",
    "INSERT INTO branch(branch_name,branch_city,assets)\n",
    "VALUES('Banani branch', 'Dhaka', '700K');\n",
    "\n",
    "INSERT INTO account(account_number,branch_name,balance)\n",
    "VALUES('A-001','Gulshan branch', '25K');\n",
    "\n"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 1,
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "ND\n"
     ]
    }
   ],
   "source": [
    "print(\"ND\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 11,
   "metadata": {},
   "outputs": [
    {
     "ename": "TypeError",
     "evalue": "'str' object is not callable",
     "output_type": "error",
     "traceback": [
      "\u001b[1;31m---------------------------------------------------------------------------\u001b[0m",
      "\u001b[1;31mTypeError\u001b[0m                                 Traceback (most recent call last)",
      "Cell \u001b[1;32mIn[11], line 2\u001b[0m\n\u001b[0;32m      1\u001b[0m new_list \u001b[39m=\u001b[39m \u001b[39mlist\u001b[39m()\n\u001b[1;32m----> 2\u001b[0m num \u001b[39m=\u001b[39m \u001b[39minput\u001b[39;49m(\u001b[39m\"\u001b[39;49m\u001b[39mHow many elements you want ?\u001b[39;49m\u001b[39m\"\u001b[39;49m)\n\u001b[0;32m      4\u001b[0m \u001b[39mfor\u001b[39;00m i \u001b[39min\u001b[39;00m \u001b[39mrange\u001b[39m(\u001b[39mint\u001b[39m(num)):\n\u001b[0;32m      5\u001b[0m     n \u001b[39m=\u001b[39m \u001b[39minput\u001b[39m()\n",
      "\u001b[1;31mTypeError\u001b[0m: 'str' object is not callable"
     ]
    }
   ],
   "source": [
    "new_list = list()\n",
    "num = input(\"How many elements you want ?\")\n",
    "\n",
    "for i in range(int(num)):\n",
    "    n = input()\n",
    "    new_list.append(int(n))\n",
    "    new_list.sort()\n",
    "\n",
    "print(f\"My list : {new_list}\")"
   ]
  },
  {
   "attachments": {},
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "Questions -> the select clause"
   ]
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.11.1 (tags/v3.11.1:a7a450f, Dec  6 2022, 19:58:39) [MSC v.1934 64 bit (AMD64)]"
  },
  "orig_nbformat": 4,
  "vscode": {
   "interpreter": {
    "hash": "e8a7989adf5969ac944ea0d01faadbc566a5702dba254062d02e69ec8f957a1a"
   }
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
