const calculadora = {
    name : "Brennis",
    suma :  2 + 4,
    sayMyName: function(){
        console.log("Mi nombres es ", this.name);
    },
    sayMyNameArrow : function(){
        console.log("La suma de los digitos de mi edad es ", this.suma);
    }
}
calculadora.sayMyName();
calculadora.sayMyNameArrow();

