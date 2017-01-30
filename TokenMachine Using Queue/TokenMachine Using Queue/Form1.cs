using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TokenMachine_Using_Queue
{
    public partial class Form1 : Form
    {
        public static int lastTokenIssued = 0;
        public int tokenNoTobeIssued;
        public Queue<int> tokenQueue = new Queue<int>();
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            

        }

        private void btnPrintToken_Click(object sender, EventArgs e)
        {
            
            
            lblstatus.Text = "There are " + tokenQueue.Count.ToString() + " customer before you in the queue";
            tokenNoTobeIssued = ++lastTokenIssued;
            listToken.Items.Add(tokenNoTobeIssued);
            tokenQueue.Enqueue(tokenNoTobeIssued);
            
        }

        private void btnCounter1_Click(object sender, EventArgs e)
        {
            if (tokenQueue.Count!=0)
            {
                int variable = tokenQueue.Dequeue();
                txtCounter1.Text = variable.ToString();
                listToken.Items.Remove(variable);
                lblstatusChange();
                textboxChange(variable, 1);
            }
            else
                textBox1.Text = "No customer in the Queue";
 

        }

        private void btnCounter2_Click(object sender, EventArgs e)
        {
            if (tokenQueue.Count!=0)
            {
                int variable = tokenQueue.Dequeue();
                txtCounter2.Text = variable.ToString();
                listToken.Items.Remove(variable);
                lblstatusChange();
                textboxChange(variable, 2);
            }
            else
                textBox1.Text = "No customer in the Queue";
        }

        private void btnCounter3_Click(object sender, EventArgs e)
        {
            if (tokenQueue.Count != 0)
            {
                int variable = tokenQueue.Dequeue();
                txtCounter3.Text = variable.ToString();
                listToken.Items.Remove(variable);
                lblstatusChange();
                textboxChange(variable, 3);
            }
            else
                textBox1.Text = "No customer in the Queue";
 

        }

        private void lblstatusChange()
        {
            if (tokenQueue.Count > 0)
                lblstatus.Text = "There are " + (tokenQueue.Count).ToString() + " customer before you in the queue";
            else
                lblstatus.Text = "No customers are remaining in the queue";

        }
        private void textboxChange(int variable,int token)
        {
            textBox1.Text = "Token Number: " + variable.ToString() + ",Please go to counter" + token;
            
        }
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void lblstatus_Click(object sender, EventArgs e)
        {

        }
    }
}
