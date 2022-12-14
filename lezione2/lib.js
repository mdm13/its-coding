
//confronta il numero con un altro numero
function analizza() {
    var a = +document.getElementById("numberA").value;

    var response = 'Boh?'

    if (a == 10) {
        response = 'il numero è uguale a 10'
    } else if (a > 10) {
        response = 'il numero è maggiore di 10'
    } else if (a < 10) {
        response = 'il numero è minore di 10'
    } else {

    }

    document.getElementById("result").innerHTML = response;


}


//converti il valore in codice binario
function dec2bin() {
    var a = +document.getElementById("numberA").value;

    var response = 'il numero in cifre binarie è ' + a.toString(2)

    document.getElementById("result").innerHTML = response;
}

function fahreneit() {

    var a = +document.getElementById("numberA").value;

    var response = 'la temperatura in Fahreneit è '+ ((a*9.0/5.0) + 32)

    document.getElementById("result").innerHTML = response;

}


