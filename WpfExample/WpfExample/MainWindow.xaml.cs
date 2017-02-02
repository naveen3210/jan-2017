using System;
using System.Windows;
using System.Windows.Controls;

namespace WpfExample
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void btn_sum_click(object sender, RoutedEventArgs e)
        {
            int result = Int32.Parse(tb_num1.Text) + Int32.Parse(tb_num2.Text);
            tb_result1.Text = result.ToString();
        }

        private void btn_sub_click(object sender, RoutedEventArgs e)
        {
            int result = Int32.Parse(tb_num1.Text) - Int32.Parse(tb_num2.Text);
            tb_result2.Text = result.ToString();
        }

        private void btn_mul_click(object sender, RoutedEventArgs e)
        {
            int result = Int32.Parse(tb_num1.Text) * Int32.Parse(tb_num2.Text);
            tb_result3.Text = result.ToString();
        }

        private void btn_div_click(object sender, RoutedEventArgs e)
        {
            int result = Int32.Parse(tb_num1.Text) / Int32.Parse(tb_num2.Text);
            tb_result4.Text = result.ToString();
        }

        
        private void tb_result_TextChanged(object sender, TextChangedEventArgs e)
        {

        }
    }
}
