namespace TokenMachine_Using_Queue
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.txtCounter1 = new System.Windows.Forms.TextBox();
            this.txtCounter2 = new System.Windows.Forms.TextBox();
            this.txtCounter3 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.btnCounter1 = new System.Windows.Forms.Button();
            this.btnCounter2 = new System.Windows.Forms.Button();
            this.btnCounter3 = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.listToken = new System.Windows.Forms.ListBox();
            this.btnPrintToken = new System.Windows.Forms.Button();
            this.lblstatus = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // txtCounter1
            // 
            this.txtCounter1.Location = new System.Drawing.Point(30, 39);
            this.txtCounter1.Name = "txtCounter1";
            this.txtCounter1.Size = new System.Drawing.Size(100, 20);
            this.txtCounter1.TabIndex = 0;
            // 
            // txtCounter2
            // 
            this.txtCounter2.Location = new System.Drawing.Point(153, 39);
            this.txtCounter2.Name = "txtCounter2";
            this.txtCounter2.Size = new System.Drawing.Size(100, 20);
            this.txtCounter2.TabIndex = 0;
            // 
            // txtCounter3
            // 
            this.txtCounter3.Location = new System.Drawing.Point(272, 39);
            this.txtCounter3.Name = "txtCounter3";
            this.txtCounter3.Size = new System.Drawing.Size(100, 20);
            this.txtCounter3.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(45, 13);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(62, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "Counter 1";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(169, 13);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(62, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Counter 2";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(282, 13);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(62, 13);
            this.label3.TabIndex = 1;
            this.label3.Text = "Counter 3";
            // 
            // btnCounter1
            // 
            this.btnCounter1.Location = new System.Drawing.Point(30, 75);
            this.btnCounter1.Name = "btnCounter1";
            this.btnCounter1.Size = new System.Drawing.Size(100, 23);
            this.btnCounter1.TabIndex = 2;
            this.btnCounter1.Text = "Next";
            this.btnCounter1.UseVisualStyleBackColor = true;
            this.btnCounter1.Click += new System.EventHandler(this.btnCounter1_Click);
            // 
            // btnCounter2
            // 
            this.btnCounter2.Location = new System.Drawing.Point(153, 75);
            this.btnCounter2.Name = "btnCounter2";
            this.btnCounter2.Size = new System.Drawing.Size(100, 23);
            this.btnCounter2.TabIndex = 2;
            this.btnCounter2.Text = "Next";
            this.btnCounter2.UseVisualStyleBackColor = true;
            this.btnCounter2.Click += new System.EventHandler(this.btnCounter2_Click);
            // 
            // btnCounter3
            // 
            this.btnCounter3.Location = new System.Drawing.Point(272, 75);
            this.btnCounter3.Name = "btnCounter3";
            this.btnCounter3.Size = new System.Drawing.Size(100, 23);
            this.btnCounter3.TabIndex = 2;
            this.btnCounter3.Text = "Next";
            this.btnCounter3.UseVisualStyleBackColor = true;
            this.btnCounter3.Click += new System.EventHandler(this.btnCounter3_Click);
            // 
            // textBox1
            // 
            this.textBox1.BackColor = System.Drawing.Color.ForestGreen;
            this.textBox1.ForeColor = System.Drawing.SystemColors.Window;
            this.textBox1.Location = new System.Drawing.Point(30, 121);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(342, 20);
            this.textBox1.TabIndex = 3;
            this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // listToken
            // 
            this.listToken.FormattingEnabled = true;
            this.listToken.Location = new System.Drawing.Point(153, 156);
            this.listToken.Name = "listToken";
            this.listToken.Size = new System.Drawing.Size(113, 69);
            this.listToken.TabIndex = 4;
            // 
            // btnPrintToken
            // 
            this.btnPrintToken.Location = new System.Drawing.Point(153, 245);
            this.btnPrintToken.Name = "btnPrintToken";
            this.btnPrintToken.Size = new System.Drawing.Size(113, 20);
            this.btnPrintToken.TabIndex = 5;
            this.btnPrintToken.Text = "Print Token";
            this.btnPrintToken.UseVisualStyleBackColor = true;
            this.btnPrintToken.Click += new System.EventHandler(this.btnPrintToken_Click);
            // 
            // lblstatus
            // 
            this.lblstatus.AutoSize = true;
            this.lblstatus.Font = new System.Drawing.Font("Sitka Small", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblstatus.Location = new System.Drawing.Point(26, 282);
            this.lblstatus.Name = "lblstatus";
            this.lblstatus.Size = new System.Drawing.Size(293, 19);
            this.lblstatus.TabIndex = 6;
            this.lblstatus.Text = "Congratulation ,You are the first customer .";
            this.lblstatus.Click += new System.EventHandler(this.lblstatus_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.ClientSize = new System.Drawing.Size(406, 325);
            this.Controls.Add(this.lblstatus);
            this.Controls.Add(this.btnPrintToken);
            this.Controls.Add(this.listToken);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.btnCounter3);
            this.Controls.Add(this.btnCounter2);
            this.Controls.Add(this.btnCounter1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtCounter3);
            this.Controls.Add(this.txtCounter2);
            this.Controls.Add(this.txtCounter1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtCounter1;
        private System.Windows.Forms.TextBox txtCounter2;
        private System.Windows.Forms.TextBox txtCounter3;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btnCounter1;
        private System.Windows.Forms.Button btnCounter2;
        private System.Windows.Forms.Button btnCounter3;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.ListBox listToken;
        private System.Windows.Forms.Button btnPrintToken;
        private System.Windows.Forms.Label lblstatus;

    }
}

