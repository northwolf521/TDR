/**
 * Autogenerated by HotScript (0.0.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "hotpot/hp_platform.h"
#include "hotpot/hp_error_code.h"
#include "hotprotocol/hp_abstract_reader.h"
#include <string.h>
#include "hotpot/hp_error_code.h"
#include "hoterror/hp_error_code_reader.h"
#include "hoterror/hp_error_msg.h"
HP_ERROR_CODE read_HP_ERROR_MSG(HPAbstractReader *self, HP_ERROR_MSG *data)
{
    if(read_struct_begin(self, "HP_ERROR_MSG") != E_HP_NOERROR) goto ERROR_RET;
    if(read_field_begin(self, "error_code") != E_HP_NOERROR) goto ERROR_RET;
    if(read_HP_ERROR_CODE(self, &data->error_code) != E_HP_NOERROR) goto ERROR_RET;
    if(read_field_end(self, "error_code") != E_HP_NOERROR) goto ERROR_RET;
    if(read_field_begin(self, "error_msg") != E_HP_NOERROR) goto ERROR_RET;
    if(read_string(self, data->error_msg, MAX_ERROR_MSG_LENGTH) != E_HP_NOERROR) goto ERROR_RET;
    if(read_field_end(self, "error_msg") != E_HP_NOERROR) goto ERROR_RET;
    if(read_struct_end(self, "HP_ERROR_MSG") != E_HP_NOERROR) goto ERROR_RET;
    return E_HP_NOERROR;
ERROR_RET:
    return E_HP_ERROR;
}
HP_ERROR_CODE read_HP_ERROR_MSG_LIBRARY(HPAbstractReader *self, HP_ERROR_MSG_LIBRARY *data)
{
    if(read_struct_begin(self, "HP_ERROR_MSG_LIBRARY") != E_HP_NOERROR) goto ERROR_RET;
    if(read_counter(self, "error_list_num", &data->error_list_num) != E_HP_NOERROR) goto ERROR_RET;
    if(read_field_begin(self, "error_list") != E_HP_NOERROR) goto ERROR_RET;
    {
        hpuint32 i;
        if(read_vector_begin(self) != E_HP_NOERROR) goto ERROR_RET;
        for(i = 0; i < data->error_list_num; ++i)
        {
            if(read_vector_item_begin(self, i) != E_HP_NOERROR) goto ERROR_RET;
            if(read_HP_ERROR_MSG(self, &data->error_list[i]) != E_HP_NOERROR) goto ERROR_RET;
            if(read_vector_item_end(self, i) != E_HP_NOERROR) goto ERROR_RET;
        }
        if(read_vector_end(self) != E_HP_NOERROR) goto ERROR_RET;
    }
    if(read_field_end(self, "error_list") != E_HP_NOERROR) goto ERROR_RET;
    if(read_struct_end(self, "HP_ERROR_MSG_LIBRARY") != E_HP_NOERROR) goto ERROR_RET;
    return E_HP_NOERROR;
ERROR_RET:
    return E_HP_ERROR;
}
