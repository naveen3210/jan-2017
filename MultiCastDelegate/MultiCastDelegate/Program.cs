using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MultiCastDelegate
{
    public delegate void SampleDelegate( out int Integer);
    class Program
    {
        //static void Main( )
        //{
        //    SampleDelegate del = new SampleDelegate(SampleMethodOne);
        //    del(); 
        //}

        //public static void SampleMethodOne()
        //{
        //    Console.WriteLine("SampleMethodOne is Invoked");
        //}

        static void Main()
        {
            //SampleDelegate del1, del2, del3, del4 ;
            //del1 = new SampleDelegate(SampleMethodOne);
            //del2 = new SampleDelegate(SampleMethodTwo);
            //del3 = new SampleDelegate(SampleMethodThree);
            //del4 = del1 + del2 + del3;
            //del4();

            SampleDelegate del = new SampleDelegate(SampleMethodOne);
            del += SampleMethodTwo;
           // del += SampleMethodThree;
            int DelegateOutputParameterValue = -1;
            del(out DelegateOutputParameterValue);
            Console.WriteLine("DelegateReturnedValue = {0} ", DelegateOutputParameterValue);
        }

        //public static int SampleMethodOne()
        //{
        //    // Console.WriteLine("Sample Method One is Invoked");
        //    return 1;
        //}
        //public static int SampleMethodTwo()
        //{
        //    //Console.WriteLine("Sample Method Two is Invoked");
        //    return 2;
        //}
        //public static int SampleMethodThree()
        //{
        //    //Console.WriteLine("Sample Method Three is Invoked");
        //    return 3;
        //}

        public static void SampleMethodOne( out int Number1)
        {
            
            Number1 = 1;
        }
        public static void SampleMethodTwo(out int Number2)
        {

            Number2 = 2;
        }
       
    }
}
