/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBSDKVideoUploaderDelegate.h>
#import <SportyTrader/FBSDKSharing.h>

@protocol FBSDKSharingDelegate, FBSDKSharingContent;
@class NSFileHandle, ALAssetRepresentation, FBSDKAccessToken, NSString;

@interface FBSDKShareAPI : NSObject <FBSDKVideoUploaderDelegate, FBSDKSharing> {

	NSFileHandle* _fileHandle;
	ALAssetRepresentation* _assetRepresentation;
	BOOL _shouldFailOnDataError;
	id<FBSDKSharingDelegate> _delegate;
	id<FBSDKSharingContent> _shareContent;
	FBSDKAccessToken* _accessToken;
	NSString* _message;
	NSString* _graphNode;

}

@property (nonatomic,copy) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * graphNode;                                    //@synthesize graphNode=_graphNode - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * accessToken;                        //@synthesize accessToken=_accessToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSDKSharingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent;                    //@synthesize shareContent=_shareContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFailOnDataError;                            //@synthesize shouldFailOnDataError=_shouldFailOnDataError - In the implementation block
+(id)defaultAssetsLibrary;
+(id)shareWithContent:(id)arg1 delegate:(id)arg2 ;
+(void)initialize;
-(BOOL)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(BOOL)arg1 ;
-(id<FBSDKSharingContent>)shareContent;
-(void)setShareContent:(id<FBSDKSharingContent>)arg1 ;
-(BOOL)canShare;
-(BOOL)_hasPublishActions;
-(BOOL)_stageOpenGraphObject:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_shareLinkContent:(id)arg1 ;
-(BOOL)_sharePhotoContent:(id)arg1 ;
-(BOOL)_shareVideoContent:(id)arg1 ;
-(BOOL)_shareOpenGraphContent:(id)arg1 ;
-(void)_addCommonParameters:(id)arg1 content:(id)arg2 ;
-(id)_connection:(id)arg1 addRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_stageOpenGraphValueContainer:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 ;
-(BOOL)_addToPendingShareAPI;
-(BOOL)_addEncodedParametersToDictionary:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id*)arg4 ;
-(BOOL)_stageValue:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 ;
-(BOOL)_stagePhoto:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 ;
-(BOOL)_stageArray:(id)arg1 connection:(id)arg2 stagingHandler:(/*^block*/id)arg3 ;
-(void)_removeFromPendingShareAPI;
-(BOOL)createOpenGraphObject:(id)arg1 ;
-(id)_graphPathWithSuffix:(id)arg1 ;
-(void)videoUploader:(id)arg1 didFailWithError:(id)arg2 ;
-(id)videoChunkDataForVideoUploader:(id)arg1 startOffset:(unsigned long long)arg2 endOffset:(unsigned long long)arg3 ;
-(void)videoUploader:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(NSString *)graphNode;
-(void)setGraphNode:(NSString *)arg1 ;
-(void)setDelegate:(id<FBSDKSharingDelegate>)arg1 ;
-(id)init;
-(id<FBSDKSharingDelegate>)delegate;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setAccessToken:(FBSDKAccessToken *)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(BOOL)share;
-(FBSDKAccessToken *)accessToken;
@end

