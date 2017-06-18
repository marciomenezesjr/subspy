XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXxxxxxxxxxxxxxxXxx
X   	Artwork and documentation done by: 					X
X										X
X	TEXAS INSTRUMENTS NORWAY LPRF              				X
X  										X
X	Address: Hoffsveien 70C    0377 OSLO, Norway         			X
X 	web: http://www.ti.com/lsds/ti/wireless_connectivity/overview.page	x	
X                                                           			X
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

PCB NAME : CC13xxEM-7XD-4251
REVISION: 1.1.0
DATE: 2015-11-19

FILE:  PACKED WITH WinZIP 

Subclass Name	Material	Thickness (MM)	Dielectric Constant	Loss Tangent
TOP		COPPER		0.035		NA			NA
		FR-4		0.175		4.4			0.016
L2		COPPER		0.0175		NA			NA
		FR-4		1.14		4.4			0.016
L3		COPPER		0.0175		NA			NA
		FR-4		0.175		4.4			0.016
BOTTOM		COPPER		0.035		NA			NA
----------------------------------------------------------------------------------
Total				1.6

DE104iML or equivalent substrate (Resin contents around 45%, which gives Er=4.4@2.4GHz, TanD=0.016) 

Soldermask color: GREEN

0.15 MM MIN TRACE WIDTH AND 0.15 MM MIN ISOLATION.

Via L1-L4


                 
FILE NAME            		DESCRIPTION                               	FILE TYPE
-------------------------------------------------------------------------------------------
***PCB MANUFACTURING FILES: (Folder Gerber)
Top.art                 	LAYER 1 TOP SIDE/POSITIV              		EXT. GERBER
L2.art				LAYER 2 POSITIVE				EXT. GERBER
L3.art				LAYER 3 POSITIVE				EXT. GERBER
Bottom.art                  	LAYER 4 SOLDER SIDE/POSITIV                 	EXT. GERBER
outline.art		        Outline of PCB				        EXT. GERBER
soldmask_top.art            	SOLDER MASK COMPONENT SIDE/NEGATIVE             EXT. GERBER
soldmask_bottom.art             SOLDER MASK SOLDER SIDE/NEGATIVE            	EXT. GERBER
silk_top.art	            	SILKSCREEN COMPONENT SIDE/POSITIVE              EXT. GERBER
silk_bottom.art		        SILKSCREEN SOLDER SIDE/POSITIVE             	EXT. GERBER
drill.art		        DRILL/MECHANICAL DRAWING                    	EXT. GERBER
art_param.txt                   Gerber report 				        ASCII
photoplot.log                   Gerber report					ASCII


***PCB DRILL FILES: (Folder Drill)
NCdrill-1-4.drl                 NC DRILL Plated		                       	EXCELLON
NCdrill-1-4-np.drl		NC DRILL non-Plated		 	        EXCELLON
ncdrill.log		        DRILL/NC DRILL REPORT                           ASCII
nc_pararm.txt		        PCB PHOTOPLOTTER DEFINITION FILE	        ASCII
nc_tools_auto.txt               Drill diameters				        ASCII


*** ASSEMBLY FILES: (Folder Assembly)
assembly_top.art	        ASSEMBLY DRAWING COMPONENT SIDE/NEGATIVE        EXT. GERBER
assembly_bot_mirror.art        	ASSEMBLY DRAWING SOLDER SIDE/NEGATIVE, MIRROR   EXT. GERBER
paste_top.art	             	SOLDER PAST COMPONENT SIDE/POSITIVE             EXT. GERBER
paste_bottom.art	        SOLDER PAST SOLDER SIDE/POSITIVE                EXT. GERBER
pick_and_place.txt            	PICK AND PLACE FILE 			        ASCII
CC13xxEM_7XD_4251_partlist_1_1_0.xls 	BOM				        Excel


*** Document files: (Folder docs)
CC13xxEM_7XD_4251_schematic_1_1_0.pdf	Circuit Diagram				PDF
CC13xxEM_7XD_4251_layout_1_1.pdf        Layout Diagram				PDF
CC13xxEM_7XD_4251_mech_draw_1_1.pdf	Mechanical drawing     			PDF
CC13xxEM_7XD_4251_assembly_1_1_0.pdf	Assembly drawing                	PDF


README.TXT           			THIS FILE                     	        ASCII


R 1.0.0
--------------------------------------------------------------------------------------------
-Initial release revision. Based on CC13xxEM-7XD-7793 R1.3.3

R1.0.1
---------------------------------------------------------------------------------------------
- L11 -> 27nH
- C14 -> 3.0pF

R1.1.0
---------------------------------------------------------------------------------------------
C343 - Removed
C482 - Removed
Converting to 4 layer PCB based on CC13xxEM-7XD-7793_4L


END.
