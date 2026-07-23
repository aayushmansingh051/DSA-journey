#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

void printItinerary(unordered_map<string, string> tickets) {
    unordered_set<string> to;  // stores all destination cities

    // Step 1: Fill destination set
    for (pair<string, string> ticket : tickets) {
        to.insert(ticket.second);
    }

    // Step 2: Find the starting city (not present in destination set)
    string start;
    for (pair<string, string> ticket : tickets) {
        if (to.find(ticket.first) == to.end()) {
            start = ticket.first;
            break;
        }
    }

    // Step 3: Print the itinerary using hashing
    cout << "Itinerary: ";
    while (tickets.find(start) != tickets.end()) {
        cout << start << " -> " << tickets[start] << ", ";
        start = tickets[start];
    }
    cout << "END" << endl;
}

int main() {
    unordered_map<string, string> tickets;
    tickets["Chennai"] = "Bengaluru";
    tickets["Mumbai"] = "Delhi";
    tickets["Goa"] = "Chennai";
    tickets["Delhi"] = "Goa";

    printItinerary(tickets);
    return 0;
}
