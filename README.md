<h3>Aquantia Linux Firmware Utility</h3>
<p> A very, very, young tool for programming the firmware.
<p> Currently a proof-of-concept that misses some additional features
<p>
<h3> How to use it </h3>
<p>1. Clone mdio-proxy-module repo and follow the instructions 
<url>https://bitbucket.sw.nxp.com/dash/repos/mdio-proxy-module/browse</url>

<p>2. Compile everything
<p>3. Copy firmware file, aqprog tool and kernel module on target
<p>4. Insert module (insmod)
<p>5. aq-firmware-tool &lt;firmware file&gt; &lt;bus name&gt; &lt;addr&gt;
<code><pre>

	TP1 example:
		./aq-firmware-tool firmware.cld 1afd000 0
	
	LX2160A-RDB example:
		./aq-firmware-tool firmware.cld 8b96000 4
		./aq-firmware-tool firmware.cld 8b96000 5

	BlueBox3 example:
		./aq-firmware-tool firmware.cld 8b96000 0
		./aq-firmware-tool firmware.cld 8b96000 8
		./aq-firmware-tool firmware.cld 8b97000 0
		./aq-firmware-tool firmware.cld 8b97000 8
</pre></code>

<h3>Notes</h3>

<p>MDIO bus name can be obtained from either DTS or /proc/device-tree</p>

<h3>Software content</h3>

<p>Aquantia firmware tool (aqprog)

<p>TP1 FOTA library
<code><pre>
	libaquantia-tp1-fota.so   <-- shared library to be used with FOTA-like apps
	aq-tp1-fota-api.h         <-- shared library api definition
	aq-demo-fota              <-- demo with the above
</pre></code>

<h3>Future work</h3>
<p>     - re-organize code, better modularity
<p>     - better mdio message format
<p>     - auto-detection of mdio bus and phy(s)
<p>     - auto-flashing
<p>	- eliminate mdio-common.h and pick it from kernel module's dir

