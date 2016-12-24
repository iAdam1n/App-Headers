/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPlatformOpenGraphActionMediaManagerDelegate;
@class NSMutableDictionary, FBUserSession, NSMutableArray, NSURL, UIImage, NSString, FBKVOController, NSArray;

@interface FBPlatformOpenGraphActionMediaManager : NSObject {

	NSMutableDictionary* _openGraphAction;
	FBUserSession* _session;
	NSMutableArray* _mediaAttachmentsForUpload;
	NSMutableArray* _mediaAttachmentsForDisplay;
	unsigned long long _pendingThumbnailCount;
	BOOL _allThumbnailsAvailable;
	NSURL* _actionImageURL;
	UIImage* _previewImage;
	id<FBPlatformOpenGraphActionMediaManagerDelegate> _delegate;
	NSString* _previewPropertyName;
	FBKVOController* _observation;

}

@property (nonatomic,copy) NSString * previewPropertyName;                                                   //@synthesize previewPropertyName=_previewPropertyName - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                                                         //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) NSURL * actionImageURL;                                                         //@synthesize actionImageURL=_actionImageURL - In the implementation block
@property (assign,nonatomic) BOOL allThumbnailsAvailable;                                                    //@synthesize allThumbnailsAvailable=_allThumbnailsAvailable - In the implementation block
@property (nonatomic,retain) FBKVOController * observation;                                                  //@synthesize observation=_observation - In the implementation block
@property (nonatomic,readonly) NSArray * mediaAttachmentsForUpload;                                          //@synthesize mediaAttachmentsForUpload=_mediaAttachmentsForUpload - In the implementation block
@property (nonatomic,readonly) NSArray * mediaAttachmentsForDisplay;                                         //@synthesize mediaAttachmentsForDisplay=_mediaAttachmentsForDisplay - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * openGraphAction;                                        //@synthesize openGraphAction=_openGraphAction - In the implementation block
@property (assign,nonatomic,__weak) id<FBPlatformOpenGraphActionMediaManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)previewPropertyName;
-(NSMutableDictionary *)openGraphAction;
-(void)setPreviewPropertyName:(NSString *)arg1 ;
-(void)setActionImageURL:(NSURL *)arg1 ;
-(void)setAllThumbnailsAvailable:(BOOL)arg1 ;
-(id)_normalizeImageParam:(id)arg1 propertyName:(id)arg2 isAction:(BOOL)arg3 ;
-(id)_getStringRepresentation:(id)arg1 propertyName:(id)arg2 isAction:(BOOL)arg3 userGenerated:(BOOL)arg4 ;
-(void)_remoteAttachmentThumbnailImageDidChange;
-(id)initWithOpenGraphAction:(id)arg1 previewPropertyName:(id)arg2 session:(id)arg3 ;
-(void)processActionAndObjects:(id)arg1 ;
-(NSURL *)actionImageURL;
-(NSArray *)mediaAttachmentsForUpload;
-(NSArray *)mediaAttachmentsForDisplay;
-(BOOL)allThumbnailsAvailable;
-(void)setObservation:(FBKVOController *)arg1 ;
-(void)setDelegate:(id<FBPlatformOpenGraphActionMediaManagerDelegate>)arg1 ;
-(id<FBPlatformOpenGraphActionMediaManagerDelegate>)delegate;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(FBKVOController *)observation;
@end
