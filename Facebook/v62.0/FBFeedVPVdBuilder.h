/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface FBFeedVPVdBuilder : NSObject {

	double _duration;
	unsigned long long _hScrollIndex;
	unsigned long long _storyHeight;
	unsigned long long _maximumVisibleHeight;
	NSArray* _trackingCodeFieldsToIgnore;
	NSArray* _trackingCodes;
	NSString* _deduplicationKey;
	long long _storyPosition;
	NSArray* _ctaIdentifiers;
	NSString* _debugIdentifier;

}
+(id)feedVPVd;
+(id)feedVPVdFromExistingFeedVPVd:(id)arg1 ;
-(id)withDuration:(double)arg1 ;
-(id)withTrackingCodes:(id)arg1 ;
-(id)withHScrollIndex:(unsigned long long)arg1 ;
-(id)withStoryHeight:(unsigned long long)arg1 ;
-(id)withMaximumVisibleHeight:(unsigned long long)arg1 ;
-(id)withTrackingCodeFieldsToIgnore:(id)arg1 ;
-(id)withDeduplicationKey:(id)arg1 ;
-(id)withStoryPosition:(long long)arg1 ;
-(id)withCtaIdentifiers:(id)arg1 ;
-(id)withDebugIdentifier:(id)arg1 ;
-(id)build;
@end
