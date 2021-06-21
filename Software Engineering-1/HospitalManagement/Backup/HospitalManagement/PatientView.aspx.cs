using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace HospitalManagement
{
    public partial class PatientView : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Label1.Text = Request.QueryString["uName"];
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            Response.Redirect("GetAppointment.aspx?uName=" + Label1.Text);
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            //Response.Redirect("dropCourse.aspx?uName=" + Label1.Text);
        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            //Response.Redirect("DownloadLec.aspx?uName=" + Label1.Text);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            //Response.Redirect("DownloadAsnmnt.aspx?uName=" + Label1.Text);
        }
    }
}