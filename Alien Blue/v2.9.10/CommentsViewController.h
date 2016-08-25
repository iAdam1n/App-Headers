/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/ABOutlineViewController.h>
#import <AlienBlue/StatefulControllerProtocol.h>
#import <AlienBlue/CommentEntryDelegate.h>
#import <AlienBlue/SlidingDragReleaseProtocol.h>

@protocol CommentsViewControllerDelegate;
@class Post, NSString, CommentPostHeaderToolbar, AFHTTPRequestOperation;

@interface CommentsViewController : ABOutlineViewController <StatefulControllerProtocol, CommentEntryDelegate, SlidingDragReleaseProtocol> {

	Post* _post;
	NSString* _contextId;
	CommentPostHeaderToolbar* _headerToolbar;
	id<CommentsViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) AFHTTPRequestOperation * loadOperation; 
@property (nonatomic,retain) NSString * sortOrder; 
@property (assign) unsigned long long customFetchLimit; 
@property (assign) BOOL disallowPrerendingAndAttributedStylePreprocessing; 
@property (retain) Post * post;                                                         //@synthesize post=_post - In the implementation block
@property (retain) NSString * contextId;                                                //@synthesize contextId=_contextId - In the implementation block
@property (retain) CommentPostHeaderToolbar * headerToolbar;                            //@synthesize headerToolbar=_headerToolbar - In the implementation block
@property (__weak) id<CommentsViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
-(void)handleRestoringStateAutoscroll;
-(void)setAutoscrollToCommentName:(id)arg1 ;
-(id)autoscrollToCommentName;
-(id)state;
-(id)initWithState:(id)arg1 ;
-(void)openLinkUrl:(id)arg1 ;
-(void)coreTextURLPressed:(id)arg1 ;
-(void)popupExtraOptionsActionSheet:(id)arg1 ;
-(void)addNewComment;
-(void)showShareOptions;
-(void)openThreadInSafari;
-(void)showCommentSortOptions;
-(void)loadAllImages;
-(void)deletePost;
-(void)toggleVoteIcons;
-(void)showOptionsForComment:(id)arg1 ;
-(void)setPopupQuery:(id)arg1 ;
-(id)popupOptionsBarItem;
-(id)popupQuery;
-(void)deletePostNode:(id)arg1 ;
-(void)showEmailModalView:(id)arg1 ;
-(void)scrollToSelectCommentParent;
-(void)copySelectedCommentToClipboard;
-(void)copySelectedCommentPermalinkToClipboard;
-(void)emailSelectedComment;
-(void)viewSelectedCommentAuthorInfo;
-(void)deleteSelectedComment;
-(void)popupCommentOrderSheet:(id)arg1 ;
-(void)setPopupOptionsBarItem:(id)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)afterCommentReply:(id)arg1 ;
-(void)commentExited:(id)arg1 ;
-(void)commentEntered:(id)arg1 ;
-(id)nodeForElementId:(id)arg1 ;
-(void)replyToPostNode:(id)arg1 ;
-(void)replyToCommentNode:(id)arg1 ;
-(void)showLegacyCommentEntryForDictionary:(id)arg1 editing:(BOOL)arg2 ;
-(void)showLegacyCommentEntryForDictionary:(id)arg1 ;
-(id)createCommentFromLegacyReplyResponse:(id)arg1 ;
-(void)collapseToRootCommentNode:(id)arg1 ;
-(void)toggleSavePostNode:(id)arg1 ;
-(void)toggleHidePostNode:(id)arg1 ;
-(void)voteDownPostNode:(id)arg1 ;
-(void)voteUpPostNode:(id)arg1 ;
-(void)addCommentToPostNode:(id)arg1 ;
-(void)showMoreOptionsForCommentNode:(id)arg1 ;
-(void)addCommentToCommentNode:(id)arg1 ;
-(void)voteDownCommentNode:(id)arg1 ;
-(void)voteUpCommentNode:(id)arg1 ;
-(void)focusContextCommentNode:(id)arg1 ;
-(void)deleteCommentNode:(id)arg1 ;
-(void)setLoadOperation:(AFHTTPRequestOperation *)arg1 ;
-(void)setCustomFetchLimit:(unsigned long long)arg1 ;
-(void)setDisallowPrerendingAndAttributedStylePreprocessing:(BOOL)arg1 ;
-(void)fetchCommentsOnComplete:(/*^block*/id)arg1 ;
-(AFHTTPRequestOperation *)loadOperation;
-(unsigned long long)customFetchLimit;
-(unsigned long long)fetchCount;
-(BOOL)shouldFilterComment:(id)arg1 ;
-(void)processCommentThread:(id)arg1 withLevel:(unsigned long long)arg2 parentNode:(id)arg3 appendToArray:(id)arg4 ;
-(BOOL)disallowPrerendingAndAttributedStylePreprocessing;
-(void)setSortOrder:(NSString *)arg1 ;
-(NSString *)sortOrder;
-(id)requestParameters;
-(BOOL)canDragRelease;
-(id)titleForDragReleaseLabel;
-(void)didDragRelease;
-(id)iconNameForDragReleaseDestination;
-(id)initWithPost:(id)arg1 ;
-(id)initWithPost:(id)arg1 contextId:(id)arg2 ;
-(void)setPost:(Post *)arg1 ;
-(Post *)post;
-(void)respondToStyleChange;
-(CommentPostHeaderToolbar *)headerToolbar;
-(void)fetchComments;
-(void)setHeaderToolbar:(CommentPostHeaderToolbar *)arg1 ;
-(void)showAllImagesInCanvas;
-(BOOL)isImageBasedThread;
-(void)commentsDidFinishLoading;
-(void)addPreCommentNodes;
-(void)showAllComments;
-(void)setDelegate:(id<CommentsViewControllerDelegate>)arg1 ;
-(id<CommentsViewControllerDelegate>)delegate;
-(void)loadView;
-(NSString *)contextId;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setContextId:(NSString *)arg1 ;
@end

