import profilePic from './assets/profile.jpg'

function Card(){

  return(

    <div className="card">
      <img className="card-image" src={profilePic} alt="Profile Picture" ></img>
      <h2 className="card-title">Eriel Cabrera</h2>
      <p className="card-text">I am studying computer engineering @ FIU and workout</p>
    </div>
  );
}

export default Card