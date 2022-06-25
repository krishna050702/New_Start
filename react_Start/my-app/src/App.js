import logo from './logo.svg';
import './App.css';

let name="Krishna";
function App() {
  return (
    <>
    <nav>
    <li>Home</li>
    <li>About</li>
    <li>Contact</li> 
  </nav>
  <div className="container">
    <h1>Hello {name}</h1>
    <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Doloribus facilis rerum vel, possimus asperiores, illum beatae accusantium quos atque pariatur nam sunt. Consectetur aut laborum, esse veniam mollitia maiores alias!</p>
  </div>
  </>
  )
}

export default App;
 