#function for establishing a serial communication between matlab and arduino


function codeforserialmatlab_n()
i=0;
s=0;
obj=serial('com6');
fopen(obj); 
        while(1)
         
             s=fscanf(obj) ;
         if(s=='1')
            capturecode;
            fprintf(obj,'2') 
            i=i+1;
          i;
         %if (i==10) 
             break
         %end
         end
        end
          
        fclose(obj);
        delete(obj);
        fclose('all')
        
end
    
        
        
            
    
