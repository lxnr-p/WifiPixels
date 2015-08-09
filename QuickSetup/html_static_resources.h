#include <ESP8266WiFi.h>
const String wifi_html  = 
"<!DOCTYPE html>"
"<html>"
"<head>"
"  <meta charset=""UTF-8"">"
" <meta name=""viewport"" content=""width=310px"">"
" <title>Wifi Setup</title>"
"<style>"
"table, th, td {"
"    border: 1px solid black;"
"    border-collapse: collapse;"
"}"
"th, td {"
"    padding: 5px;"
"}"
"</style>"
"<script type=""text/javascript"">"
"</script>"
"</head>"
"<body>"
" <table border=""1"" style=""width:300px"">"
"   <tr>"
"   <th colspan=""2"" bgcolor=""black""><font color=""white"">WIFI Settings</font></td>"
"   </tr>"
"   <tr><td>Network:</td><td>$Network$</td><tr>"
"   <tr><td>Status:</td><td>$Status$</td><tr>"
"   <tr><td>IP:</td><td>$IP$</td><tr>"
"   <tr><td>Mode:</td><td>$Mode$</td><tr>"
"   <tr><td colspan=""2""><input type=""Button"" value=""Turn Hotspot ON"" /></td><tr>"
" </table>"
" <br>"
" <form  action=""wifisetup.html"" method=""post"">"
" <table border=""1"" style=""width:300px"">"
"   <tr>"
"   <th colspan=""2"" bgcolor=""black""><font color=""white"">WIFI Connections</font></td>"
"   </tr>"
"   <tr><td>$APs$</td>"
"   <tr>"
"   <tr><td colspan=""2"">Password: <input name=""pw"" type=""password"" value="""" style=""width: 100px;"" /></td><tr>"
"   <tr><td colspan=""2""><!--button onclick=""location.href='wifi.html';"">Refresh</button--> <input type=""submit"" value=""Connect"" /></td><tr>"
" </table>"
" </form>"
"</body>"
"</html>";
