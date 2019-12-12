using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ToyCLR;

namespace ToyCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            ToyUse m = new ToyUse(1, 2);
            double result = m.DoCalculation();
            int eeee = m.TryPhoxi();
            Console.WriteLine("Result is " + result);
            Console.Read();
        }
    }
}
