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
    public partial class signUp1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }
        SqlConnection con = new SqlConnection(@"Data Source=.\SQLEXPRESS;AttachDbFilename=C:\Users\Waqas Ashiq\Documents\db.mdf;Integrated Security=True;Connect Timeout=30;User Instance=True");
        SqlCommand cmd;
        SqlDataReader dr;

        protected void LinkButton1_Click(object sender, EventArgs e)
        {
            con.Open();
            cmd = new SqlCommand("select * from account where userName = '" + textboxUn.Text + "'", con);
            dr = cmd.ExecuteReader();
            if (dr.Read())
            {
                availabiltyLabel.Text = "user name is already exist";
                this.availabiltyLabel.ForeColor = Color.Red;
            }
            else
            {
                availabiltyLabel.Text = "user name is available";
            }
        }
        protected void Button1_Click(object sender, EventArgs e)
        {
            if (IsPostBack)
            {
                con.Open();
                String query = "insert into account Values('" + textboxUn.Text + "' , '" + textboxPass.Text + "' , '" + DropDownList1.Text + "' )";
                cmd = new SqlCommand(query, con);
                cmd.ExecuteNonQuery();

                if (DropDownList1.Text == "Staff")
                  {
                      String query1 = "insert into staff Values('" + textboxUn.Text + "' , '" + textboxEmail.Text + "' , '" + textboxPh.Text + "' , '" + textboxAdrs.Text + "' )";
                      cmd = new SqlCommand(query1, con);
                      cmd.ExecuteNonQuery();
                      Response.Redirect("StaffView.aspx?uName="+textboxUn.Text);
                  }
                if (DropDownList1.Text == "Patient")
                {
                    String query1 = "insert into patient Values('" + textboxUn.Text + "' , '" + textboxEmail.Text + "' , '" + textboxPh.Text + "' , '" + textboxAdrs.Text + "' )";
                    cmd = new SqlCommand(query1, con);
                    cmd.ExecuteNonQuery();
                    Response.Redirect("PatientView.aspx?uName=" + textboxUn.Text);
                }
                Response.Write("Succesfull !!");
            }
        }

    }
}