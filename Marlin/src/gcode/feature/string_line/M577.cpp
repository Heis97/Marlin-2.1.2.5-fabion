#include "../../../inc/MarlinConfig.h"
#include "../../gcode.h"
#include "../../../module/planner.h"
#include "../../../module/string_periphery.h"

void GcodeSuite::M577() {
  if (parser.seen('V') && parser.seen('I') && parser.intval('I')>=0 && parser.intval('I')<SERVO_NUM) 
  {
    motors.servo_counter_work_max[parser.intval('I')] = (long)parser.intval('V');
  } 

}
