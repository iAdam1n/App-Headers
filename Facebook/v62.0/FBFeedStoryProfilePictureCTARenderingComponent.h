/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBFeedStoryAttachmentCTARenderingComponent.h>

@class FBMemProfilePictureActionLink, FBFeedToolbox, NSString;

@interface FBFeedStoryProfilePictureCTARenderingComponent : CKCompositeComponent <FBFeedStoryAttachmentCTARenderingComponent> {

	FBMemProfilePictureActionLink* _actionLink;
	FBFeedToolbox* _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithAttachment:(id)arg1 options:(const FBFeedStoryAttachmentCTARenderingComponentOptions*)arg2 toolbox:(id)arg3 ;
+(id)identifier;
-(void)didTapCTAButton;
@end

