/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAppDefaults;

@interface FBAPISessionHTTPCookiesManager : NSObject {

	/*^block*/id _httpCookieStorageFetchBlock;
	FBAppDefaults* _appDefaults;

}
-(id)initWithHTTPCookieStorageFetchBlock:(/*^block*/id)arg1 appDefaults:(id)arg2 ;
-(id)fetchedHTTPCookies;
-(id)cookieExpiration;
-(void)persistHTTPCookies:(id)arg1 ;
-(void)deletePersistedHTTPCookies;
-(id)init;
@end
