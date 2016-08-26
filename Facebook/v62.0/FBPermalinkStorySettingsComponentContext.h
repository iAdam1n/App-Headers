/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedToolbox;

@interface FBPermalinkStorySettingsComponentContext : NSObject {

	FBFeedToolbox* _toolbox;
	SEL _loadMoreCommentersAction;
	SEL _commentOrderingAction;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                   //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) SEL loadMoreCommentersAction;              //@synthesize loadMoreCommentersAction=_loadMoreCommentersAction - In the implementation block
@property (nonatomic,readonly) SEL commentOrderingAction;                 //@synthesize commentOrderingAction=_commentOrderingAction - In the implementation block
-(FBFeedToolbox *)toolbox;
-(id)initWithToolbox:(id)arg1 loadMoreCommentersAction:(SEL)arg2 commentOrderingAction:(SEL)arg3 ;
-(SEL)loadMoreCommentersAction;
-(SEL)commentOrderingAction;
@end
