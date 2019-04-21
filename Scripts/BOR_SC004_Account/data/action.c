Action()
{

	lr_think_time(30);

	lr_start_transaction("BOR_SC004_T004_Account");

	web_submit_data("agent_lookup.jsf_2", 
		"Action=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Linkform", "Value=Linkform", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id4:j_id5", ENDITEM, 
		"Name=Linkform:j_id6", "Value=Linkform:j_id6", ENDITEM, 
		LAST);

	web_url("quoteData.jsf", 
		"URL=http://demo.borland.com/InsuranceWebExtJS/data/quoteData.jsf?_dc=1551271373373", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://demo.borland.com/InsuranceWebExtJS/agent_lookup.jsf", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("BOR_SC004_T004_Account",LR_AUTO);

	lr_think_time(16);

	web_custom_request("update2", 
		"URL=https://update.googleapis.com/service/update2?cup2key=8:1426094751&cup2hreq=9919af9f114ab49d6b4d922b71d9b4df158f81247af0e978a730fa4d9ad31a15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{67194bc7-3dcd-4fd1-af29-668b23d2ba2a}\" requestid=\"{99fa9c08-328d-4e5c-bda5-bf6217f7c903}\" updater=\"chrome\" updaterversion=\"72.0.3626.119\" prodversion=\"72.0.3626.119\" lang=\"en-US\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"8\"/><os platform=\"Windows\" arch=\"x86_64\" version=\"10.0.10586.1176\"/><updater name=\"Omaha\" "
		"version=\"1.3.33.23\" lastchecked=\"0\" laststarted=\"0\" ismachine=\"1\" autoupdatecheckenabled=\"1\" updatepolicy=\"-1\"/><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1303.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{c490fa79-f8c4-459e-bd72-1164945fe2d0}\"/></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4999\" brand=\"GGLS\" cohort=\"1:jcl:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\""
		"4440\" ping_freshness=\"{55b35d63-b133-45c2-8e8a-0716d9a54d0c}\"/><packages><package fp=\"1.cf5ee5b637761d4d6b198bd57e2fd290f0c244ae2daad2126c8298372eb905d8\"/></packages></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"1045\" brand=\"GGLS\" cohort=\"1:0:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{511c27b7-0cb6-4608-91cf-d8ab8f5f33cf}\"/><packages><package fp=\""
		"1.76d3ad6da2e34728ae7bd88693ec3b73e17f874aecf518e4e433dd72c5a5ec69\"/></packages></app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{9c896ff6-541f-4acd-ac6e-924cd61f3889}\"/></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"26\" brand=\"GGLS\" cohort=\"1:cux:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\""
		"{493c8f11-35b3-4a3b-9102-24ab0e5beca6}\"/><packages><package fp=\"1.b7fa09165a7675e638db0a1ce541dbef415c3657b468d2f195c9b32c2fa7f49b\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"7\" brand=\"GGLS\" cohort=\"1:j5l:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{8592fcda-1e00-4d69-a95e-b76c251e79cf}\"/><packages><package fp=\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"/></packages></"
		"app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version=\"1.0.4.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{253a8606-e049-4e65-8439-44d9d7c1477b}\"/></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"38.191.200.3\" brand=\"GGLS\" tag=\"eset_exp_b\" cohort=\"1:pw3:\" cohortname=\"Stable Location B\" cohorthint=\"Stable Location B\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{6b1b4257-69c6-4527-a7e1-44a91649de32}\"/>"
		"<packages><package fp=\"1.c6988f3519b7a2670f8d350f68851df4f68e3c64c0e4795bab4920e580cb2606\"/></packages></app><app appid=\"copjbmjbojbakpaedmpkhmiplmmehfck\" version=\"2018.9.6.0\" brand=\"GGLS\" cohort=\"1:p1x:\" cohortname=\"Auto\" cohorthint=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{f061da8b-dc59-409b-b6b5-24d314e4c442}\"/><packages><package fp=\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"/></packages></app><app appid=\""
		"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"32.0.0.142\" brand=\"GGLS\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" cohorthint=\"Chrome [M50... M99]\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{82c844d3-5e7d-447c-b822-0156b8965ca5}\"/><packages><package fp=\"1.15faba9f17b2bb7f4304461920cd8ee87dedbaf3fefd80f41427fc30493185a0\"/></packages></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd="
		"\"4440\" ping_freshness=\"{7c69713c-dc10-446a-a2fc-79d336f60646}\"/><packages><package fp=\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.1\" brand=\"GGLS\" cohort=\"1:bm1:\" cohortname=\"M54ToM99\" cohorthint=\"M54ToM99\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{c7d85703-e3a8-4054-ab24-874b3f768a71}\"/><packages><package fp=\""
		"1.22c7dfe769f240e50080a6aad4e3412dbb5603194c5237847147f223fd230be9\"/></packages></app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand=\"GGLS\" enabled=\"1\"><updatecheck/><ping rd=\"4440\" ping_freshness=\"{98a4d0ea-b4c5-4395-a288-9e24049053ae}\"/></app></request>", 
		LAST);

	lr_think_time(32);

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
