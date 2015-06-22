
package main

import "fmt"

var i8 int8 = 127
var i16 int16 = 32767
var i32 int32 = 2147483647
var r rune = '\U00101234'
// runeはint32の別名
var i64 int64 = 9223372036854775807
var i int = 1
// int は処理系による。

var ui8 uint8 = 255
var b byte = 'a'
// byteはuint8の別名
var ui16 uint16 = 65535
var ui32 uint32 = 0xBadFace
var ui64 uint64 = 18446744073709551615
var ui uint = 1
// uint は処理系による。

var f32 float32 = 3.4028235E+38
var f64 float64 = 1.79769E+308

var c64 complex64 = 1+6i
var c128 complex128 = 100+106i

var str string = "str"

var array [2]int = [2]int{1, 2}
var iptr *int = nil
var i16ptr *int16 = &i16
//扱いはほぼCと同じ

var m map[string]int = map[string]int{"value1":1, "value2":2}

//チャネル型は後々・・

func main(){
    a := 1
    fmt.Println(a)
}
