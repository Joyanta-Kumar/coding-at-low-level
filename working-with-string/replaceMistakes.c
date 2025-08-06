char *correct(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
      switch(string[i]) {
        case '5': string[i] = 'S'; break;
        case '1': string[i] = 'I'; break;
        case '0': string[i] = 'O'; break;
      }
    }
    return string;
}