#include <stdio.h>    // นำเข้าไลบรารีมาตรฐาน สำหรับการรับค่าและแสดงผล (printf, scanf)

int main() {          // ฟังก์ชันหลักของโปรแกรม เป็นจุดเริ่มต้นเมื่อรัน
    int start, stop;  // ประกาศตัวแปรชนิด int 2 ตัว สำหรับเก็บค่าตัวเลขเริ่มต้นและสิ้นสุด

    while (1) {       // ลูป while แบบไม่รู้จบ (ใช้เลข 1 แทน true) เพื่อวนถามจนกว่าจะป้อนค่าถูกต้อง
        printf("start number: ");   // แสดงข้อความเพื่อให้ผู้ใช้ป้อนค่าตัวเลขเริ่มต้น
        scanf("%d", &start);        // รับค่าจำนวนเต็มจากผู้ใช้แล้วเก็บในตัวแปร start

        printf("stop number: ");    // แสดงข้อความเพื่อให้ผู้ใช้ป้อนค่าตัวเลขสิ้นสุด
        scanf("%d", &stop);         // รับค่าจำนวนเต็มจากผู้ใช้แล้วเก็บในตัวแปร stop

        if (start < stop) {         // ตรวจสอบว่าค่าที่ป้อนมาถูกต้องหรือไม่ (start ต้องน้อยกว่า stop)
            break;                  // ถ้าเงื่อนไขถูกต้อง ออกจากลูป while
        } else if (start == stop) { // ถ้า start เท่ากับ stop
            printf("Your Start number is equal to Stop number, please try again!\n\n");  
            // แจ้งผู้ใช้ว่าค่า start และ stop เท่ากัน ต้องลองใหม่
        } else {                    // กรณีอื่น ๆ (start > stop)
            printf("Your Start number is greater than Stop number, please try again!\n\n");  
            // แจ้งผู้ใช้ว่า start มากกว่า stop ต้องลองใหม่
        }
    }

    printf("start number is %d and stop number is %d\n", start, stop);  // แสดงค่า start และ stop ที่ป้อนมาถูกต้องแล้ว
    printf("-------------\n");                                         // แสดงเส้นคั่น

    printf("sequence from start to stop: ");   // แสดงข้อความนำหน้าลำดับตัวเลข
    for (int i = start; i <= stop; i++) {      // ลูป for นับจาก start ไปจนถึง stop เพิ่มค่า i ทีละ 1
        printf("%d ", i);                      // แสดงค่าของ i ในแต่ละรอบของลูป
    }

    printf("\nThank you\n");   // หลังจากแสดงผลเสร็จแล้ว พิมพ์ข้อความ "Thank you"

    return 0;   // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จสมบูรณ์
}
