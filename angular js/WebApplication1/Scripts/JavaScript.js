/// <reference path="angular.min.js" />

var MyApp = angular.module("myMod", [])
    .controller("myControl", function($scope) {

        var employ = [
            { name: "John", dateOfBirth: new Date("November 12,1987"), gender: "Male", Salary: "55000.64" },
            { name: "Flinch", dateOfBirth: new Date("May 18,1993"), gender: "Male", Salary: "68953" },
            { name: "Samantha", dateOfBirth: new Date("November 22,1997"), gender: "Female", Salary: "55004" },
            { name: "Kajal", dateOfBirth: new Date("June 12,1990"), gender: "Female", Salary: "58968" },
            { name: "Gary", dateOfBirth: new Date("July 12,1987"), gender: "Male", Salary: "75000" }
        ];

        $scope.employ = employ;
        $scope.rowLimit = 3;

    });