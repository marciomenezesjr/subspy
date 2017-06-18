################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
driverlib/dma.obj: ../driverlib/dma.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/dma.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/gpio.obj: ../driverlib/gpio.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/gpio.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/pmm.obj: ../driverlib/pmm.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/pmm.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/rtc_a.obj: ../driverlib/rtc_a.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/rtc_a.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/sfr.obj: ../driverlib/sfr.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/sfr.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/timer_a.obj: ../driverlib/timer_a.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/timer_a.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/timer_b.obj: ../driverlib/timer_b.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/timer_b.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/tlv.obj: ../driverlib/tlv.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/tlv.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/ucs.obj: ../driverlib/ucs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/ucs.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/usci_b_spi.obj: ../driverlib/usci_b_spi.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/usci_b_spi.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

driverlib/wdt_a.obj: ../driverlib/wdt_a.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="driverlib/wdt_a.d" --obj_directory="driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


