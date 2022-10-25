package main

import (
	"fmt"
	"os"
	"strconv"
	"strings"
)

func validateSlice(slice []int) {
	if slice == nil || len(slice) <= 0 {
		fmt.Println("invalid slice input")
		return
	}
}

func check(e error) {
	if e != nil {
		panic(e)
	}
}

func readTextFile(input string) []int {
	raw_data, err := os.ReadFile(input)
	check(err)

	temp := strings.Split(string(raw_data), "\n")

	var numList = []int{}

	for _, obj := range temp {
		temp_int, err := strconv.Atoi(obj)
		check(err)
		numList = append(numList, temp_int)
	}

	//fmt.Printf("%v \n", reflect.TypeOf(numList))

	return numList
}

func numOfMeasurementIncreases(num_list []int) {
	validateSlice(num_list)

	var count int = 0

	for i, elem := range num_list {
		if i == 0 {
			continue
		}

		if elem > num_list[i-1] {
			count++
		}
	}

	fmt.Println(count)
}

func main() {

	fmt.Println("init readings")
	var measurementReadings []int = readTextFile("input1.txt")

	numOfMeasurementIncreases(measurementReadings)
}
