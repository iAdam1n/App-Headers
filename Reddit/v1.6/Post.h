/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/FeedObjectModel.h>

@class NSString, NSURL, NSAttributedString, NSArray, Subreddit, NSDate, MPNativeAd, NSObject;

@interface Post : FeedObjectModel {

	BOOL _showMedia;
	BOOL _nsfw;
	BOOL _archived;
	BOOL _edited;
	BOOL _hidden;
	BOOL _locked;
	BOOL _saved;
	BOOL _selfPost;
	BOOL _stickied;
	BOOL _visited;
	BOOL _sponsored;
	BOOL _deleted;
	unsigned long long _postType;
	NSString* _postID;
	NSURL* _linkURL;
	NSURL* _thumbnailURL;
	NSString* _title;
	NSString* _domain;
	NSString* _selfText;
	NSAttributedString* _selfTextAttributed;
	NSString* _selfTextHTML;
	NSString* _postHint;
	NSArray* _mediaModels;
	NSString* _permalink;
	Subreddit* _subreddit;
	NSString* _author;
	NSDate* _createdAt;
	unsigned long long _upvotes;
	unsigned long long _downvotes;
	long long _voteStatus;
	unsigned long long _commentCount;
	unsigned long long _gilded;
	NSString* _distinguished;
	MPNativeAd* _ad;
	long long _adType;
	NSString* _linkFlairCSSClass;
	NSString* _linkFlairText;
	NSString* _authorFlairCSSClass;
	NSString* _authorFlairText;
	NSArray* _comments;
	unsigned long long _commentSortType;
	NSObject* _debugData;

}

