/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBUserSession;

@interface FBSnacksLogger : NSObject {

	NSString* _traySessionID;
	NSString* _snacksViewerSessionID;
	FBUserSession* _session;

}
-(void)endSnacksViewerSession;
-(void)startSnacksViewerSession;
-(void)_refreshTraySessionID;
-(void)_logEvent:(id)arg1 dictionary:(id)arg2 ;
-(void)log:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
