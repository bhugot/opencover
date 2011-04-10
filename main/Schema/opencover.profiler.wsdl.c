﻿
// File generated by Wsutil Compiler version 1.0092 
#include <WebServices.h>
#include "opencover.profiler.xsd.h"
#include "opencover.profiler.wsdl.h"

typedef struct _opencover_profiler_wsdlLocalDefinitions 
{
    struct // messages
    {
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Started_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Started_OutputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Stopping_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_Stopping_OutputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_TrackAssembly_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_TrackAssembly_OutputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_GetSequencePoints_InputMessage;
        WS_MESSAGE_DESCRIPTION IProfilerCommunication_GetSequencePoints_OutputMessage;
    } messages; // end of messages
    struct // XML dictionary
    {
        struct // XML string list
        {
            WS_XML_STRING IProfilerCommunication_Started_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/Started
            WS_XML_STRING IProfilerCommunication_Started_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/StartedResponse
            WS_XML_STRING IProfilerCommunication_Stopping_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/Stopping
            WS_XML_STRING IProfilerCommunication_Stopping_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/StoppingResponse
            WS_XML_STRING IProfilerCommunication_TrackAssembly_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/TrackAssembly
            WS_XML_STRING IProfilerCommunication_TrackAssembly_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/TrackAssemblyResponse
            WS_XML_STRING IProfilerCommunication_GetSequencePoints_InputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/GetSequencePoints
            WS_XML_STRING IProfilerCommunication_GetSequencePoints_OutputMessageactionName;  // urn:opencover.profiler/IProfilerCommunication/GetSequencePointsResponse
        } xmlStrings; // end of XML string list
        WS_XML_DICTIONARY dict;  
    } dictionary;  // end of XML dictionary
} _opencover_profiler_wsdlLocalDefinitions;

const static _opencover_profiler_wsdlLocalDefinitions opencover_profiler_wsdlLocalDefinitions =
{
    { // messages
        {    // message description for IProfilerCommunication_Started_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Started_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Started
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Started, 
        },    // message description for IProfilerCommunication_Started_InputMessage
        {    // message description for IProfilerCommunication_Started_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Started_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StartedResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StartedResponse, 
        },    // message description for IProfilerCommunication_Started_OutputMessage
        {    // message description for IProfilerCommunication_Stopping_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stopping_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Stopping
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Stopping, 
        },    // message description for IProfilerCommunication_Stopping_InputMessage
        {    // message description for IProfilerCommunication_Stopping_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stopping_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StoppingResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StoppingResponse, 
        },    // message description for IProfilerCommunication_Stopping_OutputMessage
        {    // message description for IProfilerCommunication_TrackAssembly_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_TrackAssembly_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/TrackAssembly
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.TrackAssembly, 
        },    // message description for IProfilerCommunication_TrackAssembly_InputMessage
        {    // message description for IProfilerCommunication_TrackAssembly_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_TrackAssembly_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/TrackAssemblyResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.TrackAssemblyResponse, 
        },    // message description for IProfilerCommunication_TrackAssembly_OutputMessage
        {    // message description for IProfilerCommunication_GetSequencePoints_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_GetSequencePoints_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/GetSequencePoints
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.GetSequencePoints, 
        },    // message description for IProfilerCommunication_GetSequencePoints_InputMessage
        {    // message description for IProfilerCommunication_GetSequencePoints_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_GetSequencePoints_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/GetSequencePointsResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.GetSequencePointsResponse, 
        },    // message description for IProfilerCommunication_GetSequencePoints_OutputMessage
    }, // end of messages 
    {    // dictionary 
        { // xmlStrings
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/Started",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 0),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/StartedResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 1),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/Stopping",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 2),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/StoppingResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 3),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/TrackAssembly",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 4),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/TrackAssemblyResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 5),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/GetSequencePoints",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 6),
            WS_XML_STRING_DICTIONARY_VALUE("urn:opencover.profiler/IProfilerCommunication/GetSequencePointsResponse",&opencover_profiler_wsdlLocalDefinitions.dictionary.dict, 7),
        },  // end of xmlStrings
        
        {   // opencover_profiler_wsdldictionary
        // c768df45-5de4-4c91-bc4d-749cc5effcfa 
        { 0xc768df45, 0x5de4, 0x4c91, { 0xbc, 0x4d, 0x74,0x9c, 0xc5, 0xef, 0xfc, 0xfa } },
        (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings,
        8,
        TRUE,
        },
    },   //  end of dictionary
}; //  end of opencover_profiler_wsdlLocalDefinitions

const _opencover_profiler_wsdl opencover_profiler_wsdl =
{
    {// messages
        {    // message description for IProfilerCommunication_Started_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Started_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Started
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Started, 
        },    // message description for IProfilerCommunication_Started_InputMessage
        {    // message description for IProfilerCommunication_Started_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Started_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StartedResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StartedResponse, 
        },    // message description for IProfilerCommunication_Started_OutputMessage
        {    // message description for IProfilerCommunication_Stopping_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stopping_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/Stopping
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.Stopping, 
        },    // message description for IProfilerCommunication_Stopping_InputMessage
        {    // message description for IProfilerCommunication_Stopping_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_Stopping_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/StoppingResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.StoppingResponse, 
        },    // message description for IProfilerCommunication_Stopping_OutputMessage
        {    // message description for IProfilerCommunication_TrackAssembly_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_TrackAssembly_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/TrackAssembly
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.TrackAssembly, 
        },    // message description for IProfilerCommunication_TrackAssembly_InputMessage
        {    // message description for IProfilerCommunication_TrackAssembly_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_TrackAssembly_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/TrackAssemblyResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.TrackAssemblyResponse, 
        },    // message description for IProfilerCommunication_TrackAssembly_OutputMessage
        {    // message description for IProfilerCommunication_GetSequencePoints_InputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_GetSequencePoints_InputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/GetSequencePoints
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.GetSequencePoints, 
        },    // message description for IProfilerCommunication_GetSequencePoints_InputMessage
        {    // message description for IProfilerCommunication_GetSequencePoints_OutputMessage
            (WS_XML_STRING*)&opencover_profiler_wsdlLocalDefinitions.dictionary.xmlStrings.IProfilerCommunication_GetSequencePoints_OutputMessageactionName, // urn:opencover.profiler/IProfilerCommunication/GetSequencePointsResponse
            (WS_ELEMENT_DESCRIPTION*)&opencover_profiler_xsd.globalElements.GetSequencePointsResponse, 
        },    // message description for IProfilerCommunication_GetSequencePoints_OutputMessage
    }, // messages
}; // end of _opencover_profiler_wsdl
