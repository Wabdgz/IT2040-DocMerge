using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Threading.Tasks;
using static System.Net.WebRequestMethods;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int quest = 0;
            Console.WriteLine("Document Merger\n");
            while (quest == 0)
            {
                Console.WriteLine("What is the name of the first file?");
                var info = new List<string> { @"C:\new folder\dogs", "C:\new folder\tigers" };
                string name1 = Console.ReadLine();
                string CaseA = "Dogs";
                string CaseB = "Tigers";
                string CaseC = "Basketball";
                string CaseD = "Walter";
                string CaseE = "Beardman";
                string CaseF = "File";
                String CaseG = "Games";
                File.CreateText(CaseA);
                File.CreateText(CaseB);
                File.CreateText(CaseC);
                File.CreateText(CaseD);
                File.CreateText(CaseE);
                File.CreateText(CaseF);
                File.CreateText(CaseG);
                while(File.Exists(name1) == false)
                {
                    Console.WriteLine("The File you have selected\n Please try again.");
                    name1 = Console.ReadLine();
                }
                Console.WriteLine("What is the name of the second file?");
                string name2;
                name2= Console.ReadLine();

            }
            string merge = name1 + name2 + ",txt";
            Console.WriteLine("The merged files are {0}, and {1}, together they create {2}", name1, name2, merge);
            StreamWriter sw = null;
            try
            {
                sw = new StreamWriter(merge);
                Console.WriteLine("The Two files that have been merged have been saved!" + merge + "the document has been merged");

            }
            catch(Exception e)
            {
                Console.WriteLine(e);
            }
            finally
            {
                if(sw != null)
                {
                    sw.Close();
                }
            }
            Console.WriteLine("Would you like to merge two more files? If so press any key, if no enter no");
            string test;
            test = Console.ReadLine();
            if(test == "no")
            {
                quest = 1;
            }
        }

    }
}
