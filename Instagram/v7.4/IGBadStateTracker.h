/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface IGBadStateTracker : NSObject {

	BOOL _tracking;
	BOOL _backgroundedWhileTracking;

}

@property (assign) BOOL tracking;                               //@synthesize tracking=_tracking - In the implementation block
@property (assign) BOOL backgroundedWhileTracking;              //@synthesize backgroundedWhileTracking=_backgroundedWhileTracking - In the implementation block
+(void)initialize;
+(id)sharedTracker;
-(void)appBecameActive;
-(void)appBackgrounded;
-(BOOL)backgroundedWhileTracking;
-(void)setBackgroundedWhileTracking:(BOOL)arg1 ;
-(void)beginTracking;
-(void)dealloc;
-(id)init;
-(void)setTracking:(BOOL)arg1 ;
-(void)endTracking;
-(BOOL)tracking;
@end

