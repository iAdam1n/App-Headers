/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBTelephonyCache, FBCarrier;

@interface FBCarrierFetcher : NSObject {

	FBTelephonyCache* _carrierCache;

}

@property (nonatomic,readonly) FBCarrier * carrier_DEPRECATED; 
-(FBCarrier *)carrier_DEPRECATED;
-(void)fetchCarrierInfo:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initWithTelephonyCache:(id)arg1 ;
-(id)init;
@end
