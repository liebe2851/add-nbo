# add-nbo BoB 11기 과제 입니다. 

예시로 사용 할 수 있는 thousand.bin과 five-hundred.bin을 함께 올려놓았습니다. 

echo -n -e \\x00\\x00\\x03\\xe8 > thousand.bin

echo -n -e \\x00\\x00\\x01\\xf4 > five-hundred.bin

#example
$./add-nbo thousand.bin five-hundred.bin
1000(0x3e8) + 500(0x1f4) = 1500(0x5dc)
