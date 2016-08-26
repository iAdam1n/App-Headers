/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIImageView.h>

@protocol FBTimelineResizedCoverPhotoViewDelegate;
@class FBScenePath, FBUserSession, FBContextualTimelineHeaderConfiguration, UIActivityIndicatorView, FBMemPerson, NSString, FBMemImage, NSData, FBMemVect2, UIImage;

@interface FBTimelineResizedCoverPhotoView : UIImageView {

	BOOL _coverPhotoDownloadFinishedLogged;
	BOOL _coverPhotoDownloadFinishedLowResLogged;
	BOOL _useTransitionAnimation;
	FBScenePath* _scenePath;
	FBUserSession* _session;
	FBContextualTimelineHeaderConfiguration* _configuration;
	UIActivityIndicatorView* _loadingIndicatorView;
	FBMemPerson* _person;
	BOOL _canDownloadHighRes;
	BOOL _highResDisplayed;
	BOOL _lowResDisplayed;
	BOOL _previewDisplayed;
	BOOL _isAnimatingCover;
	id<FBTimelineResizedCoverPhotoViewDelegate> _delegate;
	id _imageDownload;
	id _lowResImageDownload;
	id _imageStreamToken;
	id _lowResImageStreamToken;
	id _highResCachedImageFetch;
	NSString* _analyticsUUID;
	FBMemImage* _coverImage;
	FBMemImage* _lowResImage;
	NSData* _previewPayload;
	FBMemVect2* _focus;
	NSString* _ownerGraphQLID;
	UIImage* _postAnimationImage;

}

@property (nonatomic,retain) id imageDownload;                                                         //@synthesize imageDownload=_imageDownload - In the implementation block
@property (nonatomic,retain) id lowResImageDownload;                                                   //@synthesize lowResImageDownload=_lowResImageDownload - In the implementation block
@property (nonatomic,retain) id imageStreamToken;                                                      //@synthesize imageStreamToken=_imageStreamToken - In the implementation block
@property (nonatomic,retain) id lowResImageStreamToken;                                                //@synthesize lowResImageStreamToken=_lowResImageStreamToken - In the implementation block
@property (nonatomic,retain) id highResCachedImageFetch;                                               //@synthesize highResCachedImageFetch=_highResCachedImageFetch - In the implementation block
@property (nonatomic,copy) NSString * analyticsUUID;                                                   //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,retain) FBMemImage * coverImage;                                                  //@synthesize coverImage=_coverImage - In the implementation block
@property (nonatomic,retain) FBMemImage * lowResImage;                                                 //@synthesize lowResImage=_lowResImage - In the implementation block
@property (nonatomic,retain) NSData * previewPayload;                                                  //@synthesize previewPayload=_previewPayload - In the implementation block
@property (nonatomic,retain) FBMemVect2 * focus;                                                       //@synthesize focus=_focus - In the implementation block
@property (nonatomic,copy) NSString * ownerGraphQLID;                                                  //@synthesize ownerGraphQLID=_ownerGraphQLID - In the implementation block
@property (assign,nonatomic) BOOL highResDisplayed;                                                    //@synthesize highResDisplayed=_highResDisplayed - In the implementation block
@property (assign,nonatomic) BOOL lowResDisplayed;                                                     //@synthesize lowResDisplayed=_lowResDisplayed - In the implementation block
@property (assign,nonatomic) BOOL previewDisplayed;                                                    //@synthesize previewDisplayed=_previewDisplayed - In the implementation block
@property (nonatomic,retain) UIImage * postAnimationImage;                                             //@synthesize postAnimationImage=_postAnimationImage - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingCover;                                                    //@synthesize isAnimatingCover=_isAnimatingCover - In the implementation block
@property (assign,nonatomic) BOOL canDownloadHighRes;                                                  //@synthesize canDownloadHighRes=_canDownloadHighRes - In the implementation block
@property (assign,nonatomic,__weak) id<FBTimelineResizedCoverPhotoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(void)setAnalyticsUUID:(NSString *)arg1 ;
-(NSString *)analyticsUUID;
-(void)_coverPhotoStartedUploading:(id)arg1 ;
-(void)_coverPhotoFailedUploading:(id)arg1 ;
-(NSString *)ownerGraphQLID;
-(void)setOwnerGraphQLID:(NSString *)arg1 ;
-(void)setLowResImage:(FBMemImage *)arg1 ;
-(void)setPreviewPayload:(NSData *)arg1 ;
-(void)_updateCoverPhotoCrop;
-(void)_logCoverPhotoView:(id)arg1 ;
-(void)setLowResImageDownload:(id)arg1 ;
-(void)setLowResImageStreamToken:(id)arg1 ;
-(void)setImageStreamToken:(id)arg1 ;
-(void)setImageDownload:(id)arg1 ;
-(void)_logEventForCoverPhoto:(BOOL)arg1 didSucceed:(BOOL)arg2 isCached:(BOOL)arg3 ;
-(void)displayImageWithOrAfterAnimation:(id)arg1 ;
-(void)setHighResDisplayed:(BOOL)arg1 ;
-(void)_handleHighResImage:(CGImageRef)arg1 imageURL:(id)arg2 downloadError:(id)arg3 isCached:(BOOL)arg4 ;
-(void)setHighResCachedImageFetch:(id)arg1 ;
-(void)_startHighResImageDownload;
-(void)_handleLowResImage:(CGImageRef)arg1 imageURL:(id)arg2 downloadError:(id)arg3 isCached:(BOOL)arg4 ;
-(void)setLowResDisplayed:(BOOL)arg1 ;
-(id)imageStreamToken;
-(void)setCanDownloadHighRes:(BOOL)arg1 ;
-(void)setPreviewDisplayed:(BOOL)arg1 ;
-(id)imageDownload;
-(void)setPostAnimationImage:(UIImage *)arg1 ;
-(void)setIsAnimatingCover:(BOOL)arg1 ;
-(void)cleanupAnimation;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 frame:(CGRect)arg3 analyticsUUID:(id)arg4 configuration:(id)arg5 useTransitionAnimation:(BOOL)arg6 person:(id)arg7 ;
-(void)configureWithImage:(id)arg1 lowResImage:(id)arg2 previewPayload:(id)arg3 focus:(id)arg4 ownerGraphQLID:(id)arg5 ;
-(BOOL)canDownloadHighRes;
-(id)lowResImageDownload;
-(id)lowResImageStreamToken;
-(id)highResCachedImageFetch;
-(FBMemImage *)lowResImage;
-(NSData *)previewPayload;
-(BOOL)highResDisplayed;
-(BOOL)lowResDisplayed;
-(BOOL)previewDisplayed;
-(UIImage *)postAnimationImage;
-(BOOL)isAnimatingCover;
-(void)setDelegate:(id<FBTimelineResizedCoverPhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBTimelineResizedCoverPhotoViewDelegate>)delegate;
-(FBMemVect2 *)focus;
-(void)setFocus:(FBMemVect2 *)arg1 ;
-(void)setCoverImage:(FBMemImage *)arg1 ;
-(FBMemImage *)coverImage;
@end
