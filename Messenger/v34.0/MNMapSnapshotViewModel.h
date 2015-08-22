/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@interface MNMapSnapshotViewModel : FBValueObject <NSCopying> {

	BOOL _drawPin;
	double _latitude;
	double _longitude;
	double _latitudeSpan;
	double _longitudeSpan;

}

@property (nonatomic,readonly) double latitude;                   //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                  //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double latitudeSpan;               //@synthesize latitudeSpan=_latitudeSpan - In the implementation block
@property (nonatomic,readonly) double longitudeSpan;              //@synthesize longitudeSpan=_longitudeSpan - In the implementation block
@property (nonatomic,readonly) BOOL drawPin;                      //@synthesize drawPin=_drawPin - In the implementation block
-(double)latitudeSpan;
-(double)longitudeSpan;
-(BOOL)drawPin;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 latitudeSpan:(double)arg3 longitudeSpan:(double)arg4 drawPin:(BOOL)arg5 ;
-(double)latitude;
-(double)longitude;
@end
