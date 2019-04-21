Action()
{

	lr_think_time(39);

	lr_start_transaction("BOR_SC001_T003_AgentLookUp");

	web_url("agent_lookup.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=6B39DAF94B1AE10F137DBC98EDC73048", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BOR_SC001_T003_AgentLookUp",LR_AUTO);

	lr_think_time(61);

	lr_start_transaction("BOR_SC001_T004_SearchByLocation");

	web_submit_data("agent_lookup.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=zip-search", "Value=zip-search", ENDITEM, 
		"Name=zip-search:zipcode", "Value=508212", ENDITEM, 
		"Name=zip-search:search-zipcode.x", "Value=52", ENDITEM, 
		"Name=zip-search:search-zipcode.y", "Value=6", ENDITEM, 
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

	lr_end_transaction("BOR_SC001_T004_SearchByLocation",LR_AUTO);

	lr_think_time(39);

	web_custom_request("update2", 
		"URL=https://update.googleapis.com/service/update2?cup2key=8:1898823375&cup2hreq=193b7e02199a56085be53084344ccf08f1fe78d6f55ba1f2e85d4972d1e3cba6", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{f157b316-eb06-4368-92f6-11830f838d6c}\" requestid=\"{722e8ae7-c392-4fd3-88f1-5163a4339e5c}\" updater=\"chrome\" updaterversion=\"72.0.3626.119\" prodversion=\"72.0.3626.119\" lang=\"en-US\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"8\"/><os platform=\"Windows\" arch=\"x86_64\" version=\"10.0.10586.1176\"/><updater name=\"Omaha\" "
		"version=\"1.3.33.23\" lastchecked=\"0\" laststarted=\"0\" ismachine=\"1\" autoupdatecheckenabled=\"1\" updatepolicy=\"-1\"/><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1303.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{59174df1-f507-4ee4-b1a1-7126588b985e}\"/></app><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"32.0.0.142\" brand=\"GGLS\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" cohorthint=\"Chrome [M50... M99]\" "
		"enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{33a85b78-7f20-4c1b-8b61-a8d1302a35ba}\"/><packages><package fp=\"1.15faba9f17b2bb7f4304461920cd8ee87dedbaf3fefd80f41427fc30493185a0\"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.1\" brand=\"GGLS\" cohort=\"1:bm1:\" cohortname=\"M54ToM99\" cohorthint=\"M54ToM99\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{93edeee8-3c3d-41f7-80f0-f127acb40170}\"/><packages><package fp=\""
		"1.22c7dfe769f240e50080a6aad4e3412dbb5603194c5237847147f223fd230be9\"/></packages></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4999\" brand=\"GGLS\" cohort=\"1:jcl:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{031ac8be-15e5-4ad3-b7bd-99383682387a}\"/><packages><package fp=\"1.cf5ee5b637761d4d6b198bd57e2fd290f0c244ae2daad2126c8298372eb905d8\"/></packages></app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\""
		"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{bcdb6d41-5220-41ba-88b4-2018012bbef4}\"/></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"1044\" brand=\"GGLS\" cohort=\"1:0:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{786adaf3-c241-4ced-9807-0febc540c66b}\"/><packages><package fp=\"1.0d06f3d2c751bbe5a9c380a1b73f0b076ae2fa0d39143bfbf6ba2dba994ae576\"/></packages></app><app appid=\""
		"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"7\" brand=\"GGLS\" cohort=\"1:j5l:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{d4ceeac5-10ab-439c-a7ca-13ad14a66aa6}\"/><packages><package fp=\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"/></packages></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"26\" brand=\"GGLS\" cohort=\"1:cux:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/>"
		"<ping rd=\"4440\" ping_freshness=\"{5bc95e9d-7ba5-419e-b59a-f3e3fd6752c7}\"/><packages><package fp=\"1.b7fa09165a7675e638db0a1ce541dbef415c3657b468d2f195c9b32c2fa7f49b\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version=\"1.0.4.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{e4026b25-5128-4de2-8189-a496a0cb0644}\"/></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"38.191.200.3\" brand=\"GGLS\" tag=\"eset_exp_b\" cohort=\"1"
		":pw3:\" cohortname=\"Stable Location B\" cohorthint=\"Stable Location B\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{60ebb700-fad6-46ce-8c10-1de8081b5c01}\"/><packages><package fp=\"1.c6988f3519b7a2670f8d350f68851df4f68e3c64c0e4795bab4920e580cb2606\"/></packages></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{a12c94dd-fb30-432a-8969-edfe8e579cda}\"/><packages><package "
		"fp=\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"/></packages></app><app appid=\"copjbmjbojbakpaedmpkhmiplmmehfck\" version=\"2018.9.6.0\" brand=\"GGLS\" cohort=\"1:p1x:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{56dcbd97-8a5e-419c-ba73-85ed040faf8e}\"/><packages><package fp=\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"/></packages></app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" "
		"version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{1b2fedd5-c03d-405c-957c-f48fea669ca3}\"/></app></request>", 
		LAST);

	lr_think_time(8);

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
