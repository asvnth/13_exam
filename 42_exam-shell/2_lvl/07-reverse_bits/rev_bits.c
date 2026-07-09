unsigned char	reverse_bits(unsigned char oct){
    unsigned char result = 0;
    int i = 0;
    while (i < 8){
        result |= ((oct >> i) & 1) << (7 - i);
        i++;
    }
    return (result);
}
