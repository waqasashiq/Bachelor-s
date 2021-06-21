<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="uploadPhistory.aspx.cs" Inherits="virtualClassRoom.uploadA" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
 <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Upload Assignment</title>
<meta name="keywords" content="free css templates, education, school, college, university, templatemo.com" />
<meta name="description" content="Education template is for academic related websites" />
<link href="templatemo_style.css" rel="stylesheet" type="text/css" />
</head>
<body>
<form id="form1" runat="server">
<div id="templatemo_header_wrapper">
    <div id="templatemo_header">
    	<div id="site_title">
            <h1>
            <img src="images/templatemo_logo.png" alt="Site Title" />
			<span>PUCIT Virtual Class Room</span>
     		</h1>
        </div>
        <p>&nbsp;</p>
    </div> <!-- end of templatemo_header -->
</div> <!-- end of templatemo_menu_wrapper -->

<div id="templatemo_menu_wrapper">
    <div id="templatemo_menu">
        <ul>
            <li><a><asp:Button ID="Button2" runat="server" Text="Home" 
                    onclick="Button2_Click" /> </a></li>
            <li><a href="#"></a></li>
            <li><a href="main.aspx">Logout</a></li>
            <li><a href="#"></a></li>
        </ul>    	
    </div> <!-- end of templatemo_menu -->
</div>

<div id="templatemo_content_wrapper">
	<div id="templatemo_sidebar">

    	<div class="sidebar_box">
             <h2>&nbsp;</h2>
        </div>
		
		<div class="sidebar_box_bottom">
		    <asp:Label ID="Label7" runat="server" Text="Label" Visible="False"></asp:Label>
		</div>    

    </div>
    <div id="templatemo_content">
    	<div class="content_box">
   
        	<h2>****** Upload Lectures ******</h2>
            <p>
                <asp:Label ID="Label1" runat="server" Text="Assignment no."></asp:Label>
                <asp:TextBox ID="TextBox1" runat="server" style="margin-left: 31px"></asp:TextBox>
            </p>
            <p>
            </p>
            <p>
            </p>
            <p>
                <asp:Label ID="Label2" runat="server" Text="Course Name"></asp:Label>
                <asp:DropDownList ID="DropDownList1" runat="server" 
                    DataSourceID="SqlDataSource1" DataTextField="CourseName" 
                    DataValueField="CourseName" Height="18px" style="margin-left: 44px" 
                    Width="142px">
                </asp:DropDownList>
                <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
                    ConnectionString="<%$ ConnectionStrings:Database2ConnectionString9 %>" 
                    SelectCommand="SELECT [CourseName] FROM [course] WHERE ([TeacherName] = @TeacherName)">
                    <SelectParameters>
                        <asp:QueryStringParameter Name="TeacherName" QueryStringField="uName" 
                            Type="String" />
                    </SelectParameters>
                </asp:SqlDataSource>
            </p>
            <p>
            </p>
            <p>
            </p>
            <p>
                <asp:Label ID="Label3" runat="server" Text="Teacher Name"></asp:Label>
                <asp:TextBox ID="TextBox3" runat="server" style="margin-left: 36px"></asp:TextBox>
            </p>
            <p>
            </p>
            <p>
            </p>
            <p>
                <asp:Label ID="Label4" runat="server" Text="File"></asp:Label>
                <asp:FileUpload ID="FileUpload1" runat="server" style="margin-left: 108px" 
                    Width="210px" />
            </p>
            <p>
                &nbsp;</p>
            <p>
                <asp:Button ID="Button1" runat="server" onclick="Button1_Click" 
                    style="margin-left: 262px" Text="Upload" Width="77px" />
            </p>
            <p>
                &nbsp;</p>
            <p>
                <asp:Label ID="Label5" runat="server" Text="Label"></asp:Label>
            </p>
            
            
         </div>
    </div>
    <!-- end of content -->
   
    <div class="cleaner">
	</div>

</div>

<div id="templatemo_footer_wrapper">
  <div id="templatemo_footer">
        <ul class="footer_menu">
        	<li><a><asp:Button ID="Button3" runat="server" Text="Home" 
                    onclick="Button3_Click" /></a></li>
            <li><a href="#"></a></li>
            <li><a href="main.aspx">Logout </a></li>    
         </ul>
                
              Copyright © MAZM | 
                Developed by MAZM group of Technologies
	</div>
</div>
</form>
</body>
</html>
