Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("www.movie-list.com", 
		"URL=https://www.movie-list.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("zrt_lookup.html", 
		"URL=https://googleads.g.doubleclick.net/pagead/html/r20190204/r20190131/zrt_lookup.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=3163695830&adk=1583014878&adf=3107067287&w=300&fwrn=4&fwrnh=100&lmt=1549865204&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2F&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865203123&bpp=227&bdt=13108&fdt=1298&idt=1256&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=7679926119235&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865203&ga_hid="
		"2104576875&ga_fc=0&icsg=696366464168&dssz=33&mdo=0&mso=0&u_tz=330&u_his=1&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=u&pfx=0&fu=144&bc=1&ifi=6&uci=6.vf6cqu2pi2&xpc=m31t65HWX8&p=https%3A//www.movie-list.com&dtd=1426", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-32/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_2", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-32/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads_2", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=5407194729&adk=3609072825&adf=555805929&w=300&fwrn=4&fwrnh=100&lmt=1549865204&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2F&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865203372&bpp=82&bdt=13358&fdt=1243&idt=1007&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&prev_fmts=300x250&correlator=7679926119235&frm=20&pv=1&ga_vid=910262046.1549865203&ga_sid="
		"1549865203&ga_hid=2104576875&ga_fc=0&icsg=9492459486376&dssz=34&mdo=0&mso=0&u_tz=330&u_his=1&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=1028&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeEbr%7C&abl=CS&ppjl=u&pfx=0&fu=144&bc=1&ifi=7&uci=7.xpput31ug13t&xpc=QcYnikSfhP&p=https%3A//www.movie-list.com&dtd=1270", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cookie_push.html", 
		"URL=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=3163695830&adk=1583014878&adf=3107067287&w=300&fwrn=4&fwrnh=100&lmt=1549865204&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2F&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865203123&bpp=227&bdt=13108&fdt=1298&idt=1256&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=7679926119235&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865203&ga_hid="
		"2104576875&ga_fc=0&icsg=696366464168&dssz=33&mdo=0&mso=0&u_tz=330&u_his=1&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=u&pfx=0&fu=144&bc=1&ifi=6&uci=6.vf6cqu2pi2&xpc=m31t65HWX8&p=https%3A//www.movie-list.com&dtd=1426", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("s", 
		"URL=https://googleads.g.doubleclick.net/pagead/drt/s?v=r20120211", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=3163695830&adk=1583014878&adf=3107067287&w=300&fwrn=4&fwrnh=100&lmt=1549865204&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2F&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865203123&bpp=227&bdt=13108&fdt=1298&idt=1256&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=7679926119235&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865203&ga_hid="
		"2104576875&ga_fc=0&icsg=696366464168&dssz=33&mdo=0&mso=0&u_tz=330&u_his=1&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=u&pfx=0&fu=144&bc=1&ifi=6&uci=6.vf6cqu2pi2&xpc=m31t65HWX8&p=https%3A//www.movie-list.com&dtd=1426", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview", 
		"URL=https://googleads.g.doubleclick.net/pagead/adview?ai="
		"CwF-VIxFhXPrJI4zeuASqwKyIAaCnl55Vr7aN8qQJzLu2w9sMEAEg76j1AWDlyuWDtA6gAfCpy9YDyAEBqQJoDILTGx1OPqgDAcgDwwSqBK8BT9Dw9zYHvev0ezhOULkSsORlGgP7rufzRA7Raj_9k_7slVVZprchNHjiqmAtrPgzrUJphHlvXmvVkqnPbIXwikLwtaXI0a6AroOxXaGKBWcItQzA7RZHd53dQGuJ4rleAH6y54-S-Vkw2ZhJ1CM0Qnp6ZqxywHFDxv4O_jk2Ht4OsGj3RFyA9gKlp0My_0lLpyPuNx3sr577BQvju645ItwN2ukfdJ3FZGbxxmiyCMAE-9COqvMBkgUECAQYAZIFBAgFGASSBQQIBRgYkgUFCAUYqAGgBlGAB5XE1iuoB47OG6gH1ckbqAeoBqgHugaoB9nLG6gHz8wbqAemvhvYBwHyBwQQtvcK0ggHCIBhEAEYAoAKAdgTDA&sigh=6zMmVDXHGBI&"
		"tpd=AGWhJmuVypoXTGE5sFl5gnFCOXaccPSXiW1KciOpj67PilnUJw", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=3163695830&adk=1583014878&adf=3107067287&w=300&fwrn=4&fwrnh=100&lmt=1549865204&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2F&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865203123&bpp=227&bdt=13108&fdt=1298&idt=1256&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=7679926119235&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865203&ga_hid="
		"2104576875&ga_fc=0&icsg=696366464168&dssz=33&mdo=0&mso=0&u_tz=330&u_his=1&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=u&pfx=0&fu=144&bc=1&ifi=6&uci=6.vf6cqu2pi2&xpc=m31t65HWX8&p=https%3A//www.movie-list.com&dtd=1426", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ui", 
		"URL=https://www.google.com/pagead/drt/ui", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ui_2", 
		"URL=https://www.google.com/pagead/drt/ui", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_2", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"CfFX-HBFhXOyvJ8uiuwSb4LSwBvWzp-FUoorRuoAHkMOht4oKEAEg76j1AWDlyuWDtA6gAYS_ocsDyAECqQJoDILTGx1OPuACAKgDAcgDmQSqBOsBT9Bkkz1cqv4P4DgGpVcDgf3w0OA_NddyTuQCz97S5Gn_nExJWhzpbc-uZYdd0G59Qb8hXKzVh2RQodfN2rkjzhoSzm6fAYfbngDV4qpkvXNTFCYunnELqJw9zmdZJIxnjL179Hd8AD_Pdak-qMnS2Vg2xdsaK5neyedhF6UjTu6Yp2Ux24zSGrUuci7c3dVaATs_mQ4MMBmv1dzgqsKAtsGl96sOgJh9ZSSdhL-hk8V95WrAQyHyQxFFTAoKF4Q2heaYLH9TBIjCdXFyGGqHvQ3MEdBpyuQ3GiZDpE3CNRIRqJWKMECEuDyL98AE87jF8OAB4AQBkgUECAQYAZIFBAgFGASSBQQIBRgYkgUFCAUYqAGgBgKAB-7SwSeoB47OG6gH1"
		"ckbqAeoBqgHugaoB9nLG6gHz8wbqAemvhvYBwHyBwQQ8b0I0ggHCIBhEAEYAYAKAdgTDA&sigh=gEYPD16CN0E&tpd=AGWhJmvZEP3ryq_FvEbw23_xll27jkwrCQDjTVXcWa5uVWP42g", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-32/html/container.html", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("vy-MhgbfL4v.js", 
		"URL=https://staticxx.facebook.com/connect/xd_arbiter/r/vy-MhgbfL4v.js?version=44", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attr", 
		"URL=https://cm.g.doubleclick.net/pixel/attr?d=AHNF13K-ahd86ywI5B3lMM41smEcJQist4V1MmpIVRvZQL-64KKs5WdSK-YRrOI1wFm33W5ilU45", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attr_2", 
		"URL=https://cm.g.doubleclick.net/pixel/attr?d=AHNF13IQx165ucYG_sV1QSZ_yh3juL84-u2WSUoQFb1YQNVNHIbb0qumq0Hm8McNe65M7as", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ping", 
		"URL=https://www.facebook.com/connect/ping?client_id=234634036592702&domain=www.movie-list.com&origin=1&redirect_uri=https%3A%2F%2Fstaticxx.facebook.com%2Fconnect%2Fxd_arbiter%2Fr%2Fvy-MhgbfL4v.js%3Fversion%3D44%23cb%3Df2ec341232317bc%26domain%3Dwww.movie-list.com%26origin%3Dhttps%253A%252F%252Fwww.movie-list.com%252Ff19533bfe4506cb%26relation%3Dparent&response_type=token%2Csigned_request&sdk=joey", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("vy-MhgbfL4v.js_2", 
		"URL=https://staticxx.facebook.com/connect/xd_arbiter/r/vy-MhgbfL4v.js?version=44", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.facebook.com/connect/ping?client_id=234634036592702&domain=www.movie-list.com&origin=1&redirect_uri=https%3A%2F%2Fstaticxx.facebook.com%2Fconnect%2Fxd_arbiter%2Fr%2Fvy-MhgbfL4v.js%3Fversion%3D44%23cb%3Df2ec341232317bc%26domain%3Dwww.movie-list.com%26origin%3Dhttps%253A%252F%252Fwww.movie-list.com%252Ff19533bfe4506cb%26relation%3Dparent&response_type=token%2Csigned_request&sdk=joey", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_url("charts.php", 
		"URL=https://www.movie-list.com/charts.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("100eng.json", 
		"URL=https://m.addthis.com/live/red_lojson/100eng.json?sh=0&ph=11742&ivh=792&dt=47426&pdt=82&ict=&pct=1&perf=widget%7C82%7C21434%2Clojson%7C40087%7C16883%2Csh%7C40094%7C10%2Csh%7C40100%7C8924&rndr=render_toolbox%7C45069&cmenu=null&ppd=0&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery%2Cgoogleanalytics%2Cfacebook&jsfwv=jquery-1.8.1%2Cgoogleanalytics-analytics.js%2Cfacebook-unk&al=men&scr=0&scv=0&apiu=0&ba=7&sid=5c6110fb50bb538f&rev=v8.3.38-wp&pub=ra-4e2616832dc7cf2c&dp=www.movie-list.com%3A443&fp=&pfm=1&"
		"icns=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.movie-list.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("zrt_lookup.html_2", 
		"URL=https://googleads.g.doubleclick.net/pagead/html/r20190204/r20190131/zrt_lookup.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865266&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865266380&bpp=58&bdt=3340&fdt=178&idt=170&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=5439782413962&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865266&ga_hid="
		"253024080&ga_fc=0&icsg=724410036896&dssz=31&mdo=0&mso=0&u_tz=330&u_his=2&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2F&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&ifi=6&uci=6.mptxid8cfm2l&xpc=o2yrx7S7F9&p=https%3A//www.movie-list.com&dtd=228", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads_4", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=8179616158&adk=2291753242&adf=3627473136&w=300&lmt=1549865266&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&flash=19.0.0&avail_w=300&wgl=1&dt=1549865266439&bpp=23&bdt=3398&fdt=353&idt=111&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&prev_fmts=300x250&correlator=5439782413962&frm=20&pv=1&ga_vid=910262046.1549865203&ga_sid=1549865266&ga_hid=253024080&"
		"ga_fc=0&icsg=38082012236416&dssz=33&mdo=0&mso=0&u_tz=330&u_his=2&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=997&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2F&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeEbr%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&ifi=7&uci=7.axi5fhhx416k&xpc=DIZZ6kuFkk&p=https%3A//www.movie-list.com&dtd=384", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_3", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/adview?ai="
		"CLWFtXRFhXM2wFNr6ugSL7rSICejQlJNVlPPInL4Iv-EeEAEg76j1AWDlyuWDtA6gAcPj4_ACyAEJqAMByAPDBKoExAFP0AmabvLQ_U1SeU4wisjLo1-FiNgujUZScGp9ADpBtyEWZ38zKqW1cMNgN4fGUzqspTDzX3PCfRsxEwUTUL-Sn1dxQnMpgXA7lzT6XUZ7o9uvqVwI2MwEKFjtgMAvXS1C3wLV_ymYHY5Kw3QcFhDqsBYA38WJWjSUVlxNSXV4-qmnaljgb_0NZ79Bhh8yaWlkbWwlZX981du3WLQs1vIB07igQnhpN9WJX8YOPm8FzSA6UwuSM4yBh8f66Qk1_nAOBu53wAS3sJ_R_AGSBQQIBBgBkgUECAUYBKAGLoAHpZycjwGoB47OG6gH1ckbqAeoBqgHugaoB9nLG6gHz8wbqAemvhvYBwDyBwQQ2KoL0ggHCIBhEAEYAoAKAdgTAogUAg&sigh=h-_ptIGVU_k&"
		"template_id=484&tpd=AGWhJmvyj8WV4pA8Rb7Xd0HtaPPI6Qhyw_Cmm_Ov0pGefiCfQA", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865266&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865266380&bpp=58&bdt=3340&fdt=178&idt=170&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=5439782413962&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865266&"
		"ga_hid=253024080&ga_fc=0&icsg=724410036896&dssz=31&mdo=0&mso=0&u_tz=330&u_his=2&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2F&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&ifi=6&uci=6.mptxid8cfm2l&xpc=o2yrx7S7F9&p=https%3A//www.movie-list.com&dtd=228", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_4", 
		"URL=https://googleads.g.doubleclick.net/pagead/adview?ai="
		"C8rbGXRFhXMXJIdnauATiuLiYCbmOt6VV-MSHoagIv-EeEAEg76j1AWDlyuWDtA6gAf2GoJgDyAECqQJoDILTGx1OPqgDAcgDyQSqBMQBT9BNRxRyaw5KUpveZvcZ1lPAaXQtsG2Q0jHEUOwWgZBM0xZt_w2prtGNBKogdckqgHdWmdHQ1ZH9i16t1JrDPKpxfIzDOczhDuAv6gu1GU5XcKo2rrvopQ_9TqLu11IBd0V7wzWLct7S-aqWtNPfyiehg_d7hiGdJPknbUFYfoog-UBv3tF9XwEKcIbn9TOD5FFwmX8TgV_apuK04A-o4OKqsxjmn1AdE5oDnhrtnPfoWuW5-oynNFCqcXlTh0nUJAKaM8AE3Mn_pNsBkgUECAQYAZIFBAgFGASgBgKAB-OJ4GeoB47OG6gH1ckbqAeoBqgHugaoB9nLG6gHz8wbqAemvhvYBwHyBwQQt4EH0ggHCIBhEAEYAoAKAdgTAg&sigh="
		"wNh3O03ctNY&tpd=AGWhJmuax-injMMEJHfaSiqo0yz-Q69LEZCKufTlPhgXiybgsQ", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=8179616158&adk=2291753242&adf=3627473136&w=300&lmt=1549865266&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&flash=19.0.0&avail_w=300&wgl=1&dt=1549865266439&bpp=23&bdt=3398&fdt=353&idt=111&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&prev_fmts=300x250&correlator=5439782413962&frm=20&pv=1&ga_vid=910262046.1549865203&ga_sid=1549865266&ga_hid=253024080"
		"&ga_fc=0&icsg=38082012236416&dssz=33&mdo=0&mso=0&u_tz=330&u_his=2&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=997&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2F&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeEbr%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&ifi=7&uci=7.axi5fhhx416k&xpc=DIZZ6kuFkk&p=https%3A//www.movie-list.com&dtd=384", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_4", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_5", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"C74saXBFhXPvCIo-gugSWuY2gDqCnl55Vr7aN8qQJzLu2w9sMEAEg76j1ASgDYOXK5YO0DqAB8KnL1gPIAQGpAmgMgtMbHU4-4AIAqAMByAObBKoE5AFP0FzJhl6hYBY6DqAt5JqMWMtnOC7sSOsYVgJZFYn6EeLb4QrrLdqs7oKKHUGkyTxg6ByAddqgKl2cRaG1U8P40H8-VTiQxc8oIPDODIq4iwrLB3kIhDWuMGwnaBdua3AGd0wgviYxornpWHpzwmv1RIYtJ5fNA07QlkgSbJgiLhs9YwkbZemT0ee5PjR_6gU8bItIkN0KmLPLPLzbv5oDRbezzVW-d58hS1Sf5Qrq_wPeAzv4Oi9eIM5odLa1GaC_ITwJW9gKPFcW1RMrJsEgsrmZuk-jKxyUW0_UT0fvmNJcIgDABPvQjqrzAeAEAZIFBAgEGAGSBQQIBRgEkgUECAUYGJIFBQgFGKgBoAZRgAeVxNYrqAeOzhuoB9XJG6gHq"
		"AaoB7oGqAfZyxuoB8_MG6gHpr4b2AcB8gcEEMfrCNIIBwiAYRABGAGACgHCEwYY8KnL1gPYEww&sigh=rV2pU7APyAU&tpd=AGWhJmtWS1ACRb2MHbEU943yE0-hVq0jRdizNaqqax0k6sewZQ", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l", 
		"URL=https://www.google.com/ads/measurement/l?ebcid=ALh7CaSbS7_5eGcy8u9kJIN47r7Vx48DN-m6wgm5syhNFFibj4LnSKDlG9ejEsVB4IjVxW6BK_971Ap1oheAw8-dRXSyTsWUIg", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l_2", 
		"URL=https://www.google.com/ads/measurement/l?ebcid=ALh7CaTBPeQC7a-Pf9c8lZoBcI0XiromigKXoJnv6TW_myJp6WOmdKGS3ONsyTnH6gILXDe98KMHI-4Ct_ZycqN2JeYg06h7HQ", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=8179616158&adk=2291753242&adf=3627473136&w=300&lmt=1549865266&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&flash=19.0.0&avail_w=300&wgl=1&dt=1549865266439&bpp=23&bdt=3398&fdt=353&idt=111&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&prev_fmts=300x250&correlator=5439782413962&frm=20&pv=1&ga_vid=910262046.1549865203&ga_sid=1549865266&ga_hid=253024080"
		"&ga_fc=0&icsg=38082012236416&dssz=33&mdo=0&mso=0&u_tz=330&u_his=2&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=997&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2F&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeEbr%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&ifi=7&uci=7.axi5fhhx416k&xpc=DIZZ6kuFkk&p=https%3A//www.movie-list.com&dtd=384", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attr_3", 
		"URL=https://cm.g.doubleclick.net/pixel/attr?d=AHNF13KbCXVBlej1y8AwlR0tTO7aq56ta9zSgwNJ3ZY", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_6", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"C8ozsXBFhXPvCIo-gugSWuY2gDp2uj-1TzuftqOkGwI23ARACIO-o9QEoA2DlyuWDtA6gAcKf6uoDyAEB4AIAqAMByAObBKoE4AFP0EzFF0O7WS6IvbNI5JrVG8l-JyKkCe4CUVgUGYstquXq5ACrbNNGNabHAUGgynV16ESAdYPjKESDSen0Vtn_ijIyV3rczsY7JveTUpKge4jIzruqUG6WV4fQKsxcSWwOf0086n9p44vkVHVIPg0OKI4tGZy9AznblkgIbJgiNRsgY9tbkKpmmuf4yzeK6AXsmYi9Q50Ka7B-P7rbSpn2RrWTOFZJVJ8hvlVq5groCgArADn4zyypI85ogbVAGqC_1D_8WNgLyVTE0RE79CQkNnf4qmIgdq7wVhdCTOiyr8AE6JP-qivgBAGSBQQIBBgBkgUECAUYBIAHpuCVFagHjs4bqAfVyRuoB6gGqAe6BqgH2csbqAfPzBuoB6a-G9gHAfIHBBDH6wjSCAcIg"
		"GEQARgBgAoBwhMGGMKf6uoD2BMM&sigh=WaH3ATtzf_4&template_id=5001&tpd=AGWhJmsbWh0zNWUYGCKMj459yLylq6A7wlCEPdCSFobR7PYrig", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_7", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"CuLMoXBFhXPvCIo-gugSWuY2gDovM25lV-4quls4Iv-EeEAMg76j1ASgDYOXK5YO0DqABw-Pj8ALIAQHgAgCoAwHIA5sEqgTlAU_QPN8VQ7pZLoi9s0jkmtUbyX4nIqQJ7gJRWBQZiy2q5erkAKts00Y1pscBQaDKdXXoRIB1g-MoRINJ6fRW2f-KMjJXetzOxjsm95NSkqB7iMjGuwxJ_0wkXDAEF25rcAZ3TCC-JjGiuelYenPCa_VEhi0nl80DTtCWSBJsmCIuGz1jCRtl6ZPR57k-NH_qBTxsi0iQ3QqYs8s8vNu_mgNFt7PNVb53nyFLVJ_lCur_A94DO_g6L14gzmh0trUZoL8hPAlb2Ao8VxbVEysmwSCyuZm6M9Bav3W83d9VyShd6NIgPl7ABIfegKn_AeAEAZIFBAgEGAGSBQQIBRgEgAelnJyPAagHjs4bqAfVyRuoB6gGqAe6BqgH2csbqAfPzBuoB6a-G9gHAfIHBBDH6"
		"wjSCAcIgGEQARgBgAoBwhMGGMPj4_AC2BMMiBQB&sigh=rlvb5H41pRw&tpd=AGWhJmuqqDOnsx2CeK3WUJjtDVRv0WWuPGzcUGfYawoL7mDDqw", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attr_4", 
		"URL=https://cm.g.doubleclick.net/pixel/attr?d=AHNF13LJ3VYe5WpH30y02XM9KNlMb0wQx647", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_2", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_3", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("21176", 
		"URL=https://tags.bluekai.com/site/21176?ret=html&limit=3&id=5c611140a87c5346", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("charts.php_2", 
		"URL=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("100eng.json_2", 
		"URL=https://m.addthis.com/live/red_lojson/100eng.json?sh=0&ph=2162&ivh=792&dt=19540&pdt=3376&ict=&pct=1&perf=widget%7C3377%7C3%2Clojson%7C8892%7C566%2Csh%7C8898%7C6326%2Csh%7C8905%7C5747&rndr=render_toolbox%7C9137%2Crender_layers_whatsnext%7C20779&cmenu=null&ppd=4&ppl=0&fbe=&xmv=0&xms=0&xmlc=0&jsfw=jquery%2Cgoogleanalytics&jsfwv=jquery-1.8.1%2Cgoogleanalytics-analytics.js&al=men%2Csmlwn&scr=0&scv=0&apiu=1&ba=7&sid=5c611132ed17947b&rev=v8.3.38-wp&pub=ra-4e2616832dc7cf2c&dp=www.movie-list.com%3A443&"
		"fp=&pfm=1&icns=addthis%2Cfacebook%2Ctwitter%2Cemail%2Cpinterest_share", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.movie-list.com/charts.php", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("zrt_lookup.html_3", 
		"URL=https://googleads.g.doubleclick.net/pagead/html/r20190204/r20190131/zrt_lookup.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads_5", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865295&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php%3Fmonth%3D01%26year%3D2018&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865295377&bpp=52&bdt=4537&fdt=196&idt=177&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=6310674717669&frm=20&pv=2&ga_vid=910262046.1549865203&"
		"ga_sid=1549865295&ga_hid=1325961648&ga_fc=0&icsg=724410036896&dssz=31&mdo=0&mso=0&u_tz=330&u_his=3&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101%2C370204056&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&ifi=6&uci=6.xvadfax8917b&xpc=MlIBszI2td&p="
		"https%3A//www.movie-list.com&dtd=255", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_8", 
		"URL=https://googleads.g.doubleclick.net/pagead/adview?ai="
		"CNB18gxFhXNWmAYz4uATA9pXYBKnXoaVVpKDbgpUJv-EeEAEg76j1AWDlyuWDtA6gAaXjhdkDyAECqAMByAPJBKoE2gFP0MvIgzRPt3LsxkFK-8RtkrMA-kUVlv9HlZI1QXzqDIeLyRTIgkVBh0NaRphIGu6A_Ri6-sgi3Q_X_NnZJOhsY5zL8A4tFsIFJkfXeswxcH0mbd8y7DeKjHMFMseN_c9gYllWu0kqw8YWHizGepYuzeQWMXheSrY9G8RwDJQx0b6yvuR6gY8IqtfAW6u8C7UuvxwW2FPZHH2HJnHtR3nz0tRITcN_GPQCQULqUILdsiIkrXrooLiDX2chexqUnUXazdmAo-A_Im3S1QYpg40xekqqHiQokvwOGcAEy8PV5vMBkgUECAQYAZIFBAgFGASgBgKAB9HstHmoB47OG6gH1ckbqAeoBqgHugaoB9nLG6gHz8wbqAemvhvYBwHyBwQQ6L8H0ggHCIBhEAEYAoAKAdgTDA"
		"&sigh=GY4hxsYNEuA&tpd=AGWhJmvJelW-wuwz06z-48ZT1NdDR3pJoH93Ta_Mti-xhphm3w", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865295&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php%3Fmonth%3D01%26year%3D2018&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865295377&bpp=52&bdt=4537&fdt=196&idt=177&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=6310674717669&frm=20&pv=2&ga_vid="
		"910262046.1549865203&ga_sid=1549865295&ga_hid=1325961648&ga_fc=0&icsg=724410036896&dssz=31&mdo=0&mso=0&u_tz=330&u_his=3&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101%2C370204056&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&ifi=6&uci=6.xvadfax8917b&"
		"xpc=MlIBszI2td&p=https%3A//www.movie-list.com&dtd=255", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads_6", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=8179616158&adk=2291753242&adf=3627473136&w=300&lmt=1549865295&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php%3Fmonth%3D01%26year%3D2018&flash=19.0.0&avail_w=300&wgl=1&dt=1549865295431&bpp=30&bdt=4591&fdt=411&idt=123&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&prev_fmts=300x250&correlator=6310674717669&frm=20&pv=1&ga_vid=910262046.1549865203&ga_sid="
		"1549865295&ga_hid=1325961648&ga_fc=0&icsg=9520503059104&dssz=34&mdo=0&mso=0&u_tz=330&u_his=3&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=997&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101%2C370204056&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeEbr%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&ifi=7&uci=7.613p8ksub9kw&xpc=52YVAYELPB&p=https%3A//"
		"www.movie-list.com&dtd=478", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_5", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_4", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_6", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_5", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_9", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"CPjxDghFhXOCRKNymuwSt-bCICujQlJNVlPPInL4Iv-EeEAEg76j1AWDlyuWDtA6gAcPj4_ACyAEJ4AIAqAMByAObBKoE_AFP0DtD7WPfvGMegBpknRjWfVLgKbq3Rluw9srWy-BfMJumOlt2gyb108m3pRpQEC9N-x91k7UF8CEKXJAiZVXmjrmWmlq6hzeJAdzyWdCW85vQ3wgiOR4hraHnoTMXUkqqEfAwa83XF0xfUxnLZei_DIMRPmavUmPd0DcWzcX5GwooF1w5xmeAhiEhwjYRfl3M2zNS2rctB255kWaUOEp-gN6cBvafZ7hhmxQctIdHqUGwM5zhCMKTmA5QSbZBktU4ydudXV00tdR7_ZwWeTHNtkNXRM5z0-fN1TR_9B65XasVuSWYN2CVKLJLAlYo3hgwtQmQSvyEtP2WVqLABLewn9H8AeAEAZIFBAgEGAGSBQQIBRgEoAYugAelnJyPAagHjs4bqAfVyRuoB6gGqAe6B"
		"qgH2csbqAfPzBuoB6a-G9gHAPIHBBCkuQXSCAcIgGEQARgBgAoB2BMCiBQC&sigh=c2tQKe0TkSU&template_id=484&tpd=AGWhJmvy2TPDneGLQL3fT-IPzHWWUToSc9_p8pfVbLUxyWdRtQ", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("post", 
		"URL=https://www.movie-list.com/trailers/post", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/charts.php?month=01&year=2018", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l_3", 
		"URL=https://www.google.com/ads/measurement/l?ebcid=ALh7CaS6tIZqx26C2ODINvN_pog9HE-8OY8_A5doNLOwdktD7zb41twduPSRlQWS4-QppLdFuP2I6gv2sigfUCjLN9hiuDdw6Q", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865295&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php%3Fmonth%3D01%26year%3D2018&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865295377&bpp=52&bdt=4537&fdt=196&idt=177&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=6310674717669&frm=20&pv=2&ga_vid="
		"910262046.1549865203&ga_sid=1549865295&ga_hid=1325961648&ga_fc=0&icsg=724410036896&dssz=31&mdo=0&mso=0&u_tz=330&u_his=3&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101%2C370204056&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&ifi=6&uci=6.xvadfax8917b&"
		"xpc=MlIBszI2td&p=https%3A//www.movie-list.com&dtd=255", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cookie_push.html_2", 
		"URL=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865295&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php%3Fmonth%3D01%26year%3D2018&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865295377&bpp=52&bdt=4537&fdt=196&idt=177&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=6310674717669&frm=20&pv=2&ga_vid="
		"910262046.1549865203&ga_sid=1549865295&ga_hid=1325961648&ga_fc=0&icsg=724410036896&dssz=31&mdo=0&mso=0&u_tz=330&u_his=3&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101%2C370204056&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Fcharts.php&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&ifi=6&uci=6.xvadfax8917b&"
		"xpc=MlIBszI2td&p=https%3A//www.movie-list.com&dtd=255", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cookie_push.html_3", 
		"URL=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l_4", 
		"URL=https://www.google.com/ads/measurement/l?ebcid=ALh7CaTsL9E4EJBFgim0l7bqMEAkiK5YRKwMXLzOBOHcrxv-oPFKHAl1saskIV30Vyqm3A1C_3o54R1njMuL837KlEFdUi-rVg", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_7", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/post", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_10", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"C1UjZjxFhXNjqHMi8ugSiqpmgC_O7251VwcKYkb4IiPCr044OEAEg76j1AWDlyuWDtA6gAZOgtMcDyAECqQJoDILTGx1OPuACAKgDAcgDmQSqBPABT9DjkV1KCNYz4dp8XOyaJGXW9JXeyXXGxIBfixntQNB8psB6QGYuuXl_-jhW9N1s7-sj6g_bq2ZJlM5O_ycieLTKTq5NctZ-fh1BBjGyEN8q4t2WZlxlfg-PZRaOOgrw_8j1yBGVpKnzTdzeGeDym5bGJNdoo-yfUOWnsaXulMImFi-1emdrCU9QYuOvBhUANGIqtcwZDSTDADd0Yx3gqyLnWCbV4WgbkDbxqM_DIClHpymRbdrBABWZTZxCy1Btj5lVsFWvBQs9GdI9_SP-tW5K5V1uhi2JD4iCbubVMr0pnVfy9Sw22PBjX_QifokNwAT4s9bI2AHgBAGSBQQIBBgBkgUECAUYBKAGAoAH1d_LOKgHjs4bqAfVyRuoB6gGqAe6B"
		"qgH2csbqAfPzBuoB6a-G9gHAfIHBBConC3SCAcIgGEQARgBgAoB2BMM&sigh=X7S9MsQM2PY&tpd=AGWhJmvesBlWPLqunPV5SAGVtAwrpbDuuSoKHT9ARMhn-J_Hww", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l_5", 
		"URL=https://www.google.com/ads/measurement/l?ebcid=ALh7CaTWycy0DkeoGeYXwTTdv5vEywUHQ16EmN9kRVchLFaPNKR7IIKHo5fPaJJ2oqxax3mk6FB19wca5GrEtVTxvgGqEOf2Bg", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cookie_push.html_4", 
		"URL=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attr_5", 
		"URL=https://cm.g.doubleclick.net/pixel/attr?d=AHNF13LIyo5dN9Ql9ISK6mnunHC5B6FrqBWqW5--xeMoNLKo8KqgLhOZUCGi-PnvEB2fzw", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tom_hanks", 
		"URL=https://www.movie-list.com/actors/tom_hanks", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/post", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_url("zrt_lookup.html_4", 
		"URL=https://googleads.g.doubleclick.net/pagead/html/r20190204/r20190131/zrt_lookup.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.movie-list.com");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j73&a=232981124&t=pageview&_s=1&dl=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&ul=en-us&de=utf-8&dt=Tom%20Hanks%20Movie%20Trailers%20List%20%7C%20Movie-List.com&sd=24-bit&sr=1205x904&vp=1185x792&je=1&fl=19.0%20r0&_u=AACAAMQAAAAAAC~&jid=354619653&gjid=1302106023&cid=910262046.1549865203&tid=UA-1694700-1&_gid=1230455510.1549865210&_r=1&z=1662102193", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("ads_7", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865361&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865361684&bpp=36&bdt=19405&fdt=163&idt=154&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=449483637648&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865351&"
		"ga_hid=232981124&ga_fc=0&icsg=176517304756736&dssz=38&mdo=0&mso=0&u_tz=330&u_his=5&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101%2C20040011&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fpost&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&ifi=6&uci=6.c92s79anru5w&xpc=aOSRhNeYNf&p=https%3A//"
		"www.movie-list.com&dtd=198", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_url("comments", 
		"URL=https://disqus.com/embed/comments/?base=default&f=movielist&t_u=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&t_d=Tom%20Hanks%20Movie%20Trailers%20List%20%7C%20Movie-List.com&t_t=Tom%20Hanks%20Movie%20Trailers%20List%20%7C%20Movie-List.com&s_o=default", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_11", 
		"URL=https://googleads.g.doubleclick.net/pagead/adview?ai="
		"Cpu6mvBFhXOrLJ8fEuQSq6JLwBqnXoaVVpKDbgpUJv-EeEAEg76j1AWDlyuWDtA6gAaXjhdkDyAECqAMByAPJBKoEsgFP0KUem4s07RzbTixjrKnZxMg-qwP9oG9uEi_EQC0RPBunw7eUpx38GAXWp8MdXp39F-EPFpHE8D1vaGdJbtrNk_yEzpO_ZpD3gArzwoIAgmkkmA1_xUMyERG_KjmvmRA2vbXaJ7_pGvIQrDDrJJZkqn1m13wq6b88G6HB-LRxrMsoPzyJ6z3P7C7jfdyzJqmAWYOtXiKZnOBq041JENGqx8neLDc634U2loh-mrMFHpVWwATLw9Xm8wGSBQQIBBgBkgUECAUYBKAGAoAH0ey0eagHjs4bqAfVyRuoB6gGqAe6BqgH2csbqAfPzBuoB6a-G9gHAfIHBBCUrgTSCAcIgGEQARgCgAoB2BMM&sigh=I7khSW1ahq8&tpd="
		"AGWhJmu5fuSo9gmeo5aaL_aZ-_tOD6V_jRNDVc9xEl7juq5vgw", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865361&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&dt=1549865361684&bpp=36&bdt=19405&fdt=163&idt=154&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=449483637648&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid="
		"1549865351&ga_hid=232981124&ga_fc=0&icsg=176517304756736&dssz=38&mdo=0&mso=0&u_tz=330&u_his=5&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101%2C20040011&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fpost&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&ifi=6&uci=6.c92s79anru5w&xpc=aOSRhNeYNf&p="
		"https%3A//www.movie-list.com&dtd=198", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads_8", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=8179616158&adk=2291753242&adf=3627473136&w=300&lmt=1549865362&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&flash=19.0.0&avail_w=300&wgl=1&dt=1549865361724&bpp=25&bdt=19447&fdt=300&idt=114&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&prev_fmts=300x250&correlator=449483637648&frm=20&pv=1&ga_vid=910262046.1549865203&ga_sid=1549865351&ga_hid="
		"232981124&ga_fc=0&icsg=739467258178048&dssz=41&mdo=0&mso=0&u_tz=330&u_his=5&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=997&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C410075101%2C20040011&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fpost&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeEbr%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&ifi=7&uci=7.olzlmwfvt7ob&xpc=IwfdtvK9uW&p=https%3A//"
		"www.movie-list.com&dtd=338", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_8", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.movie-list.com");

	web_custom_request("collect_2", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j73&tid=UA-1694700-1&cid=910262046.1549865203&jid=354619653&gjid=1302106023&_gid=1230455510.1549865210&_u=AACAAMAAAAAAAC~&z=352511301", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("attr_6", 
		"URL=https://cm.g.doubleclick.net/pixel/attr?d=AHNF13IJcco0QLd23sN7UuG-JnO1-DPJ8VQ42tJZJmuEbNCOqw", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pagead2.googlesyndication.com/pagead/s/cookie_push.html", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_6", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_7", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		LAST);

	web_url("moneypit", 
		"URL=https://www.movie-list.com/trailers/moneypit", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Tom Hanks", 
		"URL=https://www.movie-list.com/actors/tom_hanks", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.movie-list.com");

	web_custom_request("available", 
		"URL=https://trc.taboola.com/movie-list/log/3/available", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t73.inf", 
		"Body=ri=b0cd6652fc44c7916ce5f7256d2a4065&sd=v2_15854ace739c6a789bfb66c03e6c2df9_34aac731-6563-45f1-b4a0-7ff4b18f0ad9-tuct35a9879_1549865721_1549865721_CNawjgYQ7Iw-GKLlxdmNLSABKAEwZziY0QpA5I8QSILqGFCk3RVYAGAA&ui=34aac731-6563-45f1-b4a0-7ff4b18f0ad9-tuct35a9879&pi=%2Factors%2Ftom_hanks&wi=3126507340849086112&pt=text&vi=1549865677474&li=rbox-t2m&utm=10%2C2347%2C5774%2C8657&df=1&ppb=CMoF&cpb="
		"Eg4zNDUtMzQtUkVMRUFTRRgBIJz__________wEqGXNnLnRhYm9vbGFzeW5kaWNhdGlvbi5jb20yCHdhdGVyMzY4OICEtOkJQJjRCkjkjxBQguoYWKTdFQ&tim=11%3A44%3A40.784&id=9363&llvl=1&cv=345-34-RELEASE&fil=%5B%7B%22tii%22%3A%22~~V1~~6340235005041427258~~"
		"Q1CWZQ4eW427PurD-JXmXft9zo5kAXtjlNO17JyqhcIgADLX0sCLI84lvxeYoNVBXtEiVLHvk6BFwXvQihx-5mt7edQ6zoqdpv903LR4BWqi40wNSvunY7pXhDU6V5GclCv02jO2U3SudDGa-617pJL6BcSGtYDtOWk5xEuF8EBUcSPAlWqRlCk7ZCpaS6bY%22%2C%22tipt%22%3A%22SP%22%2C%22tit%22%3A%22text%22%2C%22tids%22%3A%22a%22%7D%2C%7B%22tii%22%3A%22~~V1~~-5363834366953661569~~"
		"j-Hpo318d57qsgo-7GeScBNpdMkhuUlVohn7FIp6ZBAgADLX0sCLI84lvxeYoNVBXtEiVLHvk6BFwXvQihx-5r857MQn9J5LVdWytea-PDIkASwyXu3C2323qtoKB87bu-_q4aa94NyVQHIEhFDMQeMazjA5gxOpCM7dDZIYbbbffknJSmgNBa64uLX4M24KYu1jBy1q4AwMrzjeDAQDvA%22%2C%22tipt%22%3A%22SP%22%2C%22tit%22%3A%22text%22%2C%22tids%22%3A%22a%22%7D%2C%7B%22tii%22%3A%22~~V1~~4194811191686633132~~"
		"5IJfQkf1YUJnggZEDiVggUjcRYUuai2YNgWlOUPFJuMgADLX0sCLI84lvxeYoNVBXtEiVLHvk6BFwXvQihx-5v9Xkm0139tEO6Qib8QV3EwkASwyXu3C2323qtoKB87bbxtBLQXSFx-Daqb_2jt59SvQDZndEgZ-LUtjKPDaYGvffknJSmgNBa64uLX4M24KYu1jBy1q4AwMrzjeDAQDvA%22%2C%22tipt%22%3A%22SP%22%2C%22tit%22%3A%22photo%22%2C%22tids%22%3A%22a%22%7D%2C%7B%22tii%22%3A%22~~V1~~5093759504127239193~~"
		"8V5JVGJiCZ9KPwG6tNAxBQWd0Im_qICmNd9HRN0ncwAgADLX0sCLI84lvxeYoNVBXtEiVLHvk6BFwXvQihx-5oPhqZHIniJKxdt9UCaV5zckASwyXu3C2323qtoKB87b2b-xXCW425Wvt4kRhX5qEAzVEx9OAXyhhdmMA3UIhdPffknJSmgNBa64uLX4M24KYu1jBy1q4AwMrzjeDAQDvA%22%2C%22tipt%22%3A%22SP%22%2C%22tit%22%3A%22text%22%2C%22tids%22%3A%22a%22%7D%2C%7B%22tii%22%3A%22~~V1~~238823041593368636~~"
		"i1oP9l5mcX_c7QqaI_5tmXpcn5GQoLR1wuBOXRTjbw4gADLX0sCLI84lvxeYoNVBXtEiVLHvk6BFwXvQihx-5mZdD01__Pk6yBQE_oY0zRwkASwyXu3C2323qtoKB87b5PwnmcMt2vagH9SsLqFK_sSLmGxXlPvZVpUUDiGmnmPffknJSmgNBa64uLX4M24KYu1jBy1q4AwMrzjeDAQDvA%22%2C%22tipt%22%3A%22SP%22%2C%22tit%22%3A%22photo%22%2C%22tids%22%3A%22a%22%7D%2C%7B%22tii%22%3A%22~~V1~~-3133188898497839289~~"
		"ooLS3i-2HmRjgTFka8DLzlJN2ZNQ4iIWAUPy5-KVFK4gADLX0sCLI84lvxeYoNVBXtEiVLHvk6BFwXvQihx-5lVo0JYo5UaJWa6Sw7BYhy8kASwyXu3C2323qtoKB87bbxtBLQXSFx-Daqb_2jt59ToFBApWtfJGPmHz5UmZCATffknJSmgNBa64uLX4M24KYu1jBy1q4AwMrzjeDAQDvA%22%2C%22tipt%22%3A%22SP%22%2C%22tit%22%3A%22photo%22%2C%22tids%22%3A%22a%22%7D%5D", 
		LAST);

	web_url("ads_9", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=9380661966&adk=423701469&adf=339239045&w=300&fwrn=4&fwrnh=100&lmt=1549865677&rafmt=1&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&flash=19.0.0&fwr=0&resp_fmts=3&wgl=1&adsid=NT&dt=1549865677494&bpp=35&bdt=33778&fdt=159&idt=148&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=678673965232&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid="
		"1549865658&ga_hid=2138098079&ga_fc=0&icsg=9391537334784&dssz=42&mdo=0&mso=0&u_tz=330&u_his=5&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=239&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C21062571%2C410075101&oid=3&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=144&bc=1&jar=2019-02-11-06&ifi=6&uci=6.guutvcqj5314&xpc=huIv1zVQSC&p=https%3A//www.movie-list.com&dtd=187", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_url("zrt_lookup.html_5", 
		"URL=https://googleads.g.doubleclick.net/pagead/html/r20190204/r20190131/zrt_lookup.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads_10", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=8179616158&adk=2291753242&adf=3627473136&w=300&lmt=1549865680&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&flash=19.0.0&avail_w=300&wgl=1&adsid=NT&dt=1549865677531&bpp=22&bdt=33815&fdt=2576&idt=111&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&prev_fmts=300x250&correlator=678673965232&frm=20&pv=1&ga_vid=910262046.1549865203&ga_sid=1549865658&"
		"ga_hid=2138098079&ga_fc=0&icsg=9391537334784&dssz=49&mdo=0&mso=0&u_tz=330&u_his=5&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=998&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C21062571%2C410075101&oid=3&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeEbr%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&jar=2019-02-11-06&ifi=7&uci=7.ix45dkf143vc&xpc=vSZGLCywzf&p=https%3A//www.movie-list.com&dtd=2621", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_9", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html?v=1-0-32", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_8", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	web_url("moneypit_2", 
		"URL=https://www.movie-list.com/trailers/moneypit", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/actors/tom_hanks", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_10", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_12", 
		"URL=https://securepubads.g.doubleclick.net/pagead/adview?ai="
		"CtQ3aLhNhXJPKAoSOogOUypzIB9C0qvBUqY7ViNAIwI23ARABIO-o9QFg5crlg7QOoAG50MrsA8gBAqkCaAyC0xsdTj7gAgCoAwHIA5kEqgTbAU_Qs-QN5Yn8xoYvnaK5dz5J7S8DZDXurrXZ6vTvERdwN3IpFJo-GogzLYFS_Tet3o9pIRxhEIrH3LLk9XBFzQ2wKwttKD9x6w5THBlX4y0yM8cCFGgrlZBRSALr5qqRtFxKohdHQ6QnRrcQ3nenZLF15V71prP00vpiHhbw0ar4xxzRos_MOVrWr1OAqofVWoiqNAy3g5EXUelaW3iqL41ij2hjdL3Mxi4acSai3r4dGHDhonPoeXx4YdlYpdwGfckt-7_GPrz2u6c0krlGYjgfZMQhP-aoZHuf9MAErIiq34UC4AQBkgUECAQYAZIFBAgFGASgBgKAB6-vtROoB47OG6gH1ckbqAeoBqgHugaoB9nLG6gHz8wbqAemvhvYBwHyBwQQs"
		"NMR0ggHCIBhEAEYAYAKAdgTAg&sigh=go064r7ciuY&tpd=AGWhJmuBfPqRBHCHDbMtoHiA4ewbMv5o1N_tx7lQCYnHMPV75A", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l_6", 
		"URL=https://www.google.com/ads/measurement/l?ebcid=ALh7CaRYzUlGSykbUGlTHut0gwFtXO7seU-I61OOOHbThf2yVTZOojPq3EJoQ7oxqouTkegzrmBoL_ednlMdaocRnMPaxNd5KQ", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	web_url("zrt_lookup.html_6", 
		"URL=https://googleads.g.doubleclick.net/pagead/html/r20190204/r20190131/zrt_lookup.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ads_11", 
		"URL=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=4901672544&adk=4064835747&adf=888593959&w=300&lmt=1549865750&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fmoneypit&flash=19.0.0&avail_w=300&wgl=1&adsid=NT&dt=1549865750446&bpp=33&bdt=31213&fdt=113&idt=101&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=2717412013392&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865729&ga_hid=1781168378&"
		"ga_fc=0&icsg=713209380601856&dssz=41&mdo=0&mso=0&u_tz=330&u_his=6&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=728&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C21062571%2C410075101&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&ifi=7&uci=7.6d1pfjpr3ufk&xpc=vFUG8VEjNz&p=https%3A//www.movie-list.com&dtd="
		"193", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	web_url("adview_13", 
		"URL=https://googleads.g.doubleclick.net/pagead/adview?ai="
		"Cg6fIQxNhXOLxD8mxyAOW-pWoBNC0qvBUgf_UiNAIwI23ARABIO-o9QFg5crlg7QOoAG50MrsA8gBAqkCaAyC0xsdTj6oAwHIA8kEqgSyAU_QlrL-9xYPQXxMOfca3vRW-4LDtFQDTjs8sjJTofQLFQxEmSYgOnFVqh2t80PGRUCz7h-SCBV1CKmklhq9EROmsf1tbPP3wpFcSxB8cirX1ucKw3j22yZWf682IdPKuIpH_qyrM16xX5rCH-jc3tweAueXelRp2Mg_OJhys7AEXplRPnRw8igjqcZN5lLo4f36ksLR9xgZLWhlYGkCxEse1LgQvcpkDQCRF6SP63WOHvbABISIqt-FApIFBAgEGAGSBQQIBRgEoAYCgAevr7UTqAeOzhuoB9XJG6gHqAaoB7oGqAfZyxuoB8_MG6gHpr4b2AcB8gcEEIPFFNIIBwiAYRABGAKACgHYEwI&sigh=y07QXUgkjI4&tpd="
		"AGWhJmuZNRz0ppwejdgjNsRdxeuktmO_6VbyorfTPM30BUT6RA", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=4901672544&adk=4064835747&adf=888593959&w=300&lmt=1549865750&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fmoneypit&flash=19.0.0&avail_w=300&wgl=1&adsid=NT&dt=1549865750446&bpp=33&bdt=31213&fdt=113&idt=101&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=2717412013392&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865729&ga_hid="
		"1781168378&ga_fc=0&icsg=713209380601856&dssz=41&mdo=0&mso=0&u_tz=330&u_his=6&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=728&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C21062571%2C410075101&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&ifi=7&uci=7.6d1pfjpr3ufk&xpc=vFUG8VEjNz&p=https%3A//"
		"www.movie-list.com&dtd=193", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_9", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_url("sh.e4e8af4de595fdb10ec1459d.html_10", 
		"URL=https://s7.addthis.com/static/sh.e4e8af4de595fdb10ec1459d.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_url("container.html_11", 
		"URL=https://tpc.googlesyndication.com/safeframe/1-0-31/html/container.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_url("related.json", 
		"URL=https://www.movie-list.com/crons/related.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_url("taboola", 
		"URL=https://disqusads.com/ads-iframe/taboola/?serverbid=0&experiment=network_default&safetylevel=40&variant=fallthrough&aol=1&thumbnails_allowed=0&display_only=0&forum_pk=180597&position=bottom&shortname=movielist&appnexus=1&category=entertainment&polymorph=0&display_bidding_enabled=1&stories_allowed=1&service=dynamic&forum_shortname=movielist&display_allowed=1&video_allowed=0&provider=taboola&adx=0&t=1549865718&rubicon=0&sandbox_display=1&links_allowed=0&doublewide_allowed=1&criteo=1&openx=1&"
		"anchorColor=%23030303&colorScheme=light&sourceUrl=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fmoneypit&typeface=sans-serif&canonicalUrl=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fmoneypit&disqus_version=b8ee461", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_url("like.php", 
		"URL=https://www.facebook.com/plugins/like.php?href=http%3A%2F%2Ffacebook.com%2Fmovielist&width=235&height=21&colorscheme=light&layout=button_count&action=like&show_faces=false&send=false&appId=234634036592702", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_url("redir.html", 
		"URL=https://p4-e6fpixejg2sbq-qstuuc5hp36uwllv-if-v6exp3-v4.metric.gstatic.com/v6exp3/redir.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://googleads.g.doubleclick.net/pagead/ads?client=ca-pub-7661488981746659&output=html&h=250&slotname=4901672544&adk=4064835747&adf=888593959&w=300&lmt=1549865750&guci=2.2.0.0.2.2.0.0&format=300x250&url=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fmoneypit&flash=19.0.0&avail_w=300&wgl=1&adsid=NT&dt=1549865750446&bpp=33&bdt=31213&fdt=113&idt=101&shv=r20190204&cbv=r20190131&saldr=aa&abxe=1&correlator=2717412013392&frm=20&pv=2&ga_vid=910262046.1549865203&ga_sid=1549865729&ga_hid="
		"1781168378&ga_fc=0&icsg=713209380601856&dssz=41&mdo=0&mso=0&u_tz=330&u_his=6&u_java=1&u_h=904&u_w=1205&u_ah=856&u_aw=1205&u_cd=24&u_nplug=1&u_nmime=2&adx=792&ady=728&biw=1185&bih=792&scr_x=0&scr_y=0&eid=21060853%2C21062571%2C410075101&oid=3&ref=https%3A%2F%2Fwww.movie-list.com%2Factors%2Ftom_hanks&rx=0&eae=0&fc=656&docm=11&brdim=0%2C65%2C-9%2C-9%2C1205%2C%2C1224%2C875%2C1205%2C792&vis=1&rsz=d%7C%7CeE%7C&abl=CS&ppjl=f&pfx=0&fu=16&bc=1&ifi=7&uci=7.6d1pfjpr3ufk&xpc=vFUG8VEjNz&p=https%3A//"
		"www.movie-list.com&dtd=193", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	web_url("comments_2", 
		"URL=https://disqus.com/embed/comments/?base=default&f=movielist&t_i=moneypit&t_u=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fmoneypit&t_d=The%20Money%20Pit%20(1986)%20Movie%20Trailer%20%7C%20Movie-List.com&t_t=The%20Money%20Pit%20(1986)%20Movie%20Trailer%20%7C%20Movie-List.com&s_o=default", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.movie-list.com/trailers/moneypit", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://disqusads.com");

	web_custom_request("available_2", 
		"URL=https://trc.taboola.com/disqus-widget-safetylevel20longtail09/log/3/available", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://disqusads.com/ads-iframe/taboola/?serverbid=0&experiment=network_default&safetylevel=40&variant=fallthrough&aol=1&thumbnails_allowed=0&display_only=0&forum_pk=180597&position=bottom&shortname=movielist&appnexus=1&category=entertainment&polymorph=0&display_bidding_enabled=1&stories_allowed=1&service=dynamic&forum_shortname=movielist&display_allowed=1&video_allowed=0&provider=taboola&adx=0&t=1549865718&rubicon=0&sandbox_display=1&links_allowed=0&doublewide_allowed=1&criteo=1&openx=1&"
		"anchorColor=%23030303&colorScheme=light&sourceUrl=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fmoneypit&typeface=sans-serif&canonicalUrl=https%3A%2F%2Fwww.movie-list.com%2Ftrailers%2Fmoneypit&disqus_version=b8ee461", 
		"Snapshot=t94.inf", 
		"Body=ri=1a2c2d68517ddc9ecbf1577a72a9430c&sd=v2_7bfb42da91de1708718c29c373628c43_34aac731-6563-45f1-b4a0-7ff4b18f0ad9-tuct35a9879_1549865824_1549865824_CIi3jgYQktQ_GIX0y9mNLSABKAMwZziY0QpA5I8QSILqGFCk3RVYAGAA&ui=34aac731-6563-45f1-b4a0-7ff4b18f0ad9-tuct35a9879&pi=%2Ftrailers%2Fmoneypit&wi=7241927168121826728&pt=text&vi=1549865777669&li=rbox-t2m&utm=8%2C108%2C277%2C5924&df=1&ppb=CJEE&cpb="
		"Eg4zNDUtMzQtUkVMRUFTRRjOmh0gnP__________ASoZc2cudGFib29sYXN5bmRpY2F0aW9uLmNvbTIId2F0ZXIzNTI4gIS06QlAmNEKSOSPEFCC6hhYpN0V&tim=11%3A46%3A23.416&id=8836&llvl=1&cv=345-34-RELEASE&fil=%5B%7B%22tii%22%3A%22~~V1~~1432100298254041990~~hstxdVy5_IkL5ovbfn18Q96ba0GYemywle1ejwNihc0gADLX0sCLI84lvxeYoNVBXtEiVLHvk6BFwXvQihx-5hdJvLkY9A4iuETPLMVmkEP6pspSPnypCftHnRIcjW5if3bOf6jAO_PwxulM5iNaABAd1qCUqueR_HOFAvYBAdh_aLjue-x_gUwPi_Wzn5QF%22%2C%22tipt%22%3A%22SP%22%2C%22tit%22%3A%22text%22%2C%22tids%22%3A%22a%22%7D%5D", 
		LAST);

	return 0;
}