/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComponentMountPerformanceMetric : FBValueObject <NSCopying> {

	long long _mountTimeUs;
	Class _componentClass;
	NSString* _source;
	NSString* _analyticsModule;

}

@property (nonatomic,readonly) long long mountTimeUs;                        //@synthesize mountTimeUs=_mountTimeUs - In the implementation block
@property (nonatomic,readonly) Class componentClass;                         //@synthesize componentClass=_componentClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
-(NSString *)analyticsModule;
-(id)initWithMountTimeUs:(long long)arg1 componentClass:(Class)arg2 source:(id)arg3 analyticsModule:(id)arg4 ;
-(long long)mountTimeUs;
-(NSString *)source;
-(Class)componentClass;
@end
