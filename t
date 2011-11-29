echo "Make"
make sim-cache &> /dev/null

./sim-cache -config mb/q3.cfg mb/3
