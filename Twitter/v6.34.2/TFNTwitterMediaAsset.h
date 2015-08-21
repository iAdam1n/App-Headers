/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/NSCopying.h>
#import <Twitter/NSCoding.h>
#import <Twitter/TFNTwitterMediaAssetUploadDelegate.h>
#import <Twitter/TFNTwitterProgressing.h>

@protocol NSCodingNSObject, NSObjectNSCopyingNSCoding;
@class NSUUID, NSString, NSDate, TFNTwitterAccount, UIImage;

@interface TFNTwitterMediaAsset : NSObject <NSCopying, NSCoding, TFNTwitterMediaAssetUploadDelegate, TFNTwitterProgressing> {

	BOOL _pendingCleanup;
	BOOL _pendingUploadSuccess;
	NSUUID* _uniqueID;
	double _progress;
	unsigned long long _progressWeight;
	id<NSCoding><NSObject> _editParameters;
	id<NSObject><NSCopying><NSCoding> _objectIdentifier;
	NSString* _mediaId;
	NSDate* _mediaIdExpiry;
	TFNTwitterAccount* _sendingAccount;
	id _uploader;

}

@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain) id<NSCoding><NSObject> editParameters;                                  //@synthesize editParameters=_editParameters - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueID;                                               //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying><NSCoding> objectIdentifier;              //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) UIImage * deprecatedPreview; 
@property (nonatomic,retain) NSString * mediaId;                                                     //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,retain) NSDate * mediaIdExpiry;                                                 //@synthesize mediaIdExpiry=_mediaIdExpiry - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * sendingAccount;                                     //@synthesize sendingAccount=_sendingAccount - In the implementation block
@property (nonatomic,__weak,readonly) id uploader;                                                   //@synthesize uploader=_uploader - In the implementation block
@property (nonatomic,readonly) BOOL needsUpload; 
@property (nonatomic,readonly) BOOL pendingUploadSuccess;                                            //@synthesize pendingUploadSuccess=_pendingUploadSuccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double progress;                                                      //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) unsigned long long progressWeight;                                    //@synthesize progressWeight=_progressWeight - In the implementation block
+(void)mediaAssetForAsset:(id)arg1 account:(id)arg2 types:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(id)mediaAssetWithAccount:(id)arg1 asset:(id)arg2 allowedTypes:(unsigned long long)arg3 ;
+(void)mediaAssetForData:(id)arg1 account:(id)arg2 types:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)validateVideoAsset:(id)arg1 withAccount:(id)arg2 ;
+(void)validateAnimatedGIFAsset:(id)arg1 withAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)_validateRepresentationForAniamtedGIF:(id)arg1 account:(id)arg2 ;
+(BOOL)_validateVideoAsset:(id)arg1 withAccount:(id)arg2 ;
+(BOOL)_validateAnimatedGIFAsset:(id)arg1 withAccount:(id)arg2 ;
+(BOOL)_validateImageAsset:(id)arg1 withAccount:(id)arg2 ;
+(id)mediaAssetWithAccount:(id)arg1 image:(id)arg2 allowedTypes:(unsigned long long)arg3 ;
+(void)cancelRequest:(int)arg1 ;
-(void)validateSizeWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)mediaType;
-(void)renderFinalData:(/*^block*/id)arg1 ;
-(void)renderThumbnail:(/*^block*/id)arg1 ;
-(void)renderPreviewWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)estimatedPreviewSizeThatFits:(CGSize)arg1 ;
-(void)renderPreview:(/*^block*/id)arg1 ;
-(void)renderPreviewForEditParameters:(id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)mediaSizeWithCompletion:(/*^block*/id)arg1 ;
-(void)renderPreviewForEditParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelUpload;
-(BOOL)needsUploadPreparation;
-(void)prepareForUpload:(/*^block*/id)arg1 ;
-(UIImage *)deprecatedPreview;
-(BOOL)uploadedFromAccount:(id)arg1 ;
-(void)cleanupLocalData;
-(NSString *)mediaId;
-(BOOL)pendingUploadSuccess;
-(id<NSCoding><NSObject>)editParameters;
-(void)setEditParameters:(id<NSCoding><NSObject>)arg1 ;
-(void)renderFinalDataWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deleteLocalData;
-(BOOL)_isMediaIdValid;
-(void)mediaAssetUploadDidStartWithUploadObject:(id)arg1 account:(id)arg2 ;
-(void)mediaAssetUploadDidFinishWithUploadObject:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)mediaAssetUploadDidUpdateProgress:(float)arg1 ;
-(void)mediaAssetUploadDidUpdateMediaInformation:(id)arg1 expiryDate:(id)arg2 ;
-(void)_didUpdatePreview:(id)arg1 ;
-(void)setMediaId:(NSString *)arg1 ;
-(NSDate *)mediaIdExpiry;
-(void)setMediaIdExpiry:(NSDate *)arg1 ;
-(void)setSendingAccount:(TFNTwitterAccount *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)progress;
-(BOOL)needsUpload;
-(id)uploader;
-(id<NSObject><NSCopying><NSCoding>)objectIdentifier;
-(TFNTwitterAccount *)sendingAccount;
-(NSUUID *)uniqueID;
-(unsigned long long)progressWeight;
@end

