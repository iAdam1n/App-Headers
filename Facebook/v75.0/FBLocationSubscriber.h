/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBLocationSubscriber : FBValueObject <NSCopying> {

	NSString* _context;
	double _accuracy;

}

@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) double accuracy;                      //@synthesize accuracy=_accuracy - In the implementation block
-(id)initWithContext:(id)arg1 accuracy:(double)arg2 ;
-(NSString *)context;
-(double)accuracy;
@end
