% A simple function to send a mail from a purticular mail id using googles SMTP server



function mail_nw
myaddress = 'atomcusat@gmail.com';
mypassword = 'itsopen123';

setpref('Internet','E_mail',myaddress);
setpref('Internet','SMTP_Server','smtp.gmail.com');
setpref('Internet','SMTP_Username',myaddress);
setpref('Internet','SMTP_Password',mypassword);

props = java.lang.System.getProperties;
props.setProperty('mail.smtp.auth','true');
props.setProperty('mail.smtp.socketFactory.class', ...
                  'javax.net.ssl.SSLSocketFactory');
props.setProperty('mail.smtp.socketFactory.port','465');

sendmail('meetleopauly@yahoo.com', 'Lab exam', 'Live from Lab :27/3/2014');
end
