<h3>Aquantia Linux Firmware Utility</h3>
<p> A very, very, young tool for programming the firmware.
<p> Currently a proof-of-concept that misses some additional features
<p>
<h3> How to use it </h3>
<p> There are two ways to use it, one is to search for the MDIO bus
<p> interface based on the name of the MDIO bus, and the other is to
<p> search for the MDIO bus interface based on the name of the NIC.
<p> For some AQR PHYs, they will not be probed if the firmware is
<p> missing, so the first method needs to be used, which is to find
<p> the MDIO bus interface through the name of the MDIO bus.
<p>

<h3> Method 1: Find the MDIO bus interface through the MDIO bus name </h3>
<p>1. Clone mdio-proxy-module repo and follow the instructions 
<url>https://bitbucket.sw.nxp.com/dash/repos/mdio-proxy-module/browse</url>

<p>2. Compile everything
<p>3. Copy firmware file, aqprog tool and kernel module on target
<p>4. Insert module (insmod ./mdio-proxy.ko)
<p>5. aq-firmware-tool &lt;firmware file&gt; &lt;-m/--mdio-bus&gt; &lt;bus name&gt; &lt;addr&gt;
<code><pre>

	TP1 example:
		./aq-firmware-tool firmware.cld -m 1afd000 0
	
	LX2160A-RDB example:
		./aq-firmware-tool firmware.cld -m 8b96000 4
		./aq-firmware-tool firmware.cld -m 8b96000 5

	BlueBox3 example:
		./aq-firmware-tool firmware.cld -m 8b96000 0
		./aq-firmware-tool firmware.cld -m 8b96000 8
		./aq-firmware-tool firmware.cld -m 8b97000 0
		./aq-firmware-tool firmware.cld -m 8b97000 8

	i.MX95-19x19-EVK example:
		./aq-firmware-tool firmware.cld -m 0003:01:00.0 8
		./aq-firmware-tool firmware.cld --mdio-bus 0003:01:00.0 8

</pre></code>

<h3> Method 2: Find the MDIO bus interface through the NIC name </h3>
<p>1. Compile aq-firmware-tool
<p>2. Copy firmware file, aq-firmware-tool on target
<p>3. aq-firmware-tool &lt;firmware file&gt; &lt;-i/--interface&gt; &lt;NIC name&gt; &lt;addr&gt;
<code><pre>
	i.MX95-19x19-EVK example:
		./aq-firmware-tool firmware.cld -i eth1 8
		./aq-firmware-tool firmware.cld --interface eth1 8

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

