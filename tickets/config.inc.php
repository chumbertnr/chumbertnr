<?PHP
    /*
    Nombre: config.inc.php
    Autor: Julio Tuozzo
    Función: Plantilla de variables de conexión con la base de datos.
    Function: Group of variables of database conection.
    Ver: 2.12
*/
    $Host = '127.0.0.1'; // Nombre del servidor de la base de datos MySQL.
                             // Name of the MySQL data base server.

    $Usuario = 'root'; // usuario con que PHD Help Desk se conectará a la base de datos.
                           // user whereupon PHD Help Desk will connect to the MySQL data base.
                           
    $Contrasena = '1162926'; // contraseña del usuario.
                                  // User's password.

    $Base = 'tasks'; // nombre de la base de datos.
                    	         // data base name.

    $Include = './include/'; /* Ruta donde se encuentran los archivos que se llaman en require() / include ()
                                IMPORTANTE: Si quiere utilizar la ruta configurada en la variable "include_path" de php.ini
                                deje esta variable en blanco   
                              Path of the files called by  require() / include ()
                               WARNING: If you wish to use the path of the "include_path" variable, placed in php.ini file, leave
                               empty this variable*/
                              
                        
    $MyPHD = '';  // Prefijo de los nombres de las tablas en esta instalación
                        // Tables name prefix in this installation.
                  
# Variables de conexión con el servidor de correo.
// E-mail server conection variables
    $Mail_host = 'smtp.googlemail.com';
    $Mail_usuario = 'humberto.tijerina@bias.com.mx';
    $Mail_clave = 'humberto.tijerina';
    $Mail_port = 25;

    # Variables de instalación
    // Installation variables.

    
    $VPHD='2.12';
?>
