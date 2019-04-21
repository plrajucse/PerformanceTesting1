Action()
{

	lr_think_time(50);

	lr_start_transaction("BOR_SC001_T003_AgentLookUp");

	web_url("agent_lookup.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=62E6E969C6D914D187A21F89589E3912", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BOR_SC001_T003_AgentLookUp",LR_AUTO);

	lr_think_time(147);

	lr_start_transaction("BOR_SC003_T004_ShowAllAgents");

	web_submit_data("agent_lookup.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=show-all", "Value=show-all", ENDITEM, 
		"Name=show-all:search-all.x", "Value=45", ENDITEM, 
		"Name=show-all:search-all.y", "Value=7", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		LAST);

	web_custom_request("agentData.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/data/agentData.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=nocache=1&method=%5Bobject%20Object%5D", 
		LAST);

	lr_end_transaction("BOR_SC003_T004_ShowAllAgents",LR_AUTO);

	lr_think_time(43);

	web_custom_request("update2", 
		"URL=https://update.googleapis.com/service/update2?cup2key=8:2489066205&cup2hreq=4c7df24a659494bc13086198efdc81a8655535bd9638158c12cc4a5dfdb1803c", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{88c43184-dc14-4cf4-b7c8-8eb5be9c4041}\" requestid=\"{4ab25f53-1e85-46eb-9d3f-c9e0eb0c32ad}\" updater=\"chrome\" updaterversion=\"72.0.3626.119\" prodversion=\"72.0.3626.119\" lang=\"en-US\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"8\"/><os platform=\"Windows\" arch=\"x86_64\" version=\"10.0.10586.1176\"/><updater name=\"Omaha\" "
		"version=\"1.3.33.23\" lastchecked=\"0\" laststarted=\"0\" ismachine=\"1\" autoupdatecheckenabled=\"1\" updatepolicy=\"-1\"/><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{982d354f-dac5-453e-964d-fef3c69a28c8}\"/><packages><package fp=\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.1\" brand=\""
		"GGLS\" cohort=\"1:bm1:\" cohortname=\"M54ToM99\" cohorthint=\"M54ToM99\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{f8d719a6-d5e8-45ea-a65c-ec05133ca070}\"/><packages><package fp=\"1.22c7dfe769f240e50080a6aad4e3412dbb5603194c5237847147f223fd230be9\"/></packages></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4999\" brand=\"GGLS\" cohort=\"1:jcl:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\""
		"{fd8f157b-24d7-4544-af38-ea72b7f455a1}\"/><packages><package fp=\"1.cf5ee5b637761d4d6b198bd57e2fd290f0c244ae2daad2126c8298372eb905d8\"/></packages></app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{be28da53-7918-4382-928d-31b0d7f6a9de}\"/></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"26\" brand=\"GGLS\" cohort=\"1:cux:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\">"
		"<updatecheck/><ping rd=\"4440\" ping_freshness=\"{7c00935f-1afd-4cfc-b09a-1e26776f97e9}\"/><packages><package fp=\"1.b7fa09165a7675e638db0a1ce541dbef415c3657b468d2f195c9b32c2fa7f49b\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"7\" brand=\"GGLS\" cohort=\"1:j5l:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{e939ed03-59e5-43ba-b766-f863cb0a10f9}\"/><packages><package fp=\""
		"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version=\"1.0.4.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{595f4b36-ceed-430c-b405-16165088d5d5}\"/></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"38.191.200.3\" brand=\"GGLS\" tag=\"eset_exp_b\" cohort=\"1:pw3:\" cohortname=\"Stable Location B\" cohorthint=\"Stable Location B\" enabled=\"1\"><updatecheck/>"
		"<ping rd=\"4440\" ping_freshness=\"{7c92e953-fb5f-418a-a19c-74cf76be7966}\"/><packages><package fp=\"1.c6988f3519b7a2670f8d350f68851df4f68e3c64c0e4795bab4920e580cb2606\"/></packages></app><app appid=\"copjbmjbojbakpaedmpkhmiplmmehfck\" version=\"2018.9.6.0\" brand=\"GGLS\" cohort=\"1:p1x:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{558f4014-be40-42cf-9529-183086f7c7bf}\"/><packages><package fp=\""
		"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"/></packages></app><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"32.0.0.142\" brand=\"GGLS\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" cohorthint=\"Chrome [M50... M99]\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{6b401990-d9f2-4b69-adb8-26361fdf5f47}\"/><packages><package fp=\"1.15faba9f17b2bb7f4304461920cd8ee87dedbaf3fefd80f41427fc30493185a0\"/></packages></app><app appid=\""
		"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1303.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{fce40e2c-0a87-4842-805b-7c75b7247dc1}\"/></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"1045\" brand=\"GGLS\" cohort=\"1:0:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{16c5988c-fff7-44d0-906c-e47f0b9e5d30}\"/><packages><package fp=\""
		"1.76d3ad6da2e34728ae7bd88693ec3b73e17f874aecf518e4e433dd72c5a5ec69\"/></packages></app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{a3a5ecd2-a704-4ee0-8e92-c08021c34d80}\"/></app></request>", 
		LAST);

	lr_think_time(73);

	lr_start_transaction("BOR_SC001_T005_Home");

	web_url("index.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BOR_SC001_T005_Home",LR_AUTO);

	return 0;
}
