#ifndef RECORD_H_INCLUDED
#define RECORD_H_INCLUDED

#define MAX_LINE_LENGTH 100

typedef enum{
    FEMALE,
    MALE
}File_tenuGender;
typedef struct{
	int8_t*  m_name;
	uint8_t  m_age;
	int8_t  m_gender;
	uint16_t m_id;
}File_tstrPatient;

uint8_t File_Add(File_tstrPatient* patient);
void File_ViewAll(void);
void File_View(File_tstrPatient* patient);
void File_Edit(File_tstrPatient* patient);

void File_Reserve(File_tstrPatient* patient);
void File_Delete(File_tstrPatient* patient);

#endif // RECORD_H_INCLUDED
