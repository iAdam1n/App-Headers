/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBScenePath, NSString, FBPhotoAggregationKey;

@interface FBPhotoComponentViewAttributes : NSObject {

	BOOL _renderShadow;
	FBScenePath* _scenePath;
	NSString* _module;
	FBPhotoAggregationKey* _aggregationKey;
	unsigned long long _imageFlags;
	double _minAspectRatio;
	double _maxAspectRatio;
	NSString* _accessibilityLabel;

}

@property (nonatomic,readonly) FBScenePath * scenePath;                             //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) BOOL renderShadow;                                   //@synthesize renderShadow=_renderShadow - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                              //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) FBPhotoAggregationKey * aggregationKey;              //@synthesize aggregationKey=_aggregationKey - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlags;                       //@synthesize imageFlags=_imageFlags - In the implementation block
@property (nonatomic,readonly) double minAspectRatio;                               //@synthesize minAspectRatio=_minAspectRatio - In the implementation block
@property (nonatomic,readonly) double maxAspectRatio;                               //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                           //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(id)newWithScenePath:(id)arg1 renderShadow:(BOOL)arg2 module:(id)arg3 aggregationKey:(id)arg4 ;
+(id)newWithScenePath:(id)arg1 renderShadow:(BOOL)arg2 module:(id)arg3 aggregationKey:(id)arg4 imageFlags:(unsigned long long)arg5 ;
+(id)newWithScenePath:(id)arg1 renderShadow:(BOOL)arg2 module:(id)arg3 aggregationKey:(id)arg4 imageFlags:(unsigned long long)arg5 minAspectRatio:(double)arg6 maxAspectRatio:(double)arg7 ;
-(FBScenePath *)scenePath;
-(BOOL)renderShadow;
-(unsigned long long)imageFlags;
-(FBPhotoAggregationKey *)aggregationKey;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(double)maxAspectRatio;
-(NSString *)module;
-(double)minAspectRatio;
@end
