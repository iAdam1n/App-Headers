/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
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
-(id)init;
-(void)setDelegate:(id<FBSDKSharingDelegate>)arg1 ;
-(id<FBSDKSharingDelegate>)delegate;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(BOOL)share;
-(void)setAccessToken:(FBSDKAccessToken *)arg1 ;
-(BOOL)canShare;
-(BOOL)validateWithError:(id*)arg1 ;
-(FBSDKAccessToken *)accessToken;
@end
