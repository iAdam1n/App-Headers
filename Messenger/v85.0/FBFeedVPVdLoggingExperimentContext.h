/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBFeedVPVdLoggingExperimentContext : FBExperimentContext {

	BOOL _vpvdLoggingViaWorkingRangesEnabled;
	BOOL _isItemViewStateFrameIncludedInHashAndIsEqualsEnabled;
	BOOL _isSuspendedSnapshottingEnabled;
	BOOL _vpvdDeduplicationKeyTrackingEnabled;
	NSString* _ignoredVPVdFields;

}

@property (nonatomic,copy,readonly) NSString * ignoredVPVdFields;                                      //@synthesize ignoredVPVdFields=_ignoredVPVdFields - In the implementation block
@property (nonatomic,readonly) BOOL vpvdLoggingViaWorkingRangesEnabled;                                //@synthesize vpvdLoggingViaWorkingRangesEnabled=_vpvdLoggingViaWorkingRangesEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isItemViewStateFrameIncludedInHashAndIsEqualsEnabled;              //@synthesize isItemViewStateFrameIncludedInHashAndIsEqualsEnabled=_isItemViewStateFrameIncludedInHashAndIsEqualsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isSuspendedSnapshottingEnabled;                                    //@synthesize isSuspendedSnapshottingEnabled=_isSuspendedSnapshottingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL vpvdDeduplicationKeyTrackingEnabled;                               //@synthesize vpvdDeduplicationKeyTrackingEnabled=_vpvdDeduplicationKeyTrackingEnabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(NSString *)ignoredVPVdFields;
-(BOOL)vpvdLoggingViaWorkingRangesEnabled;
-(BOOL)isItemViewStateFrameIncludedInHashAndIsEqualsEnabled;
-(BOOL)isSuspendedSnapshottingEnabled;
-(BOOL)vpvdDeduplicationKeyTrackingEnabled;
@end
