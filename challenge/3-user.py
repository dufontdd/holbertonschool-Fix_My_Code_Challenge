def is_valid_password(self, pwd):
    return self.encrypt_password(pwd) == self.__password
