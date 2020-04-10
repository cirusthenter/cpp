for file in 1.*
  do
     mv -i "$file" "${file/1./}"
  done