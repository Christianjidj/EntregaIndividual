# EntregaIndividual
Interfaz de calendario en Qt


Codigo en funcionamiento:

#Calendario:

<img width="1533" height="888" alt="image" src="https://github.com/user-attachments/assets/b56f2c73-5bfc-40e9-aff2-ffaa505bd190" />  
<br>

#Funcionamiento del boton de next:

<img width="912" height="593" alt="image" src="https://github.com/user-attachments/assets/ce50dc0f-5c8d-4303-ab1c-b5dc4f44f0c1" />

<img width="882" height="661" alt="image" src="https://github.com/user-attachments/assets/7a46dc5a-cd2b-43c7-8d6f-c3e004660197" />  
<br>

#Funcionamiento del boton de previous:

<img width="928" height="677" alt="image" src="https://github.com/user-attachments/assets/035edb93-24c1-4155-8f4d-bd926af9673f" />

<img width="940" height="608" alt="image" src="https://github.com/user-attachments/assets/2a7d8847-9e6a-4699-953b-0321903449dc" />  
<br>

#Interfaz de cada dia al hacer click en cualquier dia.

<img width="512" height="857" alt="image" src="https://github.com/user-attachments/assets/cc723045-1f2f-47f0-9212-1dc8985cd764" />  

<br>

#Interfaz de ventana de crear tarea al hacer click:

<img width="997" height="781" alt="image" src="https://github.com/user-attachments/assets/608ba0c5-256d-4b41-aa83-6949f4c8837f" />
Esta ventana aparece ya sea abierta por el boton de crear tarea en la ventana principal del calendario o en la ventana de dia (dialog).  

<br>

```mermaid
classDiagram

class calendarWin {
    -QDate currentMonth
    -QVector<QPushButton*> dayButtons
    -updateCalendar()

    +on_createTaskButton_clicked()
    +on_nextMonthButton_clicked()
    +on_previousMonthButton_clicked()
}

class DayAgendaDialog {
    +addTaskCard(title,time,description)
    +on_createTaskButton_clicked()
    +on_closeButton_clicked()
}

class NewTaskDialog {
    +getTitle()
    +getDescription()
    +getDateTime()
    +on_saveButton_clicked()
}

QMainWindow <|-- calendarWin
QDialog <|-- DayAgendaDialog
QDialog <|-- NewTaskDialog

calendarWin --> DayAgendaDialog : abre agenda
calendarWin --> NewTaskDialog : crea tarea

DayAgendaDialog --> NewTaskDialog : recibe datos
```
Argumentacion;

La herencia se utilizó para especializar las ventanas de la interfaz gráfica proporcionadas por Qt. La clase calendarWin hereda de QMainWindow, mientras que DayAgendaDialog y NewTaskDialog heredan de QDialog. Gracias a esto, las clases desarrolladas reutilizan funcionalidades ya implementadas por Qt, como la gestión de ventanas, eventos y controles gráficos, permitiendo concentrar el desarrollo en la lógica específica del calendario y la gestión de tareas.

Modificadores de acceso

Se emplearon modificadores de acceso para encapsular la información interna de las clases. Los atributos como ui, currentMonth y dayButtons fueron declarados como privados para evitar modificaciones directas desde otras partes del programa. Por otro lado, los métodos que deben ser accesibles desde otras clases, como los constructores y algunos métodos de consulta, fueron declarados públicos. Esto mejora la seguridad y el mantenimiento del código al controlar el acceso a los datos internos.

Sobrecarga y sobreescritura de métodos

En el proyecto se utiliza la sobreescritura de métodos al redefinir los destructores de las clases derivadas (~calendarWin, ~DayAgendaDialog y ~NewTaskDialog) para realizar la liberación adecuada de recursos asociados a cada ventana. Además, se aprovecha la infraestructura de Qt, donde muchos métodos virtuales de las clases base pueden ser redefinidos por las clases derivadas cuando sea necesario.

Polimorfismo

El polimorfismo se utiliza de manera implícita a través del framework Qt. Las clases desarrolladas son tratadas como objetos de sus clases base (QMainWindow y QDialog), permitiendo que Qt gestione las ventanas mediante referencias o punteros a estas clases generales. Esto facilita la integración de las ventanas personalizadas dentro del sistema de interfaces gráficas de Qt.


Reflexión:

Aprendi muchas cosas sobre C++ uy el ambiente detrabajo de un progamador, le batalle mucho, pero me esforce mucho mas. Esta experiencia me ayudo para muchas cosas, me dejo muchos aprendizajes academicos, pero tambien me hizo reflexionar sobre mi futuro academico y profesional.




