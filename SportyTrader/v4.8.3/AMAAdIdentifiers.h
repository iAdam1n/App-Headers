/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/AMSISClientDelegate.h>

@class NSString;

@interface AMAAdIdentifiers : NSObject <AMSISClientDelegate> {

	NSString* _idfaForRenewingAdId;

}

@property (nonatomic,readonly) NSString * idfa; 
@property (nonatomic,readonly) NSString * sha1Idfa; 
@property (nonatomic,readonly) NSString * md5Idfa; 
@property (nonatomic,readonly) BOOL isIdfaReset; 
@property (retain) NSString * idfaForRenewingAdId;                  //@synthesize idfaForRenewingAdId=_idfaForRenewingAdId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdIdentifiers;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)cacheIdfa;
-(void)renewAdIdIfNeededForIdfa:(id)arg1 ;
-(NSString *)idfaForRenewingAdId;
-(id)retrieveCachedIdfa;
-(void)setIdfaForRenewingAdId:(NSString *)arg1 ;
-(void)eraseAdId;
-(NSString *)idfa;
-(id)retrieveAdId;
-(BOOL)isIdfaReset;
-(BOOL)advertisingTrackingEnabled;
-(NSString *)sha1Idfa;
-(NSString *)md5Idfa;
-(void)renewAdIdIfNeeded;
-(void)didUpdateDeviceInfo;
-(void)didFailToUpdateDeviceInfoWithError:(id)arg1 ;
-(void)persistAdId:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

