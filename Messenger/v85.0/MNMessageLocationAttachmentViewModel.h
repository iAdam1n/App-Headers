/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNMessageLocationAttachmentViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldForceSubtitleToRender;
	NSString* _locationTitle;
	NSString* _locationSubtitle;
	double _latitude;
	double _longitude;
	NSString* _rideRequestTitle;

}

@property (nonatomic,copy,readonly) NSString * locationTitle;                 //@synthesize locationTitle=_locationTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationSubtitle;              //@synthesize locationSubtitle=_locationSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceSubtitleToRender;              //@synthesize shouldForceSubtitleToRender=_shouldForceSubtitleToRender - In the implementation block
@property (nonatomic,readonly) double latitude;                               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy,readonly) NSString * rideRequestTitle;              //@synthesize rideRequestTitle=_rideRequestTitle - In the implementation block
-(NSString *)locationTitle;
-(NSString *)locationSubtitle;
-(id)initWithLocationTitle:(id)arg1 locationSubtitle:(id)arg2 shouldForceSubtitleToRender:(BOOL)arg3 latitude:(double)arg4 longitude:(double)arg5 rideRequestTitle:(id)arg6 ;
-(BOOL)shouldForceSubtitleToRender;
-(NSString *)rideRequestTitle;
-(double)latitude;
-(double)longitude;
@end
