var map = null;
var Adjame = ({lat: 5.359804, lng: -4.019285 });
var Paris = ({lat: 48.862840, lng: 2.298301});
var NewYork =({lat:40.828740, lng: -73.926146});

function initMap()
{
    console.log("INITIALIZED!")
    var div = document.getElementById("mymap")
    var Adjame = {lat: 5.359804, lng: -4.019285 };
    map = new google.maps.Map(div, {
        zoom: 13,
        center: Adjame
    });
    var marker1 = new google.maps.Marker({
        position: Adjame,
        map: map,
        title:'Adjame Abidjam',
    });

    var marker2 = new google.maps.Marker({
        position: Paris,
        map: map,
        title:'Paris,Airport',
    });

    var marker3 = new google.maps.Marker({
        position: NewYork,
        map: map,
        title: 'New York, Bronx',
    });
    marker1.addListener('click', () => clickCity(0));
    marker2.addListener('click', () => clickCity(1));
    marker3.addListener('click', () => clickCity(2));
}

function clickCity(cityId) {
  var pic = document.getElementById("pic");

  // Will set the button equal to its corresponding city
  var $ = (city) => document.getElementById(city);
  var button = [$('Adjame'), $('Paris'), $('NewYork')];

  map.setZoom(7);

  // Set the button as active
  button.map((btn) => btn === button[cityId] ? btn.className = 'active' : btn.className = '');

  switch(cityId) {
    case 0: // Adjame (Ivory Coast)
      map.setCenter(Adjame);
      pic.src = "latin-2.jpg";
      info.innerHTML = "This is the center of my old neighborhood.Pharmacy Adjame Latin.";
      break;

    case 1: // Paris
      map.setCenter(Paris);
      pic.src = "ps1.jpg";
      info.innerHTML ="From Abidjam to New York I had to transition in Paris"
      break;

    case 2: // New York
      map.setCenter(NewYork);
      pic.src = "yankee.jpg";
      info.innerHTML ="I have been living in the Bronx since I came to the US in the summer of 2015" 
      break;
  }
}
