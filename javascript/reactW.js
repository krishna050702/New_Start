class Person {
    constructor (name)
    {
        this.name=name;
    }
    greet(){
        console.log("Hello"+this.name+"!");
    }
}

const o1=new Person("Max");