OUTPUT_FORMAT ("elf32-littlearm", "elf32-bigarm", "elf32-littlearm")
SEARCH_DIR(.)
INCLUDE "memory.ld"

/* Section Definitions */ 
SECTIONS 
{ 
    .text : 
    { 
        KEEP(*(.isr_vector .isr_vector.*)) 
        *(.text .text.* .gnu.linkonce.t.*) 	      
        *(.glue_7t) *(.glue_7)		                
        *(.rodata .rodata* .gnu.linkonce.r.*)		    	                  
    } > rom
    
    .ARM.extab : 
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > rom
    
    .ARM.exidx :
    {
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
    } > rom
    
    . = ALIGN(4); 
    _etext = .;
    _sidata = .; 
    		
    .data : AT (_etext) 
    { 
        _sdata = .; 
        *(.data .data.*) 
        . = ALIGN(4); 
        _edata = . ;
    } > ram

    /* .bss section which is used for uninitialized data */ 
    .bss (NOLOAD) : 
    { 
        _sbss = . ; 
        *(.bss .bss.*) 
        *(COMMON) 
        . = ALIGN(4); 
        _ebss = . ; 
    } > ram
    
    /* stack section */
    .co_stack (NOLOAD):
    {
        . = ALIGN(8);
        *(.co_stack .co_stack.*)
    } > ram
       
    . = ALIGN(4); 
    /* flash page size is 0x800 */
    /* default configuration section put at the second last flash page */
    _sdefconf = 0x08000000 + 0x00080000 - 0x800 - 0x800;
    .co_defconf _sdefconf : 
    {
      	_sdefconf = . ;
       KEEP(*(.co_defconf .co_defconf.*))
        _edefconf = . ; 
    } > rom     
    
    /* configuration section put at the end 1kb of flash ie last page */
    _sconf = 0x08000000 + 0x00080000 - 0x800 ;
    .co_conf _sconf : 
    {
      	_sconf = . ;
       KEEP(*(.co_conf .co_conf.*))
        _econf = . ; 
    } > rom   
     
    _end = . ; 
} 