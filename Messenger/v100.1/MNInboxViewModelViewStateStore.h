/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNInboxViewModelViewStateMutating.h>
#import <Messenger/MNSingleViewModelLoading.h>
#import <Messenger/MNViewModelUpdateMonitoring.h>

@protocol OS_dispatch_queue, MNViewModelUpdating;
@class NSObject, MNInboxTruncationViewModel, NSString;

@interface MNInboxViewModelViewStateStore : NSObject <MNInboxViewModelViewStateMutating, MNSingleViewModelLoading, MNViewModelUpdateMonitoring> {

	NSObject*<OS_dispatch_queue> _queue;
	CGSize _inboxViewSize;
	long long _seeMoreButtonPressCount;
	BOOL _conversationStartersSectionExpanded;
	BOOL _shouldShowMoreCell;
	BOOL _recentVideosUnitExpanded;
	BOOL _recentlyClickedLinksUnitExpanded;
	MNInboxTruncationViewModel* _inboxTruncationViewModel;
	id<MNViewModelUpdating> _updater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNViewModelUpdating> updater;              //@synthesize updater=_updater - In the implementation block
-(void)setRecentVideosUnitExpanded:(BOOL)arg1 ;
-(void)setShouldShowMoreCell:(BOOL)arg1 ;
-(void)resetInboxTruncation;
-(void)resetSeeMoreButtonPressCount;
-(void)setInboxViewSize:(CGSize)arg1 ;
-(void)incrementSeeMoreButtonPressCount;
-(void)incrementNumberOfMessagesAfterCutoffToShowBy:(unsigned long long)arg1 ;
-(void)setRecentlyClickedLinksUnitExpanded:(BOOL)arg1 ;
-(void)setTimestampToCutoffMessages:(unsigned long long)arg1 ;
-(id)initWithInboxViewModelCompositionConfiguration:(id)arg1 queue:(id)arg2 ;
-(void)setConversationStartersSectionExpanded:(BOOL)arg1 ;
-(void)_applyUpdate;
-(void)loadViewModelForRequest:(id)arg1 withRequestId:(unsigned long long)arg2 ;
-(void)cancelRequest:(unsigned long long)arg1 ;
-(void)setUpdater:(id<MNViewModelUpdating>)arg1 ;
-(id<MNViewModelUpdating>)updater;
@end
