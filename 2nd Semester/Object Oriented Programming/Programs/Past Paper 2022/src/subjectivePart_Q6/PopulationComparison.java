package subjectivePart_Q6;

public class PopulationComparison {
    public static void main(String[] args) {
        // Initial populations
        int populationMexico = 114_000_000; // in millions
        int populationUS = 312_000_000; // in millions

        // Growth rates
        double growthRateMexico = 1.01; // 1.01 percent increase annually
        double declineRateUS = 0.15; // 0.15 percent decrease annually

        int years = 0;

        // Calculate populations until Mexico exceeds the population of the US
        while (populationMexico <= populationUS) {
            // Calculate population changes
            populationMexico *= (1 + (growthRateMexico / 100));
            populationUS *= (1 - (declineRateUS / 100));
            years++;

            // Display populations for each year
            System.out.println("Year " + years + ": Population Mexico - " + populationMexico + " million, Population US - " + populationUS + " million");
        }

        // Display the number of years it took for Mexico to exceed the US population
        System.out.println("It took " + years + " years for the population of Mexico to exceed the population of the United States.");
    }
}
