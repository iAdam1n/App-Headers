/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString;

@interface FBTagSuggestionDismissRequest : FBNetworkerRequest {

	NSString* _photoFBID;
	NSString* _faceboxFBID;
	NSString* _dismissSource;

}

@property (nonatomic,copy) NSString * photoFBID;                  //@synthesize photoFBID=_photoFBID - In the implementation block
@property (nonatomic,copy) NSString * faceboxFBID;                //@synthesize faceboxFBID=_faceboxFBID - In the implementation block
@property (nonatomic,copy) NSString * dismissSource;              //@synthesize dismissSource=_dismissSource - In the implementation block
-(id)networkRequest;
-(NSString *)photoFBID;
-(void)setPhotoFBID:(NSString *)arg1 ;
-(id)initWithPhotoFBID:(id)arg1 faceboxFBID:(id)arg2 dismissSource:(id)arg3 callbackPerformer:(id)arg4 ;
-(NSString *)faceboxFBID;
-(void)setFaceboxFBID:(NSString *)arg1 ;
-(NSString *)dismissSource;
-(void)setDismissSource:(NSString *)arg1 ;
@end
