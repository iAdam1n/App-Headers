/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLLocation, NSNumber, NSDate;

@interface FBMQuickReplyContent : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	unsigned long long _sticker_stickerFbId;
	double _location_latitude;
	double _location_longitude;
	BOOL _location_isCurrentLocation;
	NSString* _ride_providerName;
	NSString* _ride_destAddress;
	CLLocation* _ride_destLocation;
	NSNumber* _payment_amount;
	NSString* _payment_currencyCode;
	unsigned long long _payment_type;
	NSDate* _reminder_date;

}
+(id)stickerWithStickerFbId:(unsigned long long)arg1 ;
+(id)locationWithLatitude:(double)arg1 longitude:(double)arg2 isCurrentLocation:(BOOL)arg3 ;
+(id)paymentWithAmount:(id)arg1 currencyCode:(id)arg2 type:(unsigned long long)arg3 ;
+(id)reminderWithDate:(id)arg1 ;
+(id)rideWithProviderName:(id)arg1 destAddress:(id)arg2 destLocation:(id)arg3 ;
+(id)text;
-(void)matchText:(/*^block*/id)arg1 sticker:(/*^block*/id)arg2 location:(/*^block*/id)arg3 ride:(/*^block*/id)arg4 payment:(/*^block*/id)arg5 reminder:(/*^block*/id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