@property (nonatomic,retain) NSObject * debugData;                                    //@synthesize debugData=_debugData - In the implementation block
@property (assign,nonatomic) unsigned long long postType;                             //@synthesize postType=_postType - In the implementation block
@property (nonatomic,copy) NSString * postID;                                         //@synthesize postID=_postID - In the implementation block
@property (nonatomic,copy) NSURL * linkURL;                                           //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy) NSURL * thumbnailURL;                                      //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * domain;                                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * selfText;                                       //@synthesize selfText=_selfText - In the implementation block
@property (nonatomic,copy) NSAttributedString * selfTextAttributed;                   //@synthesize selfTextAttributed=_selfTextAttributed - In the implementation block
@property (nonatomic,copy) NSString * selfTextHTML;                                   //@synthesize selfTextHTML=_selfTextHTML - In the implementation block
@property (nonatomic,copy) NSString * postHint;                                       //@synthesize postHint=_postHint - In the implementation block
@property (nonatomic,copy) NSArray * mediaModels;                                     //@synthesize mediaModels=_mediaModels - In the implementation block
@property (nonatomic,copy) NSString * permalink;                                      //@synthesize permalink=_permalink - In the implementation block
@property (nonatomic,copy,readonly) NSString * permalinkIncludingDomain; 
@property (nonatomic,retain) Subreddit * subreddit;                                   //@synthesize subreddit=_subreddit - In the implementation block
@property (nonatomic,copy) NSString * author;                                         //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSDate * createdAt;                                        //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) long long score; 
@property (assign,nonatomic) unsigned long long upvotes;                              //@synthesize upvotes=_upvotes - In the implementation block
@property (assign,nonatomic) unsigned long long downvotes;                            //@synthesize downvotes=_downvotes - In the implementation block
@property (assign,nonatomic) long long voteStatus;                                    //@synthesize voteStatus=_voteStatus - In the implementation block
@property (assign,nonatomic) unsigned long long commentCount;                         //@synthesize commentCount=_commentCount - In the implementation block
@property (assign,nonatomic) BOOL showMedia;                                          //@synthesize showMedia=_showMedia - In the implementation block
@property (assign,nonatomic) BOOL nsfw;                                               //@synthesize nsfw=_nsfw - In the implementation block
@property (assign,nonatomic) BOOL archived;                                           //@synthesize archived=_archived - In the implementation block
@property (assign,nonatomic) BOOL edited;                                             //@synthesize edited=_edited - In the implementation block
@property (assign,nonatomic) unsigned long long gilded;                               //@synthesize gilded=_gilded - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                             //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL locked;                                             //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) BOOL saved;                                              //@synthesize saved=_saved - In the implementation block
@property (assign,getter=isSelfPost,nonatomic) BOOL selfPost;                         //@synthesize selfPost=_selfPost - In the implementation block
@property (assign,nonatomic) BOOL stickied;                                           //@synthesize stickied=_stickied - In the implementation block
@property (assign,nonatomic) BOOL visited;                                            //@synthesize visited=_visited - In the implementation block
@property (nonatomic,copy) NSString * distinguished;                                  //@synthesize distinguished=_distinguished - In the implementation block
@property (assign,nonatomic) BOOL sponsored;                                          //@synthesize sponsored=_sponsored - In the implementation block
@property (nonatomic,retain) MPNativeAd * ad;                                         //@synthesize ad=_ad - In the implementation block
@property (assign,nonatomic) long long adType;                                        //@synthesize adType=_adType - In the implementation block
@property (nonatomic,copy) NSString * linkFlairCSSClass;                              //@synthesize linkFlairCSSClass=_linkFlairCSSClass - In the implementation block
@property (nonatomic,copy) NSString * linkFlairText;                                  //@synthesize linkFlairText=_linkFlairText - In the implementation block
@property (nonatomic,copy) NSString * authorFlairCSSClass;                            //@synthesize authorFlairCSSClass=_authorFlairCSSClass - In the implementation block
@property (nonatomic,copy) NSString * authorFlairText;                                //@synthesize authorFlairText=_authorFlairText - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                            //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSArray * comments;                                      //@synthesize comments=_comments - In the implementation block
@property (assign,nonatomic) unsigned long long commentSortType;                      //@synthesize commentSortType=_commentSortType - In the implementation block
+(id)postFromData:(id)arg1 ;
+(unsigned long long)postTypeForPost:(id)arg1 ;
+(BOOL)shouldOverridePostType:(unsigned long long*)arg1 forPost:(id)arg2 ;
-(Subreddit *)subreddit;
-(void)setSubreddit:(Subreddit *)arg1 ;
-(BOOL)nsfw;
-(unsigned long long)postType;
-(BOOL)sponsored;
-(NSString *)permalinkIncludingDomain;
-(NSArray *)mediaModels;
-(NSString *)selfText;
-(BOOL)stickied;
-(BOOL)archived;
-(NSString *)distinguished;
-(NSString *)linkFlairText;
-(BOOL)isSelfPost;
-(void)setAdType:(long long)arg1 ;
-(BOOL)showMedia;
-(void)setAd:(MPNativeAd *)arg1 ;
-(unsigned long long)commentSortType;
-(void)setCommentSortType:(unsigned long long)arg1 ;
-(void)setSelfText:(NSString *)arg1 ;
-(BOOL)visited;
-(id)selectorsToObserveChanges;
-(NSAttributedString *)selfTextAttributed;
-(long long)voteStatus;
-(unsigned long long)downvotes;
-(void)setDownvotes:(unsigned long long)arg1 ;
-(void)setVoteStatus:(long long)arg1 ;
-(unsigned long long)upvotes;
-(void)setUpvotes:(unsigned long long)arg1 ;
-(void)setDistinguished:(NSString *)arg1 ;
-(void)setPostID:(NSString *)arg1 ;
-(void)setSelfTextHTML:(NSString *)arg1 ;
-(void)setPermalink:(NSString *)arg1 ;
-(void)setPostHint:(NSString *)arg1 ;
-(void)setShowMedia:(BOOL)arg1 ;
-(void)setNsfw:(BOOL)arg1 ;
-(void)setArchived:(BOOL)arg1 ;
-(void)setGilded:(unsigned long long)arg1 ;
-(void)setSelfPost:(BOOL)arg1 ;
-(void)setStickied:(BOOL)arg1 ;
-(void)setLinkFlairCSSClass:(NSString *)arg1 ;
-(void)setLinkFlairText:(NSString *)arg1 ;
-(void)setAuthorFlairText:(NSString *)arg1 ;
-(void)setAuthorFlairCSSClass:(NSString *)arg1 ;
-(void)setMediaModels:(NSArray *)arg1 ;
-(void)setPostType:(unsigned long long)arg1 ;
-(NSString *)postID;
-(NSString *)selfTextHTML;
-(NSString *)permalink;
-(NSString *)postHint;
-(unsigned long long)gilded;
-(void)setSelfTextAttributed:(NSAttributedString *)arg1 ;
-(NSString *)linkFlairCSSClass;
-(NSString *)authorFlairCSSClass;
-(NSString *)authorFlairText;
-(NSObject *)debugData;
-(void)setDebugData:(NSObject *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)title;
-(NSString *)domain;
-(void)setLocked:(BOOL)arg1 ;
-(NSArray *)comments;
-(void)setComments:(NSArray *)arg1 ;
-(NSString *)author;
-(BOOL)hidden;
-(void)setAuthor:(NSString *)arg1 ;
-(MPNativeAd *)ad;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(NSDate *)createdAt;
-(void)setVisited:(BOOL)arg1 ;
-(NSURL *)linkURL;
-(void)setLinkURL:(NSURL *)arg1 ;
-(unsigned long long)commentCount;
-(long long)score;
-(void)setCommentCount:(unsigned long long)arg1 ;
-(void)setSponsored:(BOOL)arg1 ;
-(long long)adType;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)saved;
-(void)setSaved:(BOOL)arg1 ;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(BOOL)deleted;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)locked;
-(BOOL)edited;
-(void)setEdited:(BOOL)arg1 ;
@end
