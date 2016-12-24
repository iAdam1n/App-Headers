/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemNearbyPublicWifi, NSString, NSNumber;

@interface FBHotspotHelperWifiPageInfo : FBValueObject <NSCopying> {

	FBMemNearbyPublicWifi* _memWifi;
	NSString* _category;
	NSString* _hours;
	NSNumber* _cellIndex;

}

@property (nonatomic,copy,readonly) FBMemNearbyPublicWifi * memWifi;              //@synthesize memWifi=_memWifi - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * hours;                             //@synthesize hours=_hours - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * cellIndex;                         //@synthesize cellIndex=_cellIndex - In the implementation block
-(id)initWithMemWifi:(id)arg1 category:(id)arg2 hours:(id)arg3 cellIndex:(id)arg4 ;
-(FBMemNearbyPublicWifi *)memWifi;
-(NSNumber *)cellIndex;
-(NSString *)category;
-(NSString *)hours;
@end
