using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MemoryGame
{
    public partial class Form1 : Form
    {
        List<HiddenTextButton> buttons = new List<HiddenTextButton>();
        static List<HiddenTextButton> clickedButtons = new List<HiddenTextButton>();

        Button b_cancel = new Button();
        String[] labels;

        static int clicks = 0;


        public Form1()
        {
            InitializeComponent();
        }

        public class HiddenTextButton : Button
        {

            public string strHiddenText;

            public string HiddenText
            {
                get { return strHiddenText; }
                set { strHiddenText = value; }
            }

            public void hideText() { Text = ""; }
            public void showText() { Text = strHiddenText; }
            public void showText(object sender, EventArgs e)
            {
                showText();
                Form1.clickedButtons.Add(this);
                Form1.clicks += 1;
            }
        }

        void hide_buttons(object sender, EventArgs e)
        {
            if (clicks == 2)
            {
                for(int i = 0; i < clickedButtons.Count; i++)
                {
                    clickedButtons.ElementAt(i).hideText();
                }
                clickedButtons.Clear();
                clicks = 0;
            }
        }

        private void reset(object sender, EventArgs e)
        {
            clicks = 0;
            foreach(var b in buttons){
                this.Controls.Remove(b);
            }
            this.Controls.Remove(b_cancel);
            this.Size = new System.Drawing.Size(168, 227);
            l_boardSize.Visible = true;
            i_boardSize.Visible = true;
            b_start.Visible = true;
        }


        private void b_start_Click(object sender, EventArgs e)
        {
            int top = 12;
            int left = 12;
            int boardSize = Convert.ToInt32(((UpDownBase)i_boardSize).Text);
            int buttonSize = 60;

            int windowSize = boardSize * buttonSize + ((boardSize + 2) * 12);
            this.Size = new System.Drawing.Size(windowSize, windowSize + 59);

            b_cancel.Left = (windowSize-b_cancel.Size.Width)/2;
            b_cancel.Top = windowSize - 12;
            b_cancel.Text = "Back";
            b_cancel.Click += new System.EventHandler(reset);
            this.Controls.Add(b_cancel);
            
            for(int i = 0; i < boardSize; i++)
            {

            }

            for (int i = 0; i < boardSize; i++)
            {
                for (int j = 0; j < boardSize; j++)
                {
                    HiddenTextButton button = new HiddenTextButton();
                    button.Size = new Size(buttonSize, buttonSize);
                    button.Left = left;
                    button.Top = top;
                    button.HiddenText = "penis";
                    button.Click += new EventHandler(hide_buttons);
                    button.Click += new EventHandler(button.showText);
                    buttons.Add(button);
                    this.Controls.Add(button);
                    left += 72;
                }
                top += 72;
                left = 12;
            }

            l_boardSize.Visible = false;
            i_boardSize.Visible = false;
            b_start.Visible = false;
        }
    }
}
