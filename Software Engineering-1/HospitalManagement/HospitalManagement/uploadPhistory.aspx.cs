using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.Sql;
using System.Data.SqlClient;
using System.IO;
using System.Data;

namespace virtualClassRoom
{
    public partial class uploadA : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            TextBox3.Text = Request.QueryString["uName"];
            Label7.Text = Request.QueryString["uName"];
        }
        SqlConnection con = new SqlConnection(@"Data Source=.\SQLEXPRESS;AttachDbFilename=D:\Visual Studio 2010\Projects\virtualClassRoom\virtualClassRoom\App_Data\Database2.mdf;Integrated Security=True;User Instance=True");

        protected void Button3_Click(object sender, EventArgs e)
        {
            Response.Redirect("facultyView.aspx?uName" + Label7.Text);
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            Response.Redirect("facultyView.aspx?uName" + Label7.Text);
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (FileUpload1.HasFile)
            {
                try
                {
                    FileUpload1.SaveAs("D:\\Visual Studio 2010\\Projects\\virtualClassRoom\\virtualClassRoom\\App_Data\\assignment\\" + FileUpload1.FileName);
                    Label5.Text = "FIle Name:" + FileUpload1.PostedFile.FileName + "<br>" +
                        FileUpload1.PostedFile.ContentLength + "kb<br>" + "Content Type:" + FileUpload1.PostedFile.ContentType;
                }
                catch (Exception ex)
                {
                    Label5.Text = "ERROR: " + ex.Message.ToString();
                }
            }
            else
            {
                Label5.Text = "You have not specified a file.";
            }
            string str = "APP_DATA/assignment/" + FileUpload1.PostedFile.FileName;
            string filePath = Server.MapPath(str);
            string filename = Path.GetFileName(filePath);

            FileStream fs = new FileStream(filePath, FileMode.Open, FileAccess.Read);
            BinaryReader br = new BinaryReader(fs);
            Byte[] bytes = br.ReadBytes((Int32)fs.Length);
            br.Close();
            fs.Close();

            string strQuery = "INSERT INTO assignment(Name, ContentType, Data,ano,cname,tname) values (@Name, @ContentType, @Data,@ano,@cname,@tname)";
            SqlCommand cmd = new SqlCommand(strQuery);

            SqlParameter p1 = new SqlParameter("@Name", filename);
            cmd.Parameters.Add(p1);
            SqlParameter p2 = new SqlParameter("@ContentType", FileUpload1.PostedFile.ContentType);
            cmd.Parameters.Add(p2);
            SqlParameter p3 = new SqlParameter("@Data", bytes);
            cmd.Parameters.Add(p3);
            SqlParameter p4 = new SqlParameter("@ano", TextBox1.Text);
            cmd.Parameters.Add(p4);
            SqlParameter p5 = new SqlParameter("@cname", DropDownList1.Text);
            cmd.Parameters.Add(p5);
            SqlParameter p6 = new SqlParameter("@tname", TextBox3.Text);
            cmd.Parameters.Add(p6);

            //cmd.Parameters.Add("@Name", filename);
            //cmd.Parameters.Add("@ContentType", FileUpload1.PostedFile.ContentType );
            //cmd.Parameters.Add("@Data",bytes);

            cmd.CommandType = CommandType.Text;
            cmd.Connection = con;

            try
            {
                con.Open();
                cmd.ExecuteNonQuery();
                Label5.Text = "File Uploaded";
                Response.Redirect("facultyView.aspx?uName=" + TextBox3.Text);

            }
            catch (Exception ex)
            {
                Response.Write(ex.Message);
                Label5.Text = "File upload failure";
            }
            finally
            {
                con.Close();
                con.Dispose();
            }
        }
    }
}