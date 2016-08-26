/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUserAgentFormatting;
@class FBLocaleMap, FBAPISessionStore;

@interface FBMURLRequestFormatter : NSObject {

	id<FBUserAgentFormatting> _userAgentFormatter;
	FBLocaleMap* _localeMap;
	FBAPISessionStore* _apiSessionStore;

}
-(id)initWithUserAgentFormatter:(id)arg1 localeMap:(id)arg2 apiSessionStore:(id)arg3 ;
-(id)formattedURLRequestWithParams:(id)arg1 urlProtocolUploadDelegate:(id)arg2 ;
-(void)dealloc;
@end
