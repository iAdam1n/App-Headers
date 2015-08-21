/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class IGUser, NSDate;

@interface IGDirectSharePendingRequest : NSObject {

	BOOL _inProgress;
	unsigned long long _numberOfRequests;
	IGUser* _user;
	NSDate* _timeStamp;

}

@property (assign,nonatomic) unsigned long long numberOfRequests;              //@synthesize numberOfRequests=_numberOfRequests - In the implementation block
@property (nonatomic,retain) IGUser * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSDate * timeStamp;                               //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                                  //@synthesize inProgress=_inProgress - In the implementation block
+(id)requestFromDictionary:(id)arg1 ;
-(void)approve:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)approveRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)ignoreRequestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)timeStamp;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(unsigned long long)numberOfRequests;
-(void)setNumberOfRequests:(unsigned long long)arg1 ;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
@end

