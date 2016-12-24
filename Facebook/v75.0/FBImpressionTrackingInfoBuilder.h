/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber;

@interface FBImpressionTrackingInfoBuilder : NSObject {

	BOOL _sponsoredValue;
	NSString* _sponsorableID;
	NSString* _parentSponsorableID;
	NSArray* _sponsorableTrackingCodes;
	NSArray* _sponsorableImpressionURLs;
	double _impressionTime;
	NSNumber* _rowIndex;
	BOOL _needsThirdPartyPing;
	BOOL _isAutoScroll;
	unsigned long long _impressionType;

}
+(id)impressionTrackingInfoFromExistingImpressionTrackingInfo:(id)arg1 ;
+(id)impressionTrackingInfo;
-(id)withImpressionTime:(double)arg1 ;
-(id)withImpressionType:(unsigned long long)arg1 ;
-(id)withSponsoredValue:(BOOL)arg1 ;
-(id)withSponsorableID:(id)arg1 ;
-(id)withParentSponsorableID:(id)arg1 ;
-(id)withSponsorableTrackingCodes:(id)arg1 ;
-(id)withSponsorableImpressionURLs:(id)arg1 ;
-(id)withRowIndex:(id)arg1 ;
-(id)withNeedsThirdPartyPing:(BOOL)arg1 ;
-(id)withIsAutoScroll:(BOOL)arg1 ;
-(id)build;
@end
