namespace MemoryGame
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
            this.b_start = new System.Windows.Forms.Button();
            this.i_boardSize = new System.Windows.Forms.NumericUpDown();
            this.l_boardSize = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.i_boardSize)).BeginInit();
            this.SuspendLayout();
            // 
            // b_start
            // 
            this.b_start.Location = new System.Drawing.Point(12, 60);
            this.b_start.Name = "b_start";
            this.b_start.Size = new System.Drawing.Size(128, 49);
            this.b_start.TabIndex = 0;
            this.b_start.Text = "Start New Game!";
            this.b_start.UseVisualStyleBackColor = true;
            this.b_start.Click += new System.EventHandler(this.b_start_Click);
            // 
            // i_boardSize
            // 
            this.i_boardSize.Increment = new decimal(new int[] {
            2,
            0,
            0,
            0});
            this.i_boardSize.Location = new System.Drawing.Point(12, 34);
            this.i_boardSize.Maximum = new decimal(new int[] {
            6,
            0,
            0,
            0});
            this.i_boardSize.Minimum = new decimal(new int[] {
            2,
            0,
            0,
            0});
            this.i_boardSize.Name = "i_boardSize";
            this.i_boardSize.ReadOnly = true;
            this.i_boardSize.Size = new System.Drawing.Size(128, 20);
            this.i_boardSize.TabIndex = 1;
            this.i_boardSize.Value = new decimal(new int[] {
            4,
            0,
            0,
            0});
            // 
            // l_boardSize
            // 
            this.l_boardSize.AutoSize = true;
            this.l_boardSize.Location = new System.Drawing.Point(45, 9);
            this.l_boardSize.Name = "l_boardSize";
            this.l_boardSize.Size = new System.Drawing.Size(62, 13);
            this.l_boardSize.TabIndex = 2;
            this.l_boardSize.Text = "Board size: ";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(152, 188);
            this.Controls.Add(this.l_boardSize);
            this.Controls.Add(this.i_boardSize);
            this.Controls.Add(this.b_start);
            this.Name = "Form1";
            this.Text = "Memory Game";
            ((System.ComponentModel.ISupportInitialize)(this.i_boardSize)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button b_start;
        private System.Windows.Forms.NumericUpDown i_boardSize;
        private System.Windows.Forms.Label l_boardSize;
    }
}

