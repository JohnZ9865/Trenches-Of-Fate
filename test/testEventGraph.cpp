#include "gtest/gtest.h"
#include "../lib/Event.h"
#include "../lib/Graph.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(EventTest, ConstructorAndGetters) { 
    Event event("test", "test2", false);

    EXPECT_EQ(event.getPromptText(), "test"); 
    EXPECT_EQ(event.getText(), "test2"); 
}

TEST(EventTest, getOptions) { 
    Event event("test", "test2", false);
    event.addOption("test3", "test4", false);
    const vector<Event*>& options = event.getOptions();

    EXPECT_FALSE(event.getOptions().empty()); // make sure options are filled
}

TEST(EventTest, AddOptionAndGetOptions) {
    Event event("Prompt", "Text", false);
    event.addOption("test", "test2", true);

    const vector<Event*>& options = event.getOptions();

    ASSERT_EQ(options.size(), 1); 
    EXPECT_EQ(options[0]->getPromptText(), "test"); 
    EXPECT_EQ(options[0]->getText(), "test2"); 
}

TEST(GraphTest, ConstructorAndGetters) {
    Event* rootEvent = new Event("test", "test2", false);
    Graph graph(rootEvent);

    EXPECT_EQ(graph.getCurrentEvent(), rootEvent); // correct location
}

TEST(GraphTest, SetCurrentEventAndGet) {
    Event* rootEvent = new Event("test", "test2", false);
    Graph graph(rootEvent);

    Event* newEvent = new Event("test3", "test4", false);
    graph.setCurrentEvent(newEvent);

    EXPECT_EQ(graph.getCurrentEvent(), newEvent); // sees if the objects updates
}

// ALL THESE COMMENTED OUT CODE IS THE OLD GRAPH/EVENT TESTS

// TEST(EventTests, testeventalone1) {
//     Event event1("choose to disobey your officer", "'Coward!' He yells, drawing his pistol. Before you can do anything you get shot by him on the spot", false);
//     event1.addOption("shootback", "he shoots you again and you die", true);
//     event1.addOption("play dead", "those around you rush the officer and pin him down while you're put on a stretcher. You're carted to the hospital, where you await imminent execution for disobeying orders.", false);
//     std::ostringstream oss; 
//     event1.runEvent(oss);
//     string tmp = oss.str();

//     string expects = "'Coward!' He yells, drawing his pistol. Before you can do anything you get shot by him on the spot\nYou can now do one of the following:\nPress 0 to shootback\nPress 1 to play dead\n";
//     EXPECT_EQ(tmp, expects);
    
//     // for (int i=0; i < tmp.length(); i++) {
//     //     if (i == expects.length()) {
//     //         cout<<"expects is shorter than tmp, error occurs after end of tmp string"<<endl;
//     //         break;
//     //     }
//     //     if (expects[i] != tmp[i]) {
//     //         cout << "error occurs here, showing surroundings:" << endl;
//     //         cout << "for expect:_" << expects.substr(i-5, 10)<< "_"<<endl;
//     //         cout << "for tmp:_" << tmp.substr(i-5, 10) << "_"<<endl;
//     //         break;
//     //     }

//     // }
// }


// TEST(EventTests1, testeventalone2) {
//     Event e1("p1", "e1", false);
//     e1.addOption("p2", "e2", true);
//     e1.addOption("p3", "e3", false);
//     std::ostringstream oss;
//     e1.runEvent(oss);

//     string tmp = oss.str();
//     EXPECT_EQ(tmp, "e1\nYou can now do one of the following:\nPress 0 to p2\nPress 1 to p3\n");
// }


// TEST(EventTests1, testeventalone3) {
//     Event e1("Attack the commisar", "The commisar declares you as enemy of the people and executes you on the spot.", true);
//     std::ostringstream oss;
//     e1.runEvent(oss);

//     string tmp = oss.str();
//     EXPECT_EQ(tmp, "The commisar declares you as enemy of the people and executes you on the spot.\nFor better or for worse, your story has come to an end\n");
// }


// TEST(GraphTest1, testGraph1) {
//     Event* event1 = new Event("choose to disobey your officer", "'Coward!' He yells, drawing his pistol. Before you can do anything you get shot by him on the spot", false);
//     event1->addOption("shootback", "he shoots you again and you die", true);
//     event1->addOption("play dead", "those around you rush the officer and pin him down while you're put on a stretcher. You're carted to the hospital, where you await imminent execution for disobeying orders.", false);


//     Graph g(event1);


//     std::istringstream iss("24 hasd invalids 0");
//     std::ostringstream oss;


//     g.runCurrentEvent(iss, oss);

//     EXPECT_EQ(g.getCurrPlotPt(), "he shoots you again and you die");
// }



