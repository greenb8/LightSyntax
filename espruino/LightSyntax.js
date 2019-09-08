    var LightSyntax = function() {

    };
     
    LightSyntax.prototype.high = function(Pin) {
      //this.
      Pin.write(true);
    };
     
    LightSyntax.prototype.low = function(Pin) {
      //this.
      Pin.write(false);
    };

    LightSyntax.prototype.read = function(Pin) {
    	Pin.read();
    }
     
    /*exports.connect = function() {
      return new LightSyntax();
    };*/

