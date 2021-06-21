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
    public partial class GetAppointment : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }
        SqlConnection con = new SqlConnection(@"Data Source=.\SQLEXPRESS;AttachDbFilename=C:\Users\Waqas Ashiq\Documents\db.mdf;Integrated Security=True;Connect Timeout=30;User Instance=True");
        SqlCommand cmd;
        SqlCommand cmd3;
        SqlDataReader dr;
        
       

        protected void Button1_Click(object sender, EventArgs e)
        {

            String PatName = TextBoxcn.Text;
            String DoctName = TextBoxtn.Text;
            String DeName = TextBox1.Text;
            con.Open();
            cmd = new SqlCommand("SELECT * FROM Appointment WHERE pNamee = '" + PatName + "' AND docName = '" + DoctName + "'AND dName = '" + DeName + "' ", con);
            dr = cmd.ExecuteReader();
            if (dr.Read())
            {
                Label4.Text = "You Already Got The Appointment";
            }
                
                 
            else
                {
                    dr.Dispose();
                    String query = "INSERT INTO appointment VALUES('" + PatName + "' , '" + DoctName + "' , '" + DeName + "' )";
                    cmd3 = new SqlCommand(query, con);
                    cmd3.ExecuteNonQuery();
                    Response.Redirect("PatientView.aspx?uName=" + TextBox1.Text);
                }
        }
     }
     
 
 }
