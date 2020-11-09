    	iic_write_7511(0x41, 0x10); //Power Up the txr.
    	iic_write_7511(0x98, 0x03); //ADI Recommended write_7511
    	iic_write_7511(0x9a, 0xe0); //ADI Recommended write_7511
    	iic_write_7511(0x9c, 0x30); //ADI Recommended write_7511
    	iic_write_7511(0x9d, 0x61); //ADI Recommended write_7511
    	iic_write_7511(0xa2, 0xa4); //ADI Recommended write_7511
        iic_write_7511(0xa3, 0xa4); //ADI Recommended write_7511
    	iic_write_7511(0xe0, 0xd0); //ADI Recommended write_7511
    	iic_write_7511(0xf9, 0x00); //ADI Recommended write_7511
    	iic_write_7511(0xfa, 0x00);// Set to default 0x00
    	iic_write_7511(0xe4, 0x60);// Set to default 0x60
        iic_write_7511(0xf9, 0x00);//I2C Address to recomeended 0x00
    	iic_write_7511(0xde, 0x10);//No TMDS Clk Inversion
    	iic_write_7511(0xd1, 0xff);// Set to default 0x00
    	iic_write_7511(0xBA, 0x60);// No clk delay
    	iic_write_7511(0x56, 0x28);//16:9 Aspect ratio to out put
    	iic_write_7511(0x48, 0x08); //Right Justified
    	iic_write_7511(0x15, 0x01);//I/P Formatt 4:2:2 Seperate synchs
    	iic_write_7511(0x16, 0x38);// O/P Formatt 4:4:4  RGB// For George Modified to 0x34
    	                      // Color Depth= 8
    						  // Style 2
    	                      // For Style 1 = 0x38
    	                      // For Style 2 = 0x34
    	                      // For Style 3 = 0x3c
        iic_write_7511(0x17, 0x02);// I/P Aspect ratio 16:9
    /////////////////////////////////////////////////////////////////////////////////////
    	iic_write_7511(0x18, 0xE7);////CSC ENabled
        iic_write_7511(0x19, 0x34);
    	iic_write_7511(0x1A, 0x04);
    	iic_write_7511(0x1B, 0xAD);
    	iic_write_7511(0x1C, 0x00);
    	iic_write_7511(0x1D, 0x00);
    	iic_write_7511(0x1E, 0x1C);
    	iic_write_7511(0x1F, 0x1B);
    	iic_write_7511(0x20, 0x1D);
    	iic_write_7511(0x21, 0xDC);
    	iic_write_7511(0x22, 0x04);
    	iic_write_7511(0x23, 0xAD);
    	iic_write_7511(0x24, 0x1F);
    	iic_write_7511(0x25, 0x24);
    	iic_write_7511(0x26, 0x01);
    	iic_write_7511(0x27, 0x35);
    	iic_write_7511(0x28, 0x00);
    	iic_write_7511(0x29, 0x00);
    	iic_write_7511(0x2A, 0x04);
    	iic_write_7511(0x2B, 0xAD);
    	iic_write_7511(0x2C, 0x08);
    	iic_write_7511(0x2D, 0x7C);
    	iic_write_7511(0x2E, 0x1B);
    	iic_write_7511(0x2F, 0x77);

        iic_write_7511(0x56, 0x08);//16:9 Aspect ratio to out put
        iic_write_7511(0xaf, 0x04);//HDMI Mode - 6
    	iic_write_7511(0x40, 0x80);//GC Packet Enabled
    	iic_write_7511(0x4c, 0x04);//O/p Color depth  24
    	iic_write_7511(0x55, 0x00);//o/p Format RGB formatt