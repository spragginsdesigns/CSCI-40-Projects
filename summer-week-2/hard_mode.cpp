#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

// Evaluates presence of wisdom-related keywords in a string, returning a score.
int getWisdomScore(const std::string& answer) {
    std::vector<std::pair<std::string, int>> wisdomAnswers = {
        {"compassion", 20}, {"mercy", 20}, {"kindness", 20}, {"love", 20},
        {"empathy", 20}, {"generosity", 20}, {"helping", 20}, {"selflessness", 20},
        {"charity", 20}, {"care", 20}, {"concern", 15}, {"goodwill", 15},
        {"benevolence", 15}, {"altruism", 15}, {"neighborliness", 15},
        {"good samaritan", 20},

        {"duty", 10}, {"obligation", 10}, {"responsibility", 10},
        {"pity", 5}, {"sympathy", 5},

        {"caution", 0}, {"self-preservation", 0}, {"indifference", -5},
        {"fear", -5}, {"avoidance", -10}, {"selfishness", -10}
    };

    int score = 0;
    for (const auto& [keyword, value] : wisdomAnswers) {
        if (answer.find(keyword) != std::string::npos) {
            score += value;
        }
    }

    return std::min(std::max(score, 0), 20);  // Ensure score is between 0 and 20
}
// Provides personalized scriptural guidance based on score.
std::string getScripturalGuidance(int score, const std::string& name) {
    if (score <= 20) {
        return name + ", remember Proverbs 3:5-6: 'Trust in the LORD with all your heart and lean not on your own understanding; in all your ways submit to him, and he will make your paths straight.'";
    } else if (score <= 40) {
        return "Heed this wisdom, " + name + ": 'The fear of the LORD is the beginning of knowledge, but fools despise wisdom and instruction.' (Proverbs 1:7)";
    } else if (score <= 60) {
        return name + ", as James 1:5 says: 'If any of you lacks wisdom, you should ask God, who gives generously to all without finding fault, and it will be given to you.'";
    } else if (score <= 80) {
        return "Rejoice, " + name + "! For it is written: 'For I know the plans I have for you,' declares the LORD, 'plans to prosper you and not to harm you, plans to give you hope and a future.' (Jeremiah 29:11)";
    } else {
        return "Blessed are you, " + name + "! As Matthew 5:16 proclaims: 'Let your light shine before others, that they may see your good deeds and glorify your Father in heaven.'";
    }
}

// Main program
int main() {
    std::srand(std::time(nullptr));

    std::string name;
    std::cout << "Welcome, seeker of divine wisdom. By what name are you known to the Lord? ";
    std::getline(std::cin, name);

    std::cout << "\nAh, " << name << ", before I share the Lord's guidance, I must inquire about your heart's inclination.\n";
    std::cout << "Consider this situation from the Gospel of Luke:\n";
    std::cout << "A man was going down from Jerusalem to Jericho when he was attacked by robbers.\n";
    std::cout << "They stripped him of his clothes, beat him and went away, leaving him half dead.\n";
    std::cout << "A priest and a Levite saw him but passed by on the other side.\n";
    std::cout << "But a Samaritan, as he traveled, came where the man was; and when he saw him, he took pity on him.\n";
    std::cout << "What virtue do you think the Samaritan exemplified in this parable?\n";

    std::string answer;
    std::getline(std::cin, answer);

    int baseScore = std::rand() % 100;
    int wisdomModifier = getWisdomScore(answer);
    int finalScore = std::min(baseScore + wisdomModifier, 99);

    std::cout << "\nThe spirit of wisdom descends upon us as we seek guidance from the scriptures...\n\n";
    std::cout << getScripturalGuidance(finalScore, name) << std::endl;

    return 0;
}