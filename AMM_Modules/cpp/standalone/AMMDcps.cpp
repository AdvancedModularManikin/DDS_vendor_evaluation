//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: AMMDcps.cpp
//  Source: AMMDcps.idl
//  Generated: Sun Apr 30 18:36:00 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "AMMDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < AMM::Physiology::HighFrequencyData, struct HighFrequencyDataSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < AMM::Physiology::Data, struct DataSeq_uniq_>;
#endif
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < AMM::Simulation::Tick, struct TickSeq_uniq_>;
#endif

const char * AMM::Simulation::TickTypeSupportInterface::_local_id = "IDL:AMM/Simulation/TickTypeSupportInterface:1.0";

AMM::Simulation::TickTypeSupportInterface_ptr AMM::Simulation::TickTypeSupportInterface::_duplicate (AMM::Simulation::TickTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Simulation::TickTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Simulation::TickTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Simulation::TickTypeSupportInterface_ptr AMM::Simulation::TickTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::Simulation::TickTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::Simulation::TickTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Simulation::TickTypeSupportInterface_ptr AMM::Simulation::TickTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::Simulation::TickTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Simulation::TickDataWriter::_local_id = "IDL:AMM/Simulation/TickDataWriter:1.0";

AMM::Simulation::TickDataWriter_ptr AMM::Simulation::TickDataWriter::_duplicate (AMM::Simulation::TickDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Simulation::TickDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Simulation::TickDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Simulation::TickDataWriter_ptr AMM::Simulation::TickDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::Simulation::TickDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::Simulation::TickDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Simulation::TickDataWriter_ptr AMM::Simulation::TickDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataWriter_ptr result;
   result = dynamic_cast < AMM::Simulation::TickDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Simulation::TickDataReader::_local_id = "IDL:AMM/Simulation/TickDataReader:1.0";

AMM::Simulation::TickDataReader_ptr AMM::Simulation::TickDataReader::_duplicate (AMM::Simulation::TickDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Simulation::TickDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Simulation::TickDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Simulation::TickDataReader_ptr AMM::Simulation::TickDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::Simulation::TickDataReader::_local_id))
   {
      result = dynamic_cast < AMM::Simulation::TickDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Simulation::TickDataReader_ptr AMM::Simulation::TickDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataReader_ptr result;
   result = dynamic_cast < AMM::Simulation::TickDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Simulation::TickDataReaderView::_local_id = "IDL:AMM/Simulation/TickDataReaderView:1.0";

AMM::Simulation::TickDataReaderView_ptr AMM::Simulation::TickDataReaderView::_duplicate (AMM::Simulation::TickDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Simulation::TickDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Simulation::TickDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Simulation::TickDataReaderView_ptr AMM::Simulation::TickDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::Simulation::TickDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::Simulation::TickDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Simulation::TickDataReaderView_ptr AMM::Simulation::TickDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Simulation::TickDataReaderView_ptr result;
   result = dynamic_cast < AMM::Simulation::TickDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::DataTypeSupportInterface::_local_id = "IDL:AMM/Physiology/DataTypeSupportInterface:1.0";

AMM::Physiology::DataTypeSupportInterface_ptr AMM::Physiology::DataTypeSupportInterface::_duplicate (AMM::Physiology::DataTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::DataTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::DataTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::DataTypeSupportInterface_ptr AMM::Physiology::DataTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::DataTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::DataTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::DataTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::DataTypeSupportInterface_ptr AMM::Physiology::DataTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::DataTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::Physiology::DataTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::DataDataWriter::_local_id = "IDL:AMM/Physiology/DataDataWriter:1.0";

AMM::Physiology::DataDataWriter_ptr AMM::Physiology::DataDataWriter::_duplicate (AMM::Physiology::DataDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::DataDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::DataDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::DataDataWriter_ptr AMM::Physiology::DataDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::DataDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::DataDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::DataDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::DataDataWriter_ptr AMM::Physiology::DataDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::DataDataWriter_ptr result;
   result = dynamic_cast < AMM::Physiology::DataDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::DataDataReader::_local_id = "IDL:AMM/Physiology/DataDataReader:1.0";

AMM::Physiology::DataDataReader_ptr AMM::Physiology::DataDataReader::_duplicate (AMM::Physiology::DataDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::DataDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::DataDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::DataDataReader_ptr AMM::Physiology::DataDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::DataDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::DataDataReader::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::DataDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::DataDataReader_ptr AMM::Physiology::DataDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::DataDataReader_ptr result;
   result = dynamic_cast < AMM::Physiology::DataDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::DataDataReaderView::_local_id = "IDL:AMM/Physiology/DataDataReaderView:1.0";

AMM::Physiology::DataDataReaderView_ptr AMM::Physiology::DataDataReaderView::_duplicate (AMM::Physiology::DataDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::DataDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::DataDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::DataDataReaderView_ptr AMM::Physiology::DataDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::DataDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::DataDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::DataDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::DataDataReaderView_ptr AMM::Physiology::DataDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::DataDataReaderView_ptr result;
   result = dynamic_cast < AMM::Physiology::DataDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::HighFrequencyDataTypeSupportInterface::_local_id = "IDL:AMM/Physiology/HighFrequencyDataTypeSupportInterface:1.0";

AMM::Physiology::HighFrequencyDataTypeSupportInterface_ptr AMM::Physiology::HighFrequencyDataTypeSupportInterface::_duplicate (AMM::Physiology::HighFrequencyDataTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::HighFrequencyDataTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::HighFrequencyDataTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::HighFrequencyDataTypeSupportInterface_ptr AMM::Physiology::HighFrequencyDataTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyDataTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::HighFrequencyDataTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::HighFrequencyDataTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::HighFrequencyDataTypeSupportInterface_ptr AMM::Physiology::HighFrequencyDataTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyDataTypeSupportInterface_ptr result;
   result = dynamic_cast < AMM::Physiology::HighFrequencyDataTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::HighFrequencyDataDataWriter::_local_id = "IDL:AMM/Physiology/HighFrequencyDataDataWriter:1.0";

AMM::Physiology::HighFrequencyDataDataWriter_ptr AMM::Physiology::HighFrequencyDataDataWriter::_duplicate (AMM::Physiology::HighFrequencyDataDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::HighFrequencyDataDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::HighFrequencyDataDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::HighFrequencyDataDataWriter_ptr AMM::Physiology::HighFrequencyDataDataWriter::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyDataDataWriter_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::HighFrequencyDataDataWriter::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::HighFrequencyDataDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::HighFrequencyDataDataWriter_ptr AMM::Physiology::HighFrequencyDataDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyDataDataWriter_ptr result;
   result = dynamic_cast < AMM::Physiology::HighFrequencyDataDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::HighFrequencyDataDataReader::_local_id = "IDL:AMM/Physiology/HighFrequencyDataDataReader:1.0";

AMM::Physiology::HighFrequencyDataDataReader_ptr AMM::Physiology::HighFrequencyDataDataReader::_duplicate (AMM::Physiology::HighFrequencyDataDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::HighFrequencyDataDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::HighFrequencyDataDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::HighFrequencyDataDataReader_ptr AMM::Physiology::HighFrequencyDataDataReader::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyDataDataReader_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::HighFrequencyDataDataReader::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::HighFrequencyDataDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::HighFrequencyDataDataReader_ptr AMM::Physiology::HighFrequencyDataDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyDataDataReader_ptr result;
   result = dynamic_cast < AMM::Physiology::HighFrequencyDataDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * AMM::Physiology::HighFrequencyDataDataReaderView::_local_id = "IDL:AMM/Physiology/HighFrequencyDataDataReaderView:1.0";

AMM::Physiology::HighFrequencyDataDataReaderView_ptr AMM::Physiology::HighFrequencyDataDataReaderView::_duplicate (AMM::Physiology::HighFrequencyDataDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean AMM::Physiology::HighFrequencyDataDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, AMM::Physiology::HighFrequencyDataDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

AMM::Physiology::HighFrequencyDataDataReaderView_ptr AMM::Physiology::HighFrequencyDataDataReaderView::_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyDataDataReaderView_ptr result = NULL;
   if (p && p->_is_a (AMM::Physiology::HighFrequencyDataDataReaderView::_local_id))
   {
      result = dynamic_cast < AMM::Physiology::HighFrequencyDataDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

AMM::Physiology::HighFrequencyDataDataReaderView_ptr AMM::Physiology::HighFrequencyDataDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   AMM::Physiology::HighFrequencyDataDataReaderView_ptr result;
   result = dynamic_cast < AMM::Physiology::HighFrequencyDataDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



