/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSectionedDataSourceWriting, FBProfileSectionControllerDelegate;
@class FBProfileSectionsAggregator, FBUserSession;

@interface FBProfileSectionControllerManager : NSObject {

	id<FBSectionedDataSourceWriting> _writeInterface;
	FBProfileSectionsAggregator* _sectionsAggregator;
	BOOL _isLoadingSectionVisible;
	BOOL _isViewingSelf;
	id<FBProfileSectionControllerDelegate> _sectionControllerDelegate;
	FBUserSession* _session;

}
-(void)removeControllersForTimelineSectionID:(id)arg1 ;
-(id)initWithWriteInterface:(id)arg1 sectionsAggregator:(id)arg2 sectionControllerDelegate:(id)arg3 session:(id)arg4 isViewingSelf:(BOOL)arg5 ;
-(id)storiesControllerForSectionID:(id)arg1 ;
-(void)setPadding:(double)arg1 forSectionID:(id)arg2 ;
-(void)addLoadingSection;
-(void)addControllersForTimelineSection:(id)arg1 hasHeader:(BOOL)arg2 loadingType:(unsigned long long)arg3 ;
-(void)removeLoadingSection;
-(void)removeAllControllers;
-(id)footerControllerForSectionID:(id)arg1 ;
-(id)yoloControllerForSectionID:(id)arg1 ;
-(void)invalidate;
@end
