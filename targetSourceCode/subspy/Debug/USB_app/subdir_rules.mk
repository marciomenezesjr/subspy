################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
USB_app/usbConstructs.obj: ../USB_app/usbConstructs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="USB_app/usbConstructs.d" --obj_directory="USB_app" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

USB_app/usbEventHandling.obj: ../USB_app/usbEventHandling.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="D:/sandbox/workspace_v7/subspy" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.3.LTS/include" --include_path="D:/sandbox/workspace_v7/subspy/hal" --include_path="D:/sandbox/workspace_v7/subspy/driverlib" --include_path="D:/sandbox/workspace_v7/subspy/rfm69cw" --include_path="D:/sandbox/workspace_v7/subspy/Application" --include_path="D:/sandbox/workspace_v7/subspy/USB_API" --include_path="D:/sandbox/workspace_v7/subspy/USB_app" --include_path="D:/sandbox/workspace_v7/subspy/USB_config" --define=__MSP430F5529__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU23 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="USB_app/usbEventHandling.d" --obj_directory="USB_app" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


