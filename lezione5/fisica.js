
let lib = (function () {

    var dt = 0.5   //time interval
    

    function moveBall() {

        var el = document.getElementById("ball");

        pos.x = parseInt(getComputedStyle(el).left)
        pos.y = parseInt(getComputedStyle(el).top)

        controllaOstacoli()

        vel.x = vel.x + dt * acc.x
        vel.y = vel.y + dt * acc.y

        pos.x = pos.x + dt * vel.x
        pos.y = pos.y + dt * vel.y

        el.style.left = pos.x + 'px';
        el.style.top = pos.y + 'px';


    }

    function init(fn) {

        var el = document.getElementById("ball");
        el.style.left = pos.x + 'px';
        el.style.top = pos.y + 'px';

        controllaOstacoli=fn

        setInterval(moveBall, 100);

    }


    return { moveBall, init };

})();