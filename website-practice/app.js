// File: app.js

const { MongoClient } = require('mongodb');

// MongoDB connection URL for local MongoDB server
const url = 'mongodb://localhost:27017';  // Replace if you're using a remote server
const client = new MongoClient(url);

// Database and collection names
const dbName = 'students';  // Replace with your database name
const collectionName = 'datas';  // Replace with your collection name

async function fetchData() {
  try {
    // Connect to the MongoDB server
    await client.connect();
    console.log('Connected successfully to MongoDB server');

    const db = client.db(dbName);  // Select the database
    const collection = db.collection(collectionName);  // Select the collection

    // Query the collection and fetch data
    const data = await collection.find({}, {projection: {fname: true, _id: false}}).toArray();  // Get all documents

    console.log('Data from MongoDB:', data);
  } catch (error) {
    console.error('Error fetching data from MongoDB:', error);
  } finally {
    // Ensure client closes after the operation
    await client.close();
  }
}

// Call fetchData to execute the operation
fetchData();
