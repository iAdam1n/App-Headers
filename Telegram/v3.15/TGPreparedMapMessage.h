/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGPreparedMessage.h>

@class TGVenueAttachment;

@interface TGPreparedMapMessage : TGPreparedMessage {

	double _latitude;
	double _longitude;
	TGVenueAttachment* _venue;

}

@property (assign,nonatomic) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) TGVenueAttachment * venue;              //@synthesize venue=_venue - In the implementation block
-(void)setVenue:(TGVenueAttachment *)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 venue:(id)arg3 replyMessage:(id)arg4 replyMarkup:(id)arg5 ;
-(id)message;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(TGVenueAttachment *)venue;
@end
