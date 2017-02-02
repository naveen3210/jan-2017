using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ParameterizedDelegate
{
    class Program
    {
       

        public static void Main( )
        {
            Console.WriteLine("Please enter the target no.");
            int target = Convert.ToInt32(Console.ReadLine());
            Number number = new Number(target);
            Thread T1 = new Thread(new ThreadStart(Number.PrintNumbers));
            T1.Start();
            Console.ReadLine();
        }
    }

    class Number

    {
        private static int _target;

        public Number(int target)
        {
            _target = target;
        }

        public static void PrintNumbers()
        {
            for (int i = 1; i <= _target; i++)
            {
                Console.WriteLine(i);
            }
           
        }
    }
}
