<?PHP
/*
    Nombre: login.inc
    Funci�n: Formulario de ingreso de operador y contrase�a
    Function: Operator entrance and password
    Ver: 2.12
    Modified By: @chumbert_nr
*/


require('head.inc');
echo "<body>
<span style='position:absolute; left:10px'>
    <h4>Help Desk Tickets<br /> <small>OpenBias</small></h4>
</span>
<span style='position:absolute; right:10px'>
    <h4 class='menu'><a href='' onclick=\"window.open('help.php','','width=250,height=390,scrollbars=0,resizable=1,toolbar=0,location=0,menubar=0,status=0,directories=0')\">$Help</a></h4>

</span>

<br style='line-height:2.8;'/>

<div style='text-align:center'>
<span style='font-size:20px;font-family:helvetica;color:#3A29F3;font-weight:bold;'>Tickets System</span>
</div>
<br style='line-height:3.8;'/>

<br />
<div id='login'>

   <h3 style='text-align:center'>$Log_in</h3><br />

   <form method='post' action='login.php' >
	$Operator: &nbsp; &nbsp; <input type='text' name='operador' value='$operador'  size='15' maxlength='15'> <br /> <br />
    $Password: <input type='password' name='contrasenia' size='16'maxlength='16'> <br /> <br />

    	    <input class='boton' type='submit' value='$Enter' name='submit'>

</div>
<p style='text-align:center' id='forgot_text'><a href='#' onfocus=\"document.getElementById('forgot').style.visibility='visible'; document.getElementById('forgot_text').style.visibility='hidden';
document.getElementById('error').style.visibility='hidden'; \">$Forgot_password</a></p>
<p class='error' id='error'> $mensaje </p>

<p style='visibility:hidden; text-align:center; font-weight:bold;' id='forgot'>
<img id='captcha' src='./securimage/securimage_show.php' alt='CAPTCHA Image' /><br /><br />
$Input_the_code <input type='text' name='captcha' size='4' maxlength='4' />
 $And_press  <input type='submit' class='boton' name='genera'  value='$Gener_new_pswd' onclick='this.value=\"Wait...\"' />  </p>

<br />
<div style='text-align:center'><h3 class='menu' ><a href='user_request.php' >
<img src='./images/usuario.gif' alt='$User_request_access' border='0' /> $User_request_access</a></h3></div>
</form>

$js_muestro_captcha

</body>

</html>";
?>
