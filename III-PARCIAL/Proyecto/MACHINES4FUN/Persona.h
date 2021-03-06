/***********************************************************************
 * Module:  Persona.h
 * Author:  Alvaro Zuma, Johnny Loachamin
 * Modified: Tuesday, February 08, 2021 19:25:30 PM
 * Purpose: Declaration of the class Persona
 ***********************************************************************/
#include<iostream>

#if !defined(__MACHINE4FUN_LISTA_DOBLE_Persona_h)
#define __MACHINE4FUN_LISTA_DOBLE_Persona_h

class Persona
{
public:
   Persona();
   ~Persona();
   std::string getId(void);
   void setId(std::string newId);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getCorreo(void);
   void setCorreo(std::string newCorreo);

protected:
private:
   std::string id;
   std::string nombre;
   std::string apellido;
   std::string correo;


};

#endif

