<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="PatientView.aspx.cs" Inherits="HospitalManagement.PatientView" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Patient's Page</title>
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
            <li><a href="#">About Us</a></li>
            <li><a href="#">Contact us</a></li>
            <li><a href="Default.aspx">Logout</a></li>
        </ul>    	
    </div> <!-- end of templatemo_menu -->
</div>

<div id="templatemo_content_wrapper">
	<div id="templatemo_sidebar">
    	<div class="sidebar_box">
		
            <h2>Quick Links</h2>
            <div class="news_box">
            </div>
               
            <div class="news_box">
                <asp:Button ID="Button1" runat="server" Text="Get Appointment" 
                    onclick="Button1_Click" Width="209px" />
            </div>
            <div class="news_box">
                <asp:Button ID="Button2" runat="server" Text="View Patient Record" 
                    onclick="Button2_Click" Width="212px" />
            </div>
            <div class="news_box">
                <asp:Button ID="Button3" runat="server" Text="View Appointments" 
                    onclick="Button2_Click" Width="212px" />
            </div>
            <div class="news_box">
            </div>
            <div class="news_box">
            </div>
        </div>
		
		<div class="sidebar_box_bottom">
		</div>    
    </div> <!-- end of sidebar -->
	
	<div id="templatemo_content">
    	<div class="content_box">
     
        	<h2>Welcome 
                
                <asp:Label ID="Label1" runat="server" Text="Guest "></asp:Label>
                 Your Profile AT Ashiq Memorial</h2>
            <p></p>
            
            <div class="cleaner_h20">			 
			</div>
            
            <div class="image_fl">
	            <img src="images/main2.jpg" alt="image" />
            </div>
            
           <div class="section_w250 float_r">
                <ul class="list_01">
                    <li>If you want to live healthy east less</li>
                    <li>Go for daily walk</li>
                    <li></li>
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
            <li><a href="#">About Us</a></li>
            <li><a href="#">Contact us</a></li>
            <li><a href="Default.aspx">Logout</a></li>
         </ul>
                
              Copyright © Waqas&karamat | 
                Developed by Ashiq group of Technologies
    </div>
</div>

  
</form>
</body>
</html>
