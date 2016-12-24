/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSString, NSObject;

@interface ASMoatKitUtil : NSObject {

	BOOL _useMoat;
	Class _moatTrackerClass;
	Class _moatVideoTrackerClass;
	id _moatVideoTracker;
	id _moatAdTracker;
	NSDictionary* _adIds;
	NSString* _appName;
	NSObject*<OS_dispatch_queue> _mtq;

}

@property (assign,nonatomic) BOOL useMoat;                                  //@synthesize useMoat=_useMoat - In the implementation block
@property (nonatomic,retain) Class moatTrackerClass;                        //@synthesize moatTrackerClass=_moatTrackerClass - In the implementation block
@property (nonatomic,retain) Class moatVideoTrackerClass;                   //@synthesize moatVideoTrackerClass=_moatVideoTrackerClass - In the implementation block
@property (nonatomic,retain) id moatVideoTracker;                           //@synthesize moatVideoTracker=_moatVideoTracker - In the implementation block
@property (nonatomic,retain) id moatAdTracker;                              //@synthesize moatAdTracker=_moatAdTracker - In the implementation block
@property (nonatomic,retain) NSDictionary * adIds;                          //@synthesize adIds=_adIds - In the implementation block
@property (nonatomic,copy) NSString * appName;                              //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mtq;              //@synthesize mtq=_mtq - In the implementation block
+(id)findQueryStringValueFrom:(id)arg1 givenQueryStringParameter:(id)arg2 ;
+(void)setMoatBitWithASProperties:(id)arg1 ;
+(BOOL)checkForUseOfMoat;
+(void)initMoatVideoTrackerWithTrackingEventURL:(id)arg1 ;
+(void)startMoatVideoTrackerWithAVPlayer:(id)arg1 andPlayerLayer:(id)arg2 insideView:(id)arg3 ;
+(void)finishMoatVideoTracker;
+(id)findBPFFromHTMLData:(id)arg1 ;
+(void)startMoatDisplayTrackerWithAdView:(id)arg1 andBPF:(id)arg2 ;
+(void)cleanUp;
+(id)tracker;
-(void)setMoatTrackerClass:(Class)arg1 ;
-(void)setMoatVideoTrackerClass:(Class)arg1 ;
-(void)setMtq:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUseMoat:(BOOL)arg1 ;
-(BOOL)useMoat;
-(Class)moatVideoTrackerClass;
-(NSObject*<OS_dispatch_queue>)mtq;
-(id)moatVideoTracker;
-(void)setMoatVideoTracker:(id)arg1 ;
-(void)setAdIds:(NSDictionary *)arg1 ;
-(NSDictionary *)adIds;
-(Class)moatTrackerClass;
-(id)moatAdTracker;
-(void)setMoatAdTracker:(id)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
@end
