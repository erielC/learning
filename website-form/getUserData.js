// File: mongodb_connect.js

const { MongoClient } = require('mongodb');

// Step 1: Define your MongoDB connection URI
const uri = "mongodb://localhost:27017";  // Replace with your actual MongoDB connection string if needed

// Step 2: Create a new MongoClient
const client = new MongoClient(uri);

async function run() {
    try {
        // Step 3: Connect to the MongoDB server
        await client.connect();

        // Step 4: Access the 'students' database
        const database = client.db('students');

        // Step 5: Access the 'datas' collection
        const collection = database.collection('datas');

        // Step 6: Query all documents in the 'datas' collection
        const cursor = collection.find();

        // Step 7: Print out each document (user data)
        await cursor.forEach(doc => console.log(doc));
    } finally {
        // Step 8: Close the connection once the query is complete
        await client.close();
    }
}

// Run the function
run().catch(console.dir);
