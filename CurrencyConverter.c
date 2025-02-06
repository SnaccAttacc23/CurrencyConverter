using System;
using System.Net.Http;
using System.Threading.Tasks;

class CurrencyConverter {
    static async Task Main(string[] args) {
        Console.Write("Enter amount in USD: ");
        double amount = Convert.ToDouble(Console.ReadLine());

        HttpClient client = new HttpClient();
        var response = await client.GetStringAsync("https://api.exchangerate-api.com/v4/latest/USD");
        
        // Simplified parsing example
        double rate = 0.85;  // Replace with actual rate
        double converted = amount * rate;

        Console.WriteLine($"Amount in EUR: {converted}");
    }
}
