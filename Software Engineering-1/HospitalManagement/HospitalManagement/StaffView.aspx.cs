using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace HospitalManagement
{
    public partial class StaffView : System.Web.UI.Page
    {

        protected void Page_Load(object sender, EventArgs e)
        {
            Label1.Text = Request.QueryString["uName"];
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (DropDownList1.Text == "Doctor")
            {
                Response.Redirect("uploadPhistory.aspx?uName=" + Label1.Text + "&cname=" + DropDownList1.Text);
            }
            else {
                Label5.Text = "No Excess to the area for this type of users";
            }
        }
        protected void Button2_Click(object sender, EventArgs e)
        {
            if (DropDownList1.Text == "Staff" || DropDownList1.Text == "Doctor")
            {
                Response.Redirect("SViewPat.aspx?uName=" + Label1.Text + "&cname=" + DropDownList1.Text);
            }
            else
            {
                Label6.Text = "No Excess to the area for this type of users";
            }
        }
        protected void Button3_Click(object sender, EventArgs e)
        {
            if (DropDownList1.Text == "Staff")
            {
                Response.Redirect("GetAppointment.aspx?uName=" + Label1.Text + "&cname=" + DropDownList1.Text);
            }
            else
            {
                Label7.Text = "No Excess to the area for this type of users";
            }
        }
        protected void Button4_Click(object sender, EventArgs e)
        {
            if (DropDownList1.Text == "Staff")
            {
                Response.Redirect("SDeleteApp.aspx?uName=" + Label1.Text + "&cname=" + DropDownList1.Text);
            }
            else
            {
                Label8.Text = "No Excess to the area for this type of users";
            }
        }
        protected void Button5_Click(object sender, EventArgs e)
        {
            if (DropDownList1.Text == "Staff")
            {
                Response.Redirect("SuploadRep.aspx?uName=" + Label1.Text + "&cname=" + DropDownList1.Text);
            }
            else
            {
                Label8.Text = "No Excess to the area for this type of users";
            }
        }

       
    }
}