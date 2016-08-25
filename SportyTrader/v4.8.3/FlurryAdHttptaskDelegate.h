/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FlurryHttpAsyncTaskDelegate.h>

@class NSString;

@interface FlurryAdHttptaskDelegate : NSObject <FlurryHttpAsyncTaskDelegate> {

	BOOL _needLogging;
	BOOL _sendYCookies;
	NSString* _adLogGUID;
	NSString* _urlString;
	NSString* _eventString;
	double _expiryTime;
	double _repeatDuration;

}

@property (nonatomic,retain) NSString * adLogGUID;                  //@synthesize adLogGUID=_adLogGUID - In the implementation block
@property (assign,nonatomic) BOOL needLogging;                      //@synthesize needLogging=_needLogging - In the implementation block
@property (nonatomic,retain) NSString * urlString;                  //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSString * eventString;                //@synthesize eventString=_eventString - In the implementation block
@property (assign,nonatomic) double expiryTime;                     //@synthesize expiryTime=_expiryTime - In the implementation block
@property (assign,nonatomic) BOOL sendYCookies;                     //@synthesize sendYCookies=_sendYCookies - In the implementation block
@property (assign,nonatomic) double repeatDuration;                 //@synthesize repeatDuration=_repeatDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)adLogGUID;
-(void)requestDidFail:(id)arg1 withResponse:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 withResponse:(id)arg2 ;
-(void)requestSuccessful:(id)arg1 withResponse:(id)arg2 ;
-(double)expiryTime;
-(void)setExpiryTime:(double)arg1 ;
-(void)setAdLogGUID:(NSString *)arg1 ;
-(void)setNeedLogging:(BOOL)arg1 ;
-(void)setSendYCookies:(BOOL)arg1 ;
-(void)manageUrlStorage;
-(BOOL)needLogging;
-(void)logResponse:(id)arg1 ;
-(BOOL)sendYCookies;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)urlString;
-(NSString *)eventString;
-(void)setEventString:(NSString *)arg1 ;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1 ;
@end

