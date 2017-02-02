/// <reference path="angular.min.js" />

//// create module
//var myapp = angular.module("myModule", []);

//// create controller
//var mycontroller = function($scope) {
//    $scope.message = "AngularJS Function";
//}
// register controller to module
//myapp.controller("mycontroller", mycontroller);

// create module
var myapp = angular.module("myModule", [])
                    .controller("mycontroller", function ($scope) {
    var employee = {
            
        firstName : " Naveen",
        lastName: "Reddy",
        Gender: "Male",
        Flag: "/Images/indian-flag.jpg"
    };
    var customer = [
        { firstName: "Naveen", lastName: "Reddy", Gender: "Male", Number: 56894586 },
        { firstName: "Ramesh", lastName: "Reddy", Gender: "Male", Number: 56689586 },
        { firstName: "Ben", lastName: "Hur", Gender: "Male", Number: 56256898 },
        { firstName: "Sam", lastName: "john", Gender: "Male", Number: 56256893 },
        { firstName: "Kajal", lastName: "Agarwal", Gender: "Female", Number: 25689354 }
    ];

        $scope.customer = customer;
    $scope.employee = employee;
    $scope.message = "AngularJS Function";
});