using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Data.Sql;
using System.Drawing;

namespace HospitalManagement
{
    public partial class signIn : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
        }

        SqlConnection con = new SqlConnection(@"Data Source=.\SQLEXPRESS;AttachDbFilename=C:\Users\Waqas Ashiq\Documents\db.mdf;Integrated Security=True;Connect Timeout=30;User Instance=True");
        SqlCommand cmd;
        SqlDataReader dr;

        protected void Button1_Click(object sender, EventArgs e)
        {
            con.Open();
            cmd = new SqlCommand("SELECT * FROM account WHERE userName = '"+textboxUname.Text+"' AND pass = '"+textboxPwd.Text+"' ",con);
            dr = cmd.ExecuteReader();
            if (dr.Read())
            {
                //Session.Add("uName",textboxUname);
               
                if(DropDownList1.Text == "Admin"){
                    Response.Redirect("adminView.aspx?uName="+textboxUname.Text);
                }
                else if (DropDownList1.Text == "Staff"){
                    Response.Redirect(".aspx?uName=" + textboxUname.Text);
                }
                else if (DropDownList1.Text == "Patient")
                {
                    Response.Redirect("PatientView.aspx?uName=" + textboxUname.Text);
                }
            }
            else {
                Label4.Text = "Invalid Username or Password";
            }
        }

    }
}