const { once } = require('events')
const express = require('express')
const mongoose = require('mongoose')
const path = require('path')
const port = 3019

const app = express()
app.use(express.static(__dirname))
app.use(express.urlencoded({extended:true}))

mongoose.connect('mongodb://127.0.0.1:27017/students')

const db = mongoose.connection
db.once('open',()=>{
  console.log("MongoDB connection Successful")
})

const userSchema = new mongoose.Schema({
  fname:String,
  lname:String,
  zip:String
})

const Users = mongoose.model("data", userSchema)

app.get('/',(req,res)=>{
  res.sendFile(path.join(__dirname,'form.html'))
})

app.post('/post',async(req,res)=>{
  const {fname,lname,zip} = req.body
  const user = new Users({
    fname,
    lname,
    zip
  })
  await user.save()
  console.log(user)
  res.send("Form Submission Successful")
})

app.listen(port,()=>{
  console.log("Server Started")
})