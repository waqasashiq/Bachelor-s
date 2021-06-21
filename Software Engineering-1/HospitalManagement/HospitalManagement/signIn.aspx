<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="signIn.aspx.cs" Inherits="HospitalManagement.signIn" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head runat=server>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>SignIn</title>
<meta name="keywords" content="free css templates, education, school, college, university, templatemo.com" />
<meta name="description" content="Education template is for academic related websites" />
<link href="templatemo_style.css" rel="stylesheet" type="text/css" />
    <style type="text/css">
        .style1
        {
            width: 130px;
        }
        #signinform
        {
            width: 335px;
        }
    </style>
</head>
<body>
<div id="templatemo_header_wrapper">
    <div id="templatemo_header">    
    </div> <!-- end of templatemo_header -->

</div> <!-- end of templatemo_menu_wrapper -->

<div id="templatemo_menu_wrapper">
    <div id="templatemo_menu">
        <ul>
            <li><a href="Default.aspx" class="current">Home</a></li>
            <li><a href="signUp.aspx">Sign Up</a></li>
            <li><a href="#">Sign In</a></li>
            <li><a href="#">About Us</a></li>
            <li><a href="#">Contact Us</a></li>
            <li><a href="#"></a></li>
        </ul>    	
    </div>
</div>

<form id="signinform" name="signIn" action="" runat=server >
	<fieldset style="width:200px; height:auto;">
		<legend runat=server><h3  style="color: ivory;">
            <asp:Label ID="Label1" runat="server" Text="Login Form"></asp:Label></h3>
        </legend>
		<table style="width: 200px; height:auto;"  >
			<tr>
				<td class="style1"><h3 style="color: ghostwhite;" ><asp:Label ID="Label2" runat="server" Text="UserName:"></asp:Label></h3></td>
				<td><asp:TextBox ID="textboxUname" runat="server"></asp:TextBox></td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ErrorMessage="Enter username" ControlToValidate="textboxUname" ForeColor="Red"></asp:RequiredFieldValidator>
                </td>
			</tr>
			<tr>
				<td class="style1"><h3 style="color: ghostwhite;" ><asp:Label ID="Label3" runat="server" Text="Password:"></asp:Label></h3></td>
				<td><asp:TextBox ID="textboxPwd" runat="server" TextMode="Password" ></asp:TextBox></td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ErrorMessage="Enter Password" ControlToValidate="textboxPwd" 
                        ForeColor="#CC0000"></asp:RequiredFieldValidator>
                </td>
			</tr>
			
			<tr>
				<td class="style1"><h3 style=" color: ghostwhite;"><asp:Label ID="Label5" runat="server" Text="Account type:"></asp:Label></h3></td>
				<td><asp:DropDownList ID="DropDownList1" runat="server">
                    <asp:ListItem>---Select One---</asp:ListItem>
                    <asp:ListItem>Admin</asp:ListItem>
                    <asp:ListItem>Staff</asp:ListItem>
                    <asp:ListItem>Patient</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" 
                        ErrorMessage="Select Account Type" ControlToValidate="DropDownList1" 
                        ForeColor="Red"></asp:RequiredFieldValidator>
                </td>
			 </tr>
			 <tr>
				 <td class="style1">&nbsp;</td>
				<td><asp:Button ID="Button1" runat="server" Text="Sign In" 
                        onclick="Button1_Click" /><asp:Button ID="Button2" runat="server" Text="Clear" />
                </td>
			 </tr>
		</table>
	</fieldset><asp:Label ID="Label4" runat="server" ForeColor="Red"></asp:Label>
</form>

<div id="templatemo_footer_wrapper">
  <div id="templatemo_footer">
        <ul class="footer_menu">
        	<li><a href="Default.aspx">Home</a></li>
            <li><a href="signUp.aspx">Sign UP </a></li>
            <li><a href="#">Sign In </a></li>
            <li><a href="#">About Us </a></li>
            <li><a href="#">Contact Us</a></li>
            <li class="last_menu"><a href="#"></a></li>
      </ul>    
              Copyright © Waqas&karamat | 
                Developed by Ashiq group of Technologies
	</div>
</div>
</body>
</html>