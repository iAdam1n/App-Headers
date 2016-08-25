/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMGalleryViewController.h>

@class NSString, AFJSONRequestOperation, PostInteractionToolbar;

@interface SubredditGalleryViewController : JMGalleryViewController {

	BOOL _loadingPosts;
	BOOL _shouldUseSecondLastPostIdWhenLoading;
	NSString* _galleryTitle;
	NSString* _subredditUrl;
	NSString* _additionalParams;
	NSString* _lastPostId;
	NSString* _secondLastPostId;
	AFJSONRequestOperation* _loadPostsOperation;
	PostInteractionToolbar* _postInteractionToolbar;

}

@property (retain) NSString * galleryTitle;                                      //@synthesize galleryTitle=_galleryTitle - In the implementation block
@property (retain) NSString * subredditUrl;                                      //@synthesize subredditUrl=_subredditUrl - In the implementation block
@property (retain) NSString * additionalParams;                                  //@synthesize additionalParams=_additionalParams - In the implementation block
@property (retain) NSString * lastPostId;                                        //@synthesize lastPostId=_lastPostId - In the implementation block
@property (retain) NSString * secondLastPostId;                                  //@synthesize secondLastPostId=_secondLastPostId - In the implementation block
@property (retain) AFJSONRequestOperation * loadPostsOperation;                  //@synthesize loadPostsOperation=_loadPostsOperation - In the implementation block
@property (retain) PostInteractionToolbar * postInteractionToolbar;              //@synthesize postInteractionToolbar=_postInteractionToolbar - In the implementation block
@property (assign) BOOL loadingPosts;                                            //@synthesize loadingPosts=_loadingPosts - In the implementation block
@property (assign) BOOL shouldUseSecondLastPostIdWhenLoading;                    //@synthesize shouldUseSecondLastPostIdWhenLoading=_shouldUseSecondLastPostIdWhenLoading - In the implementation block
-(id)interactionToolbarView;
-(void)setLoadingPosts:(BOOL)arg1 ;
-(BOOL)loadingPosts;
-(void)showCommentsForPost:(id)arg1 ;
-(id)initWithSubredditUrl:(id)arg1 additionalParams:(id)arg2 title:(id)arg3 ;
-(NSString *)subredditUrl;
-(void)setSubredditUrl:(NSString *)arg1 ;
-(id)generateRelativeRedditUrlForNextPage;
-(void)apiUpvotePost:(id)arg1 ;
-(void)apiDownvotePost:(id)arg1 ;
-(void)apiSavePost:(id)arg1 ;
-(void)apiHidePost:(id)arg1 ;
-(void)showSharingOptionsForPost:(id)arg1 ;
-(id)generateRequestForNextPageOfResults;
-(void)showMomentaryHudMessage:(id)arg1 minDisplayTime:(double)arg2 ;
-(void)setGalleryTitle:(NSString *)arg1 ;
-(void)setAdditionalParams:(NSString *)arg1 ;
-(void)setLoadPostsOperation:(AFJSONRequestOperation *)arg1 ;
-(void)setLastPostId:(NSString *)arg1 ;
-(AFJSONRequestOperation *)loadPostsOperation;
-(void)resetNetworkConnections;
-(void)fetchPosts;
-(void)setSecondLastPostId:(NSString *)arg1 ;
-(BOOL)postItemAlreadyExistsInGallery:(id)arg1 ;
-(void)scheduleAdditionOfGalleryItemsWhenScrollingIsIdle:(id)arg1 ;
-(void)setShouldUseSecondLastPostIdWhenLoading:(BOOL)arg1 ;
-(BOOL)shouldUseSecondLastPostIdWhenLoading;
-(NSString *)secondLastPostId;
-(void)appendGalleryItemsFromJSON:(id)arg1 ;
-(PostInteractionToolbar *)postInteractionToolbar;
-(void)setPostInteractionToolbar:(PostInteractionToolbar *)arg1 ;
-(void)toggleSaveItem:(id)arg1 ;
-(void)toggleHideItem:(id)arg1 ;
-(void)toggleUpvoteItem:(id)arg1 ;
-(void)toggleDownvoteItem:(id)arg1 ;
-(NSString *)galleryTitle;
-(NSString *)additionalParams;
-(NSString *)lastPostId;
-(void)didHitLastPage;
-(void)didTwoFingerTapOnGalleryItem:(id)arg1 ;
-(void)didThreeFingerTapOnGalleryItem:(id)arg1 ;
-(void)didLongPressBeginOnGalleryItem:(id)arg1 ;
-(void)didLongPressEndOnGalleryItem:(id)arg1 ;
-(id)titleForGridToolbar;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismiss;
@end

