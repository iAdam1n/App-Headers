/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBJPEGImageAttachment, NSString;

@interface FBProfilePictureUploadRequest : FBNetworkerRequest {

	FBJPEGImageAttachment* _imageAttachment;
	NSString* _targetFBID;
	long long _expirationTime;

}

@property (nonatomic,retain) FBJPEGImageAttachment * imageAttachment;              //@synthesize imageAttachment=_imageAttachment - In the implementation block
@property (nonatomic,copy) NSString * targetFBID;                                  //@synthesize targetFBID=_targetFBID - In the implementation block
@property (assign,nonatomic) long long expirationTime;                             //@synthesize expirationTime=_expirationTime - In the implementation block
-(id)networkRequest;
-(void)setImageAttachment:(FBJPEGImageAttachment *)arg1 ;
-(id)initWithImageAttachment:(id)arg1 callbackPerformer:(id)arg2 ;
-(void)setTargetFBID:(NSString *)arg1 ;
-(NSString *)targetFBID;
-(FBJPEGImageAttachment *)imageAttachment;
-(id)initWithImageAttachment:(id)arg1 expirationTime:(long long)arg2 callbackPerformer:(id)arg3 ;
-(BOOL)isUpload;
-(void)setTargetFBID:(id)arg1 accessTokenOverride:(id)arg2 ;
-(void)setExpirationTime:(long long)arg1 ;
-(long long)expirationTime;
@end

