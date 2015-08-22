/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSTimer, NSDictionary;

@interface TFNLayoutMetricsParameters : NSObject {

	NSTimer* _updateTimer;
	NSDictionary* _lineHeightMultipliers;
	long long _version;

}

@property (nonatomic,readonly) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) double idealEmsPerLine; 
@property (nonatomic,readonly) BOOL insetForLineLengthInHorizontallyCompactEnvironment; 
@property (nonatomic,readonly) double minimumLineLengthInset; 
@property (nonatomic,readonly) double minimumBodyWidth; 
@property (nonatomic,readonly) double bodyPaddingEms; 
@property (nonatomic,readonly) double minimumBodyPadding; 
@property (nonatomic,readonly) double contentEdgeInsetsEms; 
@property (nonatomic,readonly) double minimumContentEdgeInsets; 
@property (nonatomic,readonly) double avatarHeightLHUnits; 
@property (nonatomic,readonly) double smallAvatarHeightLHUnits; 
@property (nonatomic,readonly) double mediumAvatarHeightLHUnits; 
@property (nonatomic,readonly) double minimumAvatarHeight; 
@property (nonatomic,readonly) double cellSpacingLHUnits; 
@property (nonatomic,readonly) unsigned long long bodyColumnCount; 
@property (nonatomic,readonly) double bodyColumnSpacingEms; 
+(id)sharedParameters;
-(void)_coalesceUpdates;
-(void)_performUpdate;
-(double)minimumContentEdgeInsets;
-(void)_cacheLineHeightMultipliers;
-(double)idealEmsPerLine;
-(double)lineHeightMultiplierForHorizontalSizeClass:(long long)arg1 verticalSizeClass:(long long)arg2 ;
-(BOOL)insetForLineLengthInHorizontallyCompactEnvironment;
-(double)minimumLineLengthInset;
-(double)minimumBodyWidth;
-(double)bodyPaddingEms;
-(double)minimumBodyPadding;
-(double)contentEdgeInsetsEms;
-(double)avatarHeightLHUnits;
-(double)smallAvatarHeightLHUnits;
-(double)mediumAvatarHeightLHUnits;
-(double)minimumAvatarHeight;
-(unsigned long long)bodyColumnCount;
-(double)bodyColumnSpacingEms;
-(double)cellSpacingLHUnits;
-(void)tfx_idealEmsPerLineParameterChanged;
-(void)tfx_lineHeightMultiplierCompactWidthCompactHeightParameterChanged;
-(void)tfx_lineHeightMultiplierRegularWidthCompactHeightParameterChanged;
-(void)tfx_lineHeightMultiplierCompactWidthRegularHeightParameterChanged;
-(void)tfx_lineHeightMultiplierRegularWidthRegularHeightParameterChanged;
-(void)tfx_insetForLineLengthInHorizontallyCompactEnvironmentParameterChanged;
-(void)tfx_minimumLineLengthInsetParameterChanged;
-(void)tfx_minimumBodyWidthParameterChanged;
-(void)tfx_bodyPaddingEmsParameterChanged;
-(void)tfx_minimumBodyPaddingParameterChanged;
-(void)tfx_contentEdgeInsetsEmsParameterChanged;
-(void)tfx_minimumContentEdgeInsetsParameterChanged;
-(void)tfx_avatarHeightLHUnitsParameterChanged;
-(void)tfx_smallAvatarHeightLHUnitsParameterChanged;
-(void)tfx_mediumAvatarHeightLHUnitsParameterChanged;
-(void)tfx_minimumAvatarHeightParameterChanged;
-(void)tfx_cellSpacingLHUnitsParameterChanged;
-(void)tfx_bodyColumnCountParameterChanged;
-(void)tfx_bodyColumnSpacingEmsParameterChanged;
-(id)init;
-(long long)version;
@end
