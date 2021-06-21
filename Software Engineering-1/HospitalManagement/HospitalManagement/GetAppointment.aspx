<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="GetAppointment.aspx.cs" Inherits="HospitalManagement.GetAppointment" %>


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Appointments</title>
<meta name="keywords" content="free css templates, education, school, college, university, templatemo.com" />
<meta name="description" content="Education template is for academic related websites" />
<link href="templatemo_style.css" rel="stylesheet" type="text/css" />
    <style type="text/css">
        #signinform
        {
            width: 335px;
        }
    </style>
</head>
<body>
	<form id="form5" runat="server">
    <div id="templatemo_header_wrapper">
    <div id="templatemo_header">
    	 </div> <!-- end of templatemo_header -->
</div> <!-- end of templatemo_menu_wrapper -->

<div id="templatemo_menu_wrapper">
    <div id="templatemo_menu">
        <ul>
           <li><a href="Default.aspx">Home</a></li>
            <li><a href="signUp.aspx">Sign Up</a></li>
            <li><a href="signIn.aspx">Sign In</a></li>
            <li><a href="#">About Us</a></li>
            <li><a href="#">Contact Us</a></li>
            <li><a href="#">DONATIONS</a></li>
        </ul>    	
    </div> <!-- end of templatemo_menu -->
</div>

<div id="templatemo_content_wrapper">
    <div id="templatemo_sidebar">
    	<div class="sidebar_box">
            <h2>Get Appointment</h2>
            <div class="news_box">
                <table >
                    <tr>
                        <td>
                            Patient Name</td>
                        <td>
                            <asp:TextBox ID="TextBoxcn" runat="server"></asp:TextBox>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            Doctor Name</td>
                        <td>
                            <asp:TextBox ID="TextBoxtn" runat="server"></asp:TextBox>
                        </td>
                    </tr>
                    <tr>
                        <td>
                            Disease</td>
                        <td>
                            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
                        </td>
                    </tr>
                    <tr>
                        <td class="style1">&nbsp;</td>
				<td><asp:Button ID="Button10" runat="server" Text="Get" 
                        onclick="Button1_Click" />
                </td>
                    </tr>
                </table>
            </div>
            <div class="news_box">
                <asp:Label ID="Label4" runat="server" ForeColor="Red"></asp:Label>
            </div>
        </div>
    </div> <!-- end of sidebar -->
	
    <div id="templatemo_content">
        <div class="content_box">
            <h2>&nbsp;</h2>
            <p>&nbsp;</p>
          
           
        </div>
    </div> <!-- end of content -->

</div>
</form>
</body>
</html>
