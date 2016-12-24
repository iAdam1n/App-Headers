/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentToolbox.h>

@protocol FBOptimisticPostingSectionComponentListener;
@class FBEventAnalyticTracker, FBFeedToolbox, FBFeedToolboxManager, FBComposerFlowDelegateProxy, FBSectionComponentFeedToolbox, FBSectionComponentFeedComposerToolbox, FBInlineComposerComponentToolbox;

@interface FBEventPermalinkTabToolbox : FBSectionComponentToolbox {

	FBEventAnalyticTracker* _tracker;
	FBFeedToolbox* _feedToolbox;
	FBFeedToolboxManager* _feedToolboxManager;
	id<FBOptimisticPostingSectionComponentListener> _optimisticPostingListener;
	FBComposerFlowDelegateProxy* _composerFlowDelegateProxy;
	FBSectionComponentFeedToolbox* _sectionComponentFeedToolbox;
	FBSectionComponentFeedComposerToolbox* _optimisticPostingToolbox;
	FBInlineComposerComponentToolbox* _inlineComposerToolbox;

}

@property (nonatomic,readonly) FBEventAnalyticTracker * tracker;                                                              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * feedToolbox;                                                                   //@synthesize feedToolbox=_feedToolbox - In the implementation block
@property (nonatomic,readonly) FBFeedToolboxManager * feedToolboxManager;                                                     //@synthesize feedToolboxManager=_feedToolboxManager - In the implementation block
@property (nonatomic,__weak,readonly) id<FBOptimisticPostingSectionComponentListener> optimisticPostingListener;              //@synthesize optimisticPostingListener=_optimisticPostingListener - In the implementation block
@property (nonatomic,readonly) FBComposerFlowDelegateProxy * composerFlowDelegateProxy;                                       //@synthesize composerFlowDelegateProxy=_composerFlowDelegateProxy - In the implementation block
@property (nonatomic,readonly) FBSectionComponentFeedToolbox * sectionComponentFeedToolbox;                                   //@synthesize sectionComponentFeedToolbox=_sectionComponentFeedToolbox - In the implementation block
@property (nonatomic,readonly) FBSectionComponentFeedComposerToolbox * optimisticPostingToolbox;                              //@synthesize optimisticPostingToolbox=_optimisticPostingToolbox - In the implementation block
@property (nonatomic,readonly) FBInlineComposerComponentToolbox * inlineComposerToolbox;                                      //@synthesize inlineComposerToolbox=_inlineComposerToolbox - In the implementation block
-(FBFeedToolbox *)feedToolbox;
-(FBFeedToolboxManager *)feedToolboxManager;
-(FBSectionComponentFeedToolbox *)sectionComponentFeedToolbox;
-(FBInlineComposerComponentToolbox *)inlineComposerToolbox;
-(FBComposerFlowDelegateProxy *)composerFlowDelegateProxy;
-(id)initWithContext:(id)arg1 event:(id)arg2 tracker:(id)arg3 permalinkIntentHandler:(id)arg4 optimisticPostingListener:(id)arg5 inlineComposerListenerAnnouncer:(id)arg6 ;
-(FBSectionComponentFeedComposerToolbox *)optimisticPostingToolbox;
-(id<FBOptimisticPostingSectionComponentListener>)optimisticPostingListener;
-(FBEventAnalyticTracker *)tracker;
@end
