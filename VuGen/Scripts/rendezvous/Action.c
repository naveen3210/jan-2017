Action()
{

	web_custom_request("returnCookies", 
		"URL=http://external-rules.foxydeal.com/inline/returnCookies", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("index.htm", 
		"URL=http://127.0.0.1:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("AMCV_9E1005A551ED61CA0A490D45%40AdobeOrg=-1176276602%7CMCAID%7C2C3BDD42051D383E-4000013480001994%7CMCIDTS%7C17179%7CMCMID%7C51456790579850249483626593230670422722%7CMCAAMLH-1484846344%7C9%7CMCAAMB-1484846344%7CNRX38WO0n5BH8Th-nqAG_A%7CMCOPTOUT-1484248744s%7CNONE; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_pers=%20cpn%3D%7C1642007944553%3B%20ppn%3Dacrobat.adobe.com%253Alanding%253Aacrobat-pro-chrome-extension%7C1642007944555%3B%20s_nr%3D1484241544560-New%7C1515777544560%3B%20s_vs%3D1%7C1484243345110%3B; DOMAIN=sstats.adobe.com");

	web_add_cookie("mbox=session#0aabdf8e2e0b44858558600e194399c2#1484243406|PC#0aabdf8e2e0b44858558600e194399c2.28_73#1547486346; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_vi=[CS]v1|2C3BDD42051D383E-4000013480001994[CE]; DOMAIN=sstats.adobe.com");

	web_url("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s43882352511758?AQB=1&ndh=1&pf=1&t=26%2F0%2F2017%2019%3A43%3A19%204%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3AUnknown%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=not_set&s=1536x864&c=24&j=1.6&v=N&k=Y&bh=8&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s48861635883661?AQB=1&ndh=1&pf=1&t=26%2F0%2F2017%2019%3A43%3A19%204%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AExtension%3AStartup%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s44313324580913?AQB=1&ndh=1&pf=1&t=26%2F0%2F2017%2019%3A43%3A19%204%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AOS%3Awin%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s43450856171600?AQB=1&ndh=1&pf=1&t=26%2F0%2F2017%2019%3A43%3A19%204%20360&fid=050FD01EA11D12D1-2C5CD877843B8EA7&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3A13.0%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.4&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		LAST);

	web_url("login.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/WebTours/home.html", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("query", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\x0C\\x89\\xBA\\x89\\xD6\\xE8\\xD2\\xAD#-\\xE7\\x8D@\\x0E$#-\\xCEALz$#-86\\x89\\x87$#-kh\\x9An$#-O\\x9E'\\xF8$#-c\\x93'\\x87$#-\\xA2Y\\xB8I$\\x14", 
		LAST);

	lr_think_time(16);

	web_submit_data("login.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={NewParam}", ENDITEM, 
		"Name=password", "Value={NewParam}", ENDITEM, 
		"Name=passwordConfirm", "Value={NewParam}", ENDITEM, 
		"Name=firstName", "Value=first", ENDITEM, 
		"Name=lastName", "Value=last", ENDITEM, 
		"Name=address1", "Value=street", ENDITEM, 
		"Name=address2", "Value=state", ENDITEM, 
		"Name=register.x", "Value=54", ENDITEM, 
		"Name=register.y", "Value=15", ENDITEM, 
		LAST);

	web_image("button_next.gif", 
		"Src=/WebTours/images/button_next.gif", 
		"Snapshot=t7.inf", 
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t8.inf", 
		LAST);

	web_custom_request("query_2", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\xEB\\x08\\x1D\\x1D5k\\xF6\\x7F#-Tb)\\xAD$#-{\\x9D\\xC4\\xA5$#-\\x1F;9\\x85$#-\\xDA\\x85\\x99a$#-\\xA9\\x8EJ\\xBD$\\x14", 
		LAST);

	lr_think_time(5);

	web_submit_data("reservations.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=01/27/2017", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=01/28/2017", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=50", ENDITEM, 
		"Name=findFlights.y", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=000;0;01/27/2017", ENDITEM, 
		"Name=reserveFlights.x", "Value=58", ENDITEM, 
		"Name=reserveFlights.y", "Value=5", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=first", ENDITEM, 
		"Name=lastName", "Value=last", ENDITEM, 
		"Name=address1", "Value=street", ENDITEM, 
		"Name=address2", "Value=state", ENDITEM, 
		"Name=pass1", "Value=first last", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_url("welcome.pl", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}