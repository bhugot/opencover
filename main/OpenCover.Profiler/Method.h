#include "Instruction.h"
#include "ExceptionHandler.h"
#include "MethodBuffer.h"


/// <summary>The <c>Method</c> entity builds a 'model' of the IL that can then be modified</summary>
class Method : MethodBuffer
{
public:
    Method(IMAGE_COR_ILMETHOD* pMethod);
    ~Method();

public:
    long GetMethodSize();
    void WriteMethod(IMAGE_COR_ILMETHOD* pMethod);
    void InsertSequenceInstructionsAtOriginalOffset(long offset, InstructionList &instructions);
    void DumpIL();

public:
    void SetMinimumStackSize(unsigned int minimumStackSize)
    {
        if (m_header.MaxStack < minimumStackSize)
        {
            m_header.MaxStack = minimumStackSize;
        }
    }

private:
    void ReadMethod(IMAGE_COR_ILMETHOD* pMethod);
    void ReadBody();
    void ConvertShortBranches();
    void ResolveBranches();
    Instruction * GetInstructionAtOffset(long offset);
    void ReadSections();
    void RecalculateOffsets();

private:
    // all instrumented methods will be FAT (with FAT SECTIONS if exist) regardless
    IMAGE_COR_ILMETHOD_FAT m_header;

#ifdef TEST_FRAMEWORK
public:
#else
private:
#endif
    ExceptionHandlerList m_exceptions;
    InstructionList m_instructions;

};

 
 

