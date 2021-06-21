<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="StaffView.aspx.cs" Inherits="HospitalManagement.StaffView" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Staff View</title>
<meta name="keywords" content="free css templates, education, school, college, university, templatemo.com" />
<meta name="description" content="Education template is for academic related websites" />
<link href="templatemo_style.css" rel="stylesheet" type="text/css" />
</head>
<body>
<form id="form1" runat="server">

<div id="templatemo_header_wrapper">
    <div id="templatemo_header">
    </div> <!-- end of templatemo_header -->
</div> <!-- end of templatemo_menu_wrapper -->

<div id="templatemo_menu_wrapper">
    <div id="templatemo_menu">
        <ul>
            <li><a href="#" class="current">Home</a></li>
            <li><a href="#"></a></li>
            <li><a href="Default.aspx">Logout</a></li>
            <li><a href="#"></a></li>
        </ul>    	
    </div> <!-- end of templatemo_menu -->
</div>
<div id="templatemo_content_wrapper">
	<div id="templatemo_sidebar">

         <div class="sidebar_box">
            <div class="news_box">
                <h2>Select Account Type</h2>
            </div>
            <div class="news_box">
               
                <<td class="style5"><asp:DropDownList ID="DropDownList1" runat="server" 
                        Height="17px" Width="128px">
                    <asp:ListItem Selected="True">Select One..</asp:ListItem>
                    <asp:ListItem>Staff</asp:ListItem>
                    <asp:ListItem>Doctor</asp:ListItem>
                    </asp:DropDownList></td>
               
            </div>
         </div>
		<div class="sidebar_box_bottom">
        </div>    

        <div class="sidebar_box">
            <div class="news_box">
               <asp:Button ID="Button1" runat="server" Text="Update patient history" 
                    Width="210px" onclick="Button1_Click" />
                </fieldset><asp:Label ID="Label5" runat="server" ForeColor="Red"></asp:Label>
            </div>
            <div class="news_box">
                <asp:Button ID="Button2" runat="server" Text="View Patients" 
                    onclick="Button2_Click" Width="209px" />  
                </fieldset><asp:Label ID="Label6" runat="server" ForeColor="Red"></asp:Label>        
            </div>
            <div class="news_box">
                <asp:Button ID="Button3" runat="server" Text="Make Appointment" 
                onclick="Button3_Click" Width="209px" />
               </fieldset><asp:Label ID="Label7" runat="server" ForeColor="Red"></asp:Label> 
            </div>
            <div class="news_box">
                <asp:Button ID="Button4" runat="server" Text="Delete or change appointment" 
                onclick="Button4_Click" Width="209px" />
               </fieldset><asp:Label ID="Label8" runat="server" ForeColor="Red"></asp:Label> 
            </div>
            
            <div class="news_box">
                <asp:Button ID="Button5" runat="server" Text="Upload test reports" 
                    Width="209px" onclick="Button5_Click" />
                </fieldset><asp:Label ID="Label9" runat="server" ForeColor="Red"></asp:Label>
            </div>
            
        </div>
    </div> <!-- end of sidebar -->
	
	<div id="templatemo_content">
    	<div class="content_box">
   
        	<h2>Welcome 
                
                <asp:Label ID="Label1" runat="server" Text="Guest "></asp:Label>
                 Your Profile At Ashiq Memorial</h2>
            <p>&nbsp;</p>
                 
            <div class="cleaner_h20">
			</div>
            
            <div class="image_fl">
	            <img src="images/main2.jpg" alt="image" /></div>
            
          <div class="section_w250 float_r" id="div1">
                <ul class="list_01">
                    <li>Our motive is to server humanity</li>
                    <li>by saving humman lives</li>
                    <li>We will be doing hardwork for our mission till the end of time</li> 
                </ul>
		   </div>
        
           <div class="cleaner">
		   </div>
		   
         </div>
    </div> <!-- end of content -->
   
    <div class="cleaner">
	</div>

</div>

<div id="templatemo_footer_wrapper">
  <div id="templatemo_footer">
        <ul class="footer_menu">
        	<li><a href="#" class="current">Home</a></li>
            <li><a href="#">Courses</a></li>
            <li><a href="Default.aspx">Logout</a></li>
            
         </ul>
                
              Copyright © Waqas&amp;karamt | 
                Developed by Ashiq group of Technologies
	</div>
</div>

    


</form>
</body>
</html>
