echo program to find appropriate age msg 
echo enter your age
read age 
if [ $age -ge 18 -o $age -lt 30 ]
 then 
    echo you are teen ager and you must focussed towards your future
elif [ $age -ge 31 -o $age -lt 60]
 then    
    echo take care your family
elif [ $age -ge 61 -o $age -ge 100]
 then 
    echo ecpend your time happily
fi
