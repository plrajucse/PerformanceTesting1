Action()
{

	web_custom_request("webtours", 
		"URL=http://127.0.0.1:1080/webtours/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("header.html", 
		"URL=http://127.0.0.1:1080/webtours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/webtours/", 
		"Snapshot=t4.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("hp_logo.png", 
		"URL=http://127.0.0.1:1080/webtours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:1080/webtours/header.html", 
		"Snapshot=t5.inf", 
		LAST);

	web_custom_request("webtours.png", 
		"URL=http://127.0.0.1:1080/webtours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://127.0.0.1:1080/webtours/header.html", 
		"Snapshot=t6.inf", 
		LAST);

	web_custom_request("home.html", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("mer_login.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		LAST);

	lr_think_time(21);

	web_custom_request("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		"Body=userSession=125485.165168084ztftztDpViDDDDDDDiHcHpifQV&username=jojo&password=bean&JSFormSubmit=off&login.x=60&login.y=15", 
		LAST);

	web_custom_request("nav.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("flights.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t12.inf", 
		LAST);

	web_custom_request("itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t13.inf", 
		LAST);

	web_custom_request("in_home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t14.inf", 
		LAST);

	web_custom_request("signoff.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t15.inf", 
		LAST);

	web_custom_request("login.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("Itinerary Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t17.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t18.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("itinerary.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=itinerary", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("home.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t20.inf", 
		LAST);

	web_custom_request("in_itinerary.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/in_itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t21.inf", 
		LAST);

	web_custom_request("cancelallreservations.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelallreservations.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t22.inf", 
		LAST);

	web_custom_request("cancelreservation.gif", 
		"URL=http://127.0.0.1:1080/WebTours/images/cancelreservation.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t23.inf", 
		LAST);

	lr_think_time(96);

	web_custom_request("itinerary.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t24.inf", 
		"Mode=HTTP", 
		"Body=1=on&flightID=1280000-7-JB&flightID=0-15-JB&flightID=251460081-2322-JB&flightID=128007869-3113-JB&flightID=1569363776-38613-JB&flightID=169149378-4631-JB&flightID=169150010-5405-JB&flightID=1691652633-61623-JB&flightID=169158-6-JB&flightID=210297122-7716-JB&flightID=251446017-8498-JB&flightID=210309019-9270-JB&flightID=169158-10-JB&flightID=210297090-10802-JB&flightID=128015635-11549-JB&flightID=280260057-12351-JB&flightID=280260057-13120-JB&flightID=280260057-13889-JB&flightID="
		"280260057-14658-JB&flightID=280260057-15428-JB&flightID=280260057-16197-JB&flightID=169149721-16960-JB&flightID=169149721-17729-JB&flightID=169149721-18498-JB&flightID=169149721-19267-JB&flightID=210297090-20033-JB&flightID=210297090-20802-JB&flightID=164963716-21590-JB&flightID=164963751-22330-JB&flightID=164963751-23100-JB&flightID=164963751-23869-JB&flightID=164963751-24638-JB&flightID=164970456-25409-JB&flightID=168186788-26175-JB&flightID=164970456-26947-JB&flightID=168186788-27714-JB&"
		"flightID=168186788-28483-JB&flightID=164963716-29256-JB&flightID=164963716-30026-JB&flightID=164963716-30795-JB&flightID=164963716-31564-JB&flightID=164963716-32333-JB&flightID=164963716-33102-JB&flightID=164963716-33872-JB&flightID=164963716-34641-JB&flightID=164963716-35410-JB&flightID=164963716-36179-JB&flightID=164963716-36949-JB&flightID=164963716-37718-JB&flightID=164963716-38487-JB&flightID=164963716-39256-JB&flightID=164963716-40026-JB&flightID=164963716-40795-JB&flightID="
		"164963716-41564-JB&flightID=164963716-42333-JB&flightID=164963716-43102-JB&flightID=164963716-43872-JB&flightID=164963716-44641-JB&flightID=164963716-45410-JB&flightID=164963716-46179-JB&flightID=164963716-46949-JB&flightID=164963716-47718-JB&flightID=164963716-48487-JB&flightID=164963716-49256-JB&flightID=164963716-50026-JB&flightID=164963716-50795-JB&flightID=164963716-51564-JB&flightID=164963716-52333-JB&flightID=164963716-53102-JB&flightID=164963716-53872-JB&flightID=164963716-54641-JB&"
		"flightID=164963716-55410-JB&flightID=164963716-56179-JB&flightID=164963716-56949-JB&flightID=164963716-57718-JB&flightID=164963716-58487-JB&flightID=164963716-59256-JB&flightID=164963716-60026-JB&flightID=164963716-60795-JB&flightID=164963716-61564-JB&flightID=164963716-62333-JB&flightID=164963716-63102-JB&flightID=168186788-63868-JB&flightID=168186788-64637-JB&flightID=168186788-65406-JB&flightID=168186788-66175-JB&flightID=168186788-66945-JB&flightID=168186788-67714-JB&flightID="
		"168186788-68483-JB&flightID=168186788-69252-JB&flightID=164970461-70035-JB&flightID=164964083-70788-JB&flightID=164964083-71557-JB&flightID=164964083-72327-JB&flightID=164964083-73096-JB&flightID=169149721-73883-JB&flightID=164983020-74657-JB&flightID=164964898-75404-JB&flightID=164963751-76177-JB&flightID=164963716-76949-JB&flightID=164963716-77718-JB&flightID=153448942-78495-JB&flightID=153448942-79264-JB&flightID=153448942-80034-JB&flightID=19352-80809-JB&flightID=1935-81558-JB&flightID="
		"360671233-82331-JB&flightID=294004532-83104-JB&flightID=294004532-83874-JB&flightID=294004494-84641-JB&flightID=294015561-85396-JB&flightID=246893420-86181-JB&flightID=246893420-86951-JB&flightID=123453036-87769-JB&flightID=123453036-88538-JB&flightID=123453036-89307-JB&flightID=294004532-90028-JB&flightID=294004494-90795-JB&flightID=294004494-91564-JB&flightID=294004494-92334-JB&flightID=294004494-93103-JB&flightID=294004494-93872-JB&flightID=294004494-94641-JB&flightID=294004494-95411-JB&"
		"flightID=294004494-96180-JB&flightID=294004494-96949-JB&flightID=294004494-97718-JB&flightID=294004494-98487-JB&flightID=294004494-99257-JB&flightID=294004494-100026-JB&flightID=294004494-100795-JB&flightID=294004494-101564-JB&flightID=294004494-102334-JB&flightID=2940000-1030-JB&flightID=294004532-103874-JB&flightID=294004532-104643-JB&flightID=294004532-105412-JB&flightID=294000793-106187-JB&flightID=294000793-106956-JB&flightID=294000832-107728-JB&flightID=294000866-108492-JB&flightID="
		"294000866-109261-JB&flightID=294000866-110030-JB&flightID=294000866-110800-JB&flightID=294000866-111569-JB&flightID=294000866-112338-JB&flightID=294000866-113107-JB&flightID=294000866-113877-JB&flightID=294000866-114646-JB&flightID=294000866-115415-JB&flightID=294000866-116184-JB&flightID=294000866-116953-JB&flightID=294000866-117723-JB&flightID=294000866-118492-JB&flightID=294000866-119261-JB&flightID=294000866-120030-JB&flightID=294000866-120800-JB&flightID=0-1215-JB&flightID=294000866-122338-JB"
		"&flightID=294000866-123107-JB&flightID=294000866-123877-JB&flightID=294000866-124646-JB&flightID=294000866-125415-JB&flightID=294000866-126184-JB&flightID=294000866-126953-JB&flightID=294000866-127723-JB&flightID=294000866-128492-JB&flightID=294000866-129261-JB&flightID=294000866-130030-JB&flightID=294000866-130800-JB&flightID=294000866-131569-JB&flightID=294000866-132338-JB&flightID=294000866-133107-JB&flightID=294000866-133877-JB&flightID=294000866-134646-JB&flightID=294000866-135415-JB&flightID"
		"=294000866-136184-JB&flightID=294000866-136953-JB&flightID=294000866-137723-JB&flightID=294000866-138492-JB&flightID=294000866-139261-JB&flightID=294000866-140030-JB&flightID=294000866-140800-JB&flightID=294000866-141569-JB&flightID=294000866-142338-JB&flightID=294000866-143107-JB&flightID=294000866-143877-JB&flightID=294000866-144646-JB&flightID=294000866-145415-JB&flightID=294000866-146184-JB&flightID=294000866-146953-JB&flightID=294000866-147723-JB&flightID=294000866-148492-JB&flightID="
		"294000866-149261-JB&flightID=294000866-150030-JB&flightID=294000866-150800-JB&flightID=294000866-151569-JB&flightID=294000866-152338-JB&flightID=294000866-153107-JB&flightID=294000866-153877-JB&flightID=294000866-154646-JB&flightID=294000866-155415-JB&flightID=294000866-156184-JB&flightID=294000866-156953-JB&flightID=294000866-157723-JB&flightID=294000866-158492-JB&flightID=294000866-159261-JB&flightID=294000866-160030-JB&flightID=294000866-160800-JB&flightID=294000866-161569-JB&flightID="
		"294000866-162338-JB&flightID=294000866-163107-JB&flightID=294000866-163877-JB&flightID=294000866-164646-JB&flightID=294000866-165415-JB&flightID=294000866-166184-JB&flightID=294000866-166953-JB&flightID=294000866-167723-JB&flightID=294000866-168492-JB&flightID=294000866-169261-JB&flightID=294009004-170009-JB&flightID=294008968-170780-JB&flightID=294008968-171549-JB&flightID=294008968-172319-JB&flightID=29401500-173116-JB&flightID=29401500-173885-JB&flightID=29401500-174654-JB&flightID="
		"29401500-175423-JB&flightID=29401500-176192-JB&flightID=29401500-176962-JB&flightID=29401500-177731-JB&flightID=29401500-178500-JB&flightID=29400-1792-JB&flightID=29400-1800-JB&flightID=29400-1807-JB&flightID=29400-1815-JB&flightID=29400-1823-JB&flightID=29400-1830-JB&flightID=29400-1838-JB&flightID=29400-1846-JB&flightID=29400-1853-JB&flightID=294008968-186165-JB&flightID=294015597-186933-JB&flightID=294008968-187703-JB&flightID=294008968-188473-JB&flightID=294008968-189242-JB&flightID="
		"294008968-190011-JB&flightID=294008968-190780-JB&flightID=294007896-191555-JB&flightID=294008966-192354-JB&flightID=294008966-193124-JB&flightID=294008966-193893-JB&flightID=294008966-194662-JB&flightID=294008966-195431-JB&flightID=294008966-196200-JB&flightID=294008966-196970-JB&flightID=294008966-197739-JB&flightID=294008966-198508-JB&flightID=294008966-199277-JB&flightID=294008966-200047-JB&flightID=294007792-200798-JB&flightID=294007792-201568-JB&flightID=294007792-202337-JB&flightID="
		"294007792-203106-JB&flightID=294007792-203875-JB&flightID=294004532-204643-JB&flightID=294009004-205394-JB&flightID=294009004-206163-JB&flightID=294009004-206933-JB&flightID=294009004-207702-JB&flightID=294009004-208471-JB&flightID=294009004-209240-JB&flightID=294009004-210009-JB&flightID=294009004-210779-JB&flightID=294009004-211548-JB&flightID=294009004-212317-JB&flightID=294009004-213086-JB&flightID=294009004-213856-JB&flightID=294009004-214625-JB&flightID=294009004-215394-JB&flightID="
		"294009004-216163-JB&flightID=294009004-216933-JB&flightID=294009004-217702-JB&flightID=294009004-218471-JB&flightID=294009004-219240-JB&flightID=294009004-220009-JB&flightID=294009004-220779-JB&flightID=294009004-221548-JB&flightID=294009004-222317-JB&flightID=294009004-223086-JB&flightID=294009004-223856-JB&flightID=294009004-224625-JB&flightID=294009004-225394-JB&flightID=294009004-226163-JB&flightID=294009004-226933-JB&flightID=294009004-227702-JB&flightID=294009004-228471-JB&flightID="
		"294009004-229240-JB&flightID=294009004-230009-JB&flightID=294009004-230779-JB&flightID=294009004-231548-JB&flightID=294009004-232317-JB&flightID=294009004-233086-JB&flightID=294009004-233856-JB&flightID=294009004-234625-JB&flightID=294009004-235394-JB&flightID=294009004-236163-JB&flightID=294009004-236933-JB&flightID=294009004-237702-JB&flightID=294009004-238471-JB&flightID=294009004-239240-JB&flightID=294009004-240009-JB&flightID=294009004-240779-JB&flightID=294009004-241548-JB&flightID="
		"294009004-242317-JB&flightID=294009004-243086-JB&flightID=294009004-243856-JB&flightID=294008966-244662-JB&flightID=294015561-245396-JB&flightID=294009004-246163-JB&flightID=294009004-246933-JB&flightID=294009004-247702-JB&flightID=294009004-248471-JB&flightID=294009004-249240-JB&flightID=294009004-250009-JB&flightID=294009004-250779-JB&flightID=294009004-251548-JB&flightID=294009004-252317-JB&flightID=294009004-253086-JB&.cgifields=127&.cgifields=32&.cgifields=276&.cgifields=90&.cgifields=206&"
		".cgifields=118&.cgifields=71&.cgifields=102&.cgifields=16&.cgifields=55&.cgifields=84&.cgifields=233&.cgifields=259&.cgifields=194&.cgifields=57&.cgifields=220&.cgifields=316&.cgifields=163&.cgifields=89&.cgifields=175&.cgifields=31&.cgifields=35&.cgifields=11&.cgifields=208&.cgifields=93&.cgifields=292&.cgifields=325&.cgifields=29&.cgifields=291&.cgifields=199&.cgifields=114&.cgifields=226&.cgifields=58&.cgifields=211&.cgifields=153&.cgifields=15&.cgifields=101&.cgifields=73&.cgifields=76&"
		".cgifields=311&.cgifields=62&.cgifields=67&.cgifields=241&.cgifields=198&.cgifields=139&.cgifields=129&.cgifields=327&.cgifields=320&.cgifields=280&.cgifields=273&.cgifields=236&.cgifields=249&.cgifields=218&.cgifields=202&.cgifields=168&.cgifields=184&.cgifields=135&.cgifields=14&.cgifields=145&.cgifields=49&.cgifields=178&.cgifields=24&.cgifields=285&.cgifields=140&.cgifields=124&.cgifields=104&.cgifields=131&.cgifields=181&.cgifields=234&.cgifields=314&.cgifields=307&.cgifields=154&.cgifields="
		"23&.cgifields=96&.cgifields=159&.cgifields=326&.cgifields=160&.cgifields=47&.cgifields=8&.cgifields=98&.cgifields=37&.cgifields=43&.cgifields=270&.cgifields=195&.cgifields=5&.cgifields=21&.cgifields=288&.cgifields=193&.cgifields=119&.cgifields=324&.cgifields=180&.cgifields=244&.cgifields=162&.cgifields=246&.cgifields=240&.cgifields=74&.cgifields=61&.cgifields=230&.cgifields=299&.cgifields=115&.cgifields=103&.cgifields=201&.cgifields=113&.cgifields=152&.cgifields=189&.cgifields=295&.cgifields=266&"
		".cgifields=91&.cgifields=107&.cgifields=87&.cgifields=174&.cgifields=77&.cgifields=214&.cgifields=221&.cgifields=39&.cgifields=64&.cgifields=97&.cgifields=12&.cgifields=41&.cgifields=52&.cgifields=312&.cgifields=302&.cgifields=229&.cgifields=45&.cgifields=260&.cgifields=237&.cgifields=309&.cgifields=188&.cgifields=68&.cgifields=315&.cgifields=1&.cgifields=136&.cgifields=116&.cgifields=144&.cgifields=100&.cgifields=300&.cgifields=222&.cgifields=25&.cgifields=286&.cgifields=120&.cgifields=83&"
		".cgifields=305&.cgifields=308&.cgifields=254&.cgifields=177&.cgifields=217&.cgifields=328&.cgifields=239&.cgifields=122&.cgifields=143&.cgifields=281&.cgifields=269&.cgifields=205&.cgifields=158&.cgifields=42&.cgifields=22&.cgifields=46&.cgifields=235&.cgifields=301&.cgifields=6&.cgifields=36&.cgifields=213&.cgifields=183&.cgifields=94&.cgifields=51&.cgifields=317&.cgifields=296&.cgifields=265&.cgifields=169&.cgifields=132&.cgifields=171&.cgifields=200&.cgifields=18&.cgifields=125&.cgifields=329&"
		".cgifields=44&.cgifields=27&.cgifields=272&.cgifields=161&.cgifields=190&.cgifields=298&.cgifields=95&.cgifields=313&.cgifields=20&.cgifields=109&.cgifields=231&.cgifields=243&.cgifields=151&.cgifields=148&.cgifields=287&.cgifields=78&.cgifields=294&.cgifields=106&.cgifields=275&.cgifields=157&.cgifields=65&.cgifields=197&.cgifields=203&.cgifields=261&.cgifields=138&.cgifields=81&.cgifields=137&.cgifields=60&.cgifields=321&.cgifields=284&.cgifields=86&.cgifields=247&.cgifields=204&.cgifields=289&"
		".cgifields=165&.cgifields=17&.cgifields=2&.cgifields=186&.cgifields=82&.cgifields=110&.cgifields=147&.cgifields=228&.cgifields=323&.cgifields=268&.cgifields=69&.cgifields=112&.cgifields=319&.cgifields=172&.cgifields=191&.cgifields=224&.cgifields=187&.cgifields=223&.cgifields=282&.cgifields=262&.cgifields=79&.cgifields=121&.cgifields=212&.cgifields=126&.cgifields=238&.cgifields=251&.cgifields=253&.cgifields=279&.cgifields=176&.cgifields=209&.cgifields=216&.cgifields=256&.cgifields=117&.cgifields="
		"170&.cgifields=33&.cgifields=63&.cgifields=7&.cgifields=80&.cgifields=26&.cgifields=227&.cgifields=99&.cgifields=72&.cgifields=179&.cgifields=264&.cgifields=255&.cgifields=297&.cgifields=182&.cgifields=108&.cgifields=277&.cgifields=92&.cgifields=232&.cgifields=10&.cgifields=225&.cgifields=142&.cgifields=207&.cgifields=263&.cgifields=167&.cgifields=48&.cgifields=133&.cgifields=290&.cgifields=123&.cgifields=149&.cgifields=304&.cgifields=50&.cgifields=210&.cgifields=258&.cgifields=173&.cgifields=56&"
		".cgifields=66&.cgifields=19&.cgifields=293&.cgifields=54&.cgifields=274&.cgifields=306&.cgifields=70&.cgifields=322&.cgifields=166&.cgifields=88&.cgifields=30&.cgifields=141&.cgifields=128&.cgifields=252&.cgifields=28&.cgifields=310&.cgifields=283&.cgifields=75&.cgifields=40&.cgifields=134&.cgifields=156&.cgifields=303&.cgifields=192&.cgifields=250&.cgifields=59&.cgifields=215&.cgifields=278&.cgifields=150&.cgifields=271&.cgifields=130&.cgifields=155&.cgifields=53&.cgifields=245&.cgifields=267&"
		".cgifields=219&.cgifields=318&.cgifields=13&.cgifields=257&.cgifields=105&.cgifields=85&.cgifields=3&.cgifields=185&.cgifields=248&.cgifields=111&.cgifields=9&.cgifields=146&.cgifields=38&.cgifields=4&.cgifields=34&.cgifields=164&.cgifields=196&.cgifields=242&removeFlights.x=47&removeFlights.y=6", 
		LAST);

	lr_think_time(8);

	web_custom_request("SignOff Button", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t26.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("home.html_2", 
		"URL=http://127.0.0.1:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}