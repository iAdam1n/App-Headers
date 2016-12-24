/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentTrackerStateListener.h>

@class FBQuickPerformanceLogger, NSString;

@interface FBListPerformanceLogger : NSObject <FBSectionComponentTrackerStateListener> {

	FBQuickPerformanceLogger* _quickLogger;
	NSString* _analyticsModuleTag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnalyticsModule:(id)arg1 ;
-(void)didApplyChangeset:(id)arg1 sectionComponentTracker:(id)arg2 ;
-(void)componentWillAppearUsingTracker:(id)arg1 ;
-(void)willGenerateChangesetFromPreviousComponent:(id)arg1 ;
-(void)didGenerateChangesetFromPreviousComponent:(id)arg1 ;
-(void)willGenerateNewSectionComponentHierarchy:(id)arg1 ;
-(void)didGenerateSectionComponentHierarchy:(id)arg1 currentStates:(id)arg2 sectionComponentTracker:(id)arg3 ;
-(void)didUpdateStateWithOldValues:(id)arg1 allCurrentStates:(id)arg2 tracker:(id)arg3 ;
-(void)trackerWillDeallocate:(id)arg1 ;
@end
