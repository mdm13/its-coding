

let lib = (function () {

    function passAdd(key, value) {

        if (!key) return

        var s = localStorage.getItem('its-pass')

        if (!s) {
            pass = {}
        } else {
            pass = JSON.parse(s)
        }

        pass[key] = value

        //save data to storage
        localStorage.setItem('its-pass', JSON.stringify(pass))

    }

    function passSearchOne(key) {

        var s = localStorage.getItem('its-pass')
        if (!s) return undefined

        pass = JSON.parse(s)

        return pass[key]
    }


    function passSearchAll(key) {

        var s = localStorage.getItem('its-pass')
        if (!s) return undefined

        pass = JSON.parse(s)
        var result = []

        for (const [k, value] of Object.entries(pass)) {

            if (k.startsWith(key)) {
                result.push({ key: k, value })
            }
        }

        return result
    }


    return {passAdd, passSearchOne,passSearchAll};

})();