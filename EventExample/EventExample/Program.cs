using EventExample;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EventExample
{
    
         
    public partial class Form2 : Form2
    {

        public Form2()
        {
            InitializeComponent();
        }

        #region Lesson
        //we create two workers -> see that class
        Worker wkr1 = new Worker("The 1'st worker");
        Worker wkr2 = new Worker("The 2'nd worker");

        private void button1_Click(object sender, EventArgs e)
        {
            //We tell him to work...
            wkr1.Work("AnAbAnAnA");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            //We tell him to work...
            wkr2.Work("aNaBaNaNa");
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            //We spent two events ....
            wkr1.WorkEnd += new WorkerEndHandler(wkr_WorkEnd);
            /*is similar with <<wkr1.WorkEnd += wkr_WorkEnd;>> 
            but if you use VS 2005, it's utilities will help you to build the 
            function with who will treat this event. I don't know if there are
            more benefits for writing this short syntax for wiring this event 
            */

            wkr2.WorkEnd += new WorkerEndHandler(wkr_WorkEnd);
            ///...with the same function! 
        }

        void wkr_WorkEnd(object o, WFEventArg e)
        {
            //The results ...
            Worker worker = (Worker)o;

            label1.Text = e.TheString;
            MessageBox.Show(worker.Name + ":\tI've done my job!!!");
            //...is different from an object to another!
        }
    }
}
