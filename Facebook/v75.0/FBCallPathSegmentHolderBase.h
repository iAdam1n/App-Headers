/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCallPath.h>

@protocol FBCallPath;
@class NSString;

@interface FBCallPathSegmentHolderBase : NSObject <FBCallPath> {

	NSString* _analyticsTag;
	NSString* _moduleAnalyticsTag;
	NSString* _featureTag;
	id<FBCallPath> _parent;

}

@property (nonatomic,readonly) id<FBCallPath> parent;                           //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * analyticsTag;                    //@synthesize analyticsTag=_analyticsTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * moduleAnalyticsTag;              //@synthesize moduleAnalyticsTag=_moduleAnalyticsTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureTag;                      //@synthesize featureTag=_featureTag - In the implementation block
-(id)computeCallPath;
-(NSString *)analyticsTag;
-(NSString *)moduleAnalyticsTag;
-(NSString *)featureTag;
-(id)segmentString;
-(id)tagSet;
-(id)initWithParent:(id)arg1 analyticsTag:(id)arg2 moduleAnalyticsTag:(id)arg3 featureTag:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FBCallPath>)parent;
@end

