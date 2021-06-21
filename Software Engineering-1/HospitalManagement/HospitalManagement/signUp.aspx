<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="signUp.aspx.cs" Inherits="HospitalManagement.signUp1" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>SignUp</title>
<meta name="keywords" content="free css templates, education, school, college, university, templatemo.com" />
<meta name="description" content="Education template is for academic related websites" />
<link href="templatemo_style.css" rel="stylesheet" type="text/css" />
    <style type="text/css">
        .style1
        {
            width: 162px;
        }
        .style5
        {
            width: 72px;
        }
        .style7
        {
            width: 34px;
        }
        #signUp
        {
            margin-top: 4px;
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
            <li><a href="#">Sign Up</a></li>
            <li><a href="signIn.aspx">Sign In</a></li>
            <li><a href="#">About Us</a></li>
            <li><a href="#">Contact Us</a></li>
            <li><a href="#"></a></li>
        </ul>    	
    </div>
</div>

<form id="signUp" runat="server">
	<fieldset style="width: 476px; margin-right: 0px;">
		<legend id="Legend1" runat=server>	<h3  style="color: ivory;">
            <asp:Label ID="Label8" runat="server" Text="Registration Form"></asp:Label></h3>
        </legend>
	    <table style="width: 470px; margin-right: 0px">
			<tr>
				<td class="style7"><h3 style="color: ghostwhite; width: 81px;" ><asp:Label ID="Label1" runat="server" Text="UserName:"></asp:Label></h3></td>
				<td class="style5">
                    <br />
                    <br />
                    <asp:TextBox ID="textboxUn" runat="server" style="margin-left: 0px" 
                        Width="128px" ></asp:TextBox>
                    <br />
                    <asp:Label ID="availabiltyLabel" runat="server" Text=""></asp:Label>
                    <br />
                    <br />
                </td>
				<td class="style1">
                    <asp:LinkButton ID="LinkButton1" runat="server" onclick="LinkButton1_Click">check Availiablity</asp:LinkButton>
                    <br />
                </td>
			</tr>
			<tr>
				<td class="style7"><h3 style="color: ghostwhite;" ><asp:Label ID="Label2" runat="server" Text="Password:"></asp:Label></h3>
                </td>
				<td class="style5">
                    <asp:TextBox ID="textboxPass" runat="server" TextMode="Password" Width="128px"></asp:TextBox></td>
				<td class="style1">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ErrorMessage="please enter password" ForeColor="#CC0000" 
                        ControlToValidate="textboxPass"></asp:RequiredFieldValidator>
                </td>
			</tr>
			<tr>
				<td class="style7"> <h3 style="color: ghostwhite; width: 140px;" ><asp:Label ID="Label3" runat="server" Text="Re-type Password:"></asp:Label></h3></td>
				<td class="style5">
                    <asp:TextBox ID="textboxRPass" runat="server" TextMode="Password" Width="128px"></asp:TextBox></td>
				<td class="style1">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" 
                        ErrorMessage="please retype password" ForeColor="#CC0000" 
                        ControlToValidate="textboxRPass"></asp:RequiredFieldValidator>
                    <br />
                    <asp:CompareValidator ID="CompareValidator1" runat="server" 
                        ControlToCompare="textboxPass" ControlToValidate="textboxRPass" 
                        ErrorMessage="both password must match" ForeColor="#CC0000"></asp:CompareValidator>
                </td>
			</tr>
			<tr>
				<td class="style7"> <h3 style="color: ghostwhite;" ><asp:Label ID="Label4" runat="server" Text="Email:"></asp:Label></h3></td>
				<td class="style5"><asp:TextBox ID="textboxEmail" runat="server" Width="128px"></asp:TextBox></td>
				<td class="style1">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" 
                        ErrorMessage="please enter a valid" ForeColor="#CC0000" 
                        ControlToValidate="textboxEmail"></asp:RequiredFieldValidator>
                    <br />
                    <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" 
                        ControlToValidate="textboxEmail" ErrorMessage=" emain id    " 
                        ForeColor="#CC0000" 
                        ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
                </td>
			</tr>
			<tr>
				<td class="style7"> <h3 style="color: ghostwhite; width: 68px;" ><asp:Label ID="Label5" runat="server" Text="Phone #:"></asp:Label></h3></td>
				<td class="style5"><asp:TextBox ID="textboxPh" runat="server" Width="128px"></asp:TextBox></td>
				<td class="style1">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" 
                        ErrorMessage="please enter phone #" ForeColor="#CC0000" 
                        ControlToValidate="textboxPh"></asp:RequiredFieldValidator>
                </td>
			</tr>
			<tr>
				<td class="style7"> <h3 style="color: ghostwhite;" ><asp:Label ID="Label6" runat="server" Text="Address:"></asp:Label></h3></td>
				<td class="style5">
                    <asp:TextBox ID="textboxAdrs" runat="server" Width="128px" ></asp:TextBox></td>
				<td class="style1">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator6" runat="server" 
                        ErrorMessage="please enter address" ForeColor="#CC0000" 
                        ControlToValidate="textboxAdrs"></asp:RequiredFieldValidator>
                </td>
			</tr>
			<tr>
				<td class="style7"><h3 style=" color: ghostwhite; width: 105px;"><asp:Label ID="Label7" runat="server" Text="Account type:"></asp:Label></h3></td>
				<td class="style5">
                    <asp:DropDownList ID="DropDownList1" runat="server" 
                        Height="16px" Width="128px">
                    <asp:ListItem Selected="True">Select One..</asp:ListItem>
                    <asp:ListItem>Staff</asp:ListItem>
                    <asp:ListItem>Patient</asp:ListItem>
                    </asp:DropDownList></td>
				<td class="style1">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator7" runat="server" 
                        ErrorMessage="select account type" ForeColor="#CC0000" 
                        ControlToValidate="DropDownList1"></asp:RequiredFieldValidator>
                </td>
			 </tr>
			 <tr>
                <td class="style7">&nbsp;</td>
				<td class="style5">&nbsp;</td>
				<td class="style1">&nbsp;</td>
			 </tr>
			 <tr>
				 <td class="style7">&nbsp;</td>
				 <td class="style5"><asp:Button ID="Button1" runat="server" Text="signUp" 
                         onclick="Button1_Click" /></td>
				 <td class="style1">&nbsp;</td>
			 </tr>
		</table>
	</fieldset>
    </form>



<div id="templatemo_footer_wrapper">
  <div id="templatemo_footer">
        <ul class="footer_menu">
        	<li><a href="Default.aspx">Home</a></li>
            <li><a href="#">Sign UP </a></li>
            <li><a href="signIn.aspx">Sign In </a></li>
            <li><a href="#">About Us </a></li>
            <li><a href="#">Contact Us</a></li>
            <li class="last_menu"><a href="#"></a></li>
      </ul>    
              Copyright © Waqas&amp;karamat | 
                Developed by Ashiq group of Technologies
	</div>
</div>
</body>
</html>