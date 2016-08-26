/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWildeMemModelObject.h>
#import <Facebook/FBMediaContainerProtocol.h>
#import <Facebook/FBShareable.h>
#import <Facebook/FBFeedbackTargetProtocol.h>
#import <Facebook/FBQueriedNodeFieldsProtocol.h>
#import <Facebook/FBQueriedEntityFieldsProtocol.h>
#import <Facebook/FBQueriedMediaSetFieldsProtocol.h>

@class NSString, FBMemPhoto, NSNumber, NSDate;

@interface FBMemAlbum : FBWildeMemModelObject <FBMediaContainerProtocol, FBShareable, FBFeedbackTargetProtocol, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedMediaSetFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBMemPhoto * mediaContainerCoverPhoto; 
@property (nonatomic,copy,readonly) NSString * mediaContainerName; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSDate * modifiedTime; 
@property (nonatomic,copy,readonly) NSNumber * canViewerEdit; 
@property (nonatomic,copy,readonly) NSString * graphQLID; 
+(void)setShouldAllowInlineSpecialAlbums:(BOOL)arg1 ;
-(id)fbid;
-(id)entityURL;
-(id)shareableID;
-(id)shareableType;
-(NSNumber *)canViewerEdit;
-(id)titleForContainerForSession:(id)arg1 ;
-(BOOL)userWithIDCanUploadToAlbum:(id)arg1 session:(id)arg2 ;
-(id)coverPhotoForContainerForSession:(id)arg1 ;
-(FBMemPhoto *)mediaContainerCoverPhoto;
-(NSString *)mediaContainerName;
-(id)shareableURL;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)size;
@end
