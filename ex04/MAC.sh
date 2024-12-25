ifconfig | grep ether | tr -s '\t' ' ' | cut -d ' ' -f 3
