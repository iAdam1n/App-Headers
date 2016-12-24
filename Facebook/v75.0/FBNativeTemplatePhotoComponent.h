/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/NTNativeTemplateComponent.h>
#import <Facebook/FBPhotoDisplayingComponentPhotoViewProviderDelegate.h>
#import <Facebook/NTHasGraphQL.h>
#import <Facebook/NTHasComponentAttributes.h>
#import <Facebook/NTHasTouchAttributes.h>
#import <Facebook/NTHasTriggerableIntrinsicAction.h>

@class NSDictionary, FBMemPhoto, FBPhotoComponent, NSArray, NSString, FBNativeTemplateContext;

@interface FBNativeTemplatePhotoComponent : NTNativeTemplateComponent <FBPhotoDisplayingComponentPhotoViewProviderDelegate, NTHasGraphQL, NTHasComponentAttributes, NTHasTouchAttributes, NTHasTriggerableIntrinsicAction> {

	NSDictionary* _genericHelpers;
	FBMemPhoto* _photo;
	FBPhotoComponent* _photoComponent;
	NSArray* _photoSetPhotoIds;
	NSString* _photoSetToken;
	FBNativeTemplateContext* _context;
	NSDictionary* _model;

}

@property (nonatomic,readonly) FBNativeTemplateContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * model;                      //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)keysWithGraphQLFields;
-(id)photoAttachmentPhotoViewProvider:(id)arg1 needsPhotoDisplayingComponentForPhoto:(id)arg2 ;
-(id)photoAttachmentPhotoViewProvider:(id)arg1 needsOverlayComponentForPhoto:(id)arg2 ;
-(void)didTapView;
-(void)didLongPressView:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)_didTapPhoto;
-(void)triggerIntrinsicAction;
-(FBNativeTemplateContext *)context;
-(NSDictionary *)model;
@end
