Action()
{

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("returnCookies", 
		"URL=http://external-rules.foxydeal.com/inline/returnCookies", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("AMCV_9E1005A551ED61CA0A490D45%40AdobeOrg=-1176276602%7CMCAID%7C2C3BDD42051D383E-4000013480001994%7CMCIDTS%7C17179%7CMCMID%7C51456790579850249483626593230670422722%7CMCAAMLH-1484846344%7C9%7CMCAAMB-1484846344%7CNRX38WO0n5BH8Th-nqAG_A%7CMCOPTOUT-1484248744s%7CNONE; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_pers=%20cpn%3D%7C1642007944553%3B%20ppn%3Dacrobat.adobe.com%253Alanding%253Aacrobat-pro-chrome-extension%7C1642007944555%3B%20s_nr%3D1484241544560-New%7C1515777544560%3B%20s_vs%3D1%7C1484243345110%3B; DOMAIN=sstats.adobe.com");

	web_add_cookie("mbox=session#0aabdf8e2e0b44858558600e194399c2#1484243406|PC#0aabdf8e2e0b44858558600e194399c2.28_73#1547486346; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_vi=[CS]v1|2C3BDD42051D383E-4000013480001994[CE]; DOMAIN=sstats.adobe.com");

	web_url("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s83269798203661?AQB=1&ndh=1&pf=1&t=24%2F0%2F2017%2020%3A7%3A33%202%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3AUnknown%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=not_set&s=1536x864&c=24&j=1.6&v=N&k=Y&bh=8&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s81311375978397?AQB=1&ndh=1&pf=1&t=24%2F0%2F2017%2020%3A7%3A33%202%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AExtension%3AStartup%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s84177452217142?AQB=1&ndh=1&pf=1&t=24%2F0%2F2017%2020%3A7%3A33%202%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AOS%3Awin%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s82574694937991?AQB=1&ndh=1&pf=1&t=24%2F0%2F2017%2020%3A7%3A34%202%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3A13.0%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		LAST);

	web_url("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/home.html", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("query", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\x0C\\x89\\xBA\\x89\\xD6\\xE8\\xD2\\xAD#-\\xE7\\x8D@\\x0E$#-\\xCEALz$#-86\\x89\\x87$#-kh\\x9An$#-O\\x9E'\\xF8$#-c\\x93'\\x87$#-\\xA2Y\\xB8I$\\x14", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(18);

	web_submit_data("login.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=abc", ENDITEM, 
		"Name=password", "Value=123", ENDITEM, 
		"Name=passwordConfirm", "Value=123", ENDITEM, 
		"Name=firstName", "Value=hello", ENDITEM, 
		"Name=lastName", "Value=world", ENDITEM, 
		"Name=address1", "Value=street", ENDITEM, 
		"Name=address2", "Value=city", ENDITEM, 
		"Name=register.x", "Value=50", ENDITEM, 
		"Name=register.y", "Value=6", ENDITEM, 
		LAST);

	web_image("button_next.gif", 
		"Src=/WebTours/images/button_next.gif", 
		"Snapshot=t29.inf", 
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t30.inf", 
		LAST);

	web_custom_request("query_2", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\xEB\\x08\\x1D\\x1D5k\\xF6\\x7F#-Tb)\\xAD$#-{\\x9D\\xC4\\xA5$#-\\x1F;9\\x85$#-\\xDA\\x85\\x99a$#-\\xA9\\x8EJ\\xBD$\\x14", 
		LAST);

	lr_think_time(10);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=01/25/2017", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=01/26/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=65", ENDITEM, 
		"Name=findFlights.y", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_think_time(11);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t33.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=022;320;01/25/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=62", ENDITEM, 
		"Name=reserveFlights.y", "Value=5", ENDITEM, 
		LAST);

	lr_think_time(12);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t34.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=hello", ENDITEM, 
		"Name=lastName", "Value=world", ENDITEM, 
		"Name=address1", "Value=street", ENDITEM, 
		"Name=address2", "Value=city", ENDITEM, 
		"Name=pass1", "Value=hello world", ENDITEM, 
		"Name=creditCard", "Value=2564415638", ENDITEM, 
		"Name=expDate", "Value=2/18", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		LAST);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}