/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBLocalNewsCardRenderingComponentProvider.h>

@class FBMemFeedStory, NSArray, FBLocalNewsReportHandler, FBMemExternalUrl, FBLocalNewsToolbox, NSString;

@interface FBLocalNewsArticleCardComponent : CKCompositeComponent <FBLocalNewsCardRenderingComponentProvider> {

	FBMemFeedStory* _localNewsStory;
	NSArray* _trackingCodes;
	FBLocalNewsReportHandler* _handler;
	FBMemExternalUrl* _externalUrl;
	FBLocalNewsToolbox* _toolbox;

}

@property (nonatomic,retain) FBMemExternalUrl * externalUrl;              //@synthesize externalUrl=_externalUrl - In the implementation block
@property (nonatomic,retain) FBLocalNewsToolbox * toolbox;                //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithLocalNewsStory:(id)arg1 style:(const FBLocalNewsCardRenderingComponentStyle*)arg2 toolbox:(id)arg3 ;
-(FBLocalNewsToolbox *)toolbox;
-(void)setToolbox:(FBLocalNewsToolbox *)arg1 ;
-(FBMemExternalUrl *)externalUrl;
-(void)_didTapUFIComponent;
-(void)_didTapUFICommentButton;
-(void)_didTapUFIShareButton;
-(void)_didTapLocalNewsCard;
-(void)_didLongPress:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)setExternalUrl:(FBMemExternalUrl *)arg1 ;
@end
