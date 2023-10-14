/*
#############################################
##DS Programming Guide - From Zero To Hero!##
####Example #2 - MODE 0 Tiled Backgrounds####
#############################################
*/

/*
############
##Includes##
############
*/

// Include C
#include <stdio.h>

// Include Libnds
#include <nds.h>

// Include NFLib
#include <nf_lib.h>

/*
###############
##Main(){...}##
###############
*/

int main(int argc, char **argv) {

	NF_Set2D(0, 0);				// Turn on MODE 0 on the Top Screen
	
	NF_SetRootFolder("NITROFS");	// Set the Root Folder

	NF_InitTiledBgBuffers();	// Initialize the Tiled Backgrounds System on the Top Screen
	NF_InitTiledBgSys(0);

	// Load the Tiled Background
	NF_LoadTiledBg("bg/MenuTop", "MenuTop", 256, 256);

	NF_CreateTiledBg(0, 3, "MenuTop");
	
	while(1){
	
		swiWaitForVBlank();
		
	}
	
	return 0;
}