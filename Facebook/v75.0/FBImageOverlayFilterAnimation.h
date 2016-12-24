/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBImageOverlayFilterAnimation : FBValueObject <NSCopying> {

	double _duration;
	double _offset;
	long long _direction;

}

@property (nonatomic,readonly) double duration;                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double offset;                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) long long direction;              //@synthesize direction=_direction - In the implementation block
-(id)initWithDuration:(double)arg1 offset:(double)arg2 direction:(long long)arg3 ;
-(double)duration;
-(long long)direction;
-(double)offset;
@end
