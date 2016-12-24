/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNativeAdMediaFooterNodeDelegate.h>
#import <Messenger/FBNativeAdRedesignFooterNodeDelegate.h>
#import <Messenger/FBRichStoryBlockController.h>

@protocol FBQueriedDocumentNativeAdBaseObjectFieldsProtocol;
@class FBUserSession, FBRichStoryBlock, FBRichStoryBlockDisplayContext, FBMemModelObject, FBNativeAdMediaFooterNode, FBNativeAdMediaFooterNodeMetrics, FBNativeAdRedesignFooterNode, FBNativeAdRedesignFooterNodeMetrics, FBNativeAdCTAButtonNodeMetrics, FBNativeArticleNativeAdIntentHandler, NSString;

@interface FBAnnotationNativeAdMediaFooterBarController : NSObject <FBNativeAdMediaFooterNodeDelegate, FBNativeAdRedesignFooterNodeDelegate, FBRichStoryBlockController> {

	FBUserSession* _session;
	FBRichStoryBlock* _storyBlock;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBMemModelObject*<FBQueriedDocumentNativeAdBaseObjectFieldsProtocol> _nativeAdObject;
	FBNativeAdMediaFooterNode* _footer;
	FBNativeAdMediaFooterNodeMetrics* _metrics;
	FBNativeAdRedesignFooterNode* _redesignFooterNode;
	FBNativeAdRedesignFooterNodeMetrics* _redesignFooterNodeMetrics;
	FBNativeAdCTAButtonNodeMetrics* _ctaButtonMetrics;
	FBNativeArticleNativeAdIntentHandler* _intentHandler;
	NSString* _articleID;
	BOOL _enableFooterRedesign;
	BOOL _addTrackingCodes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)redesignedFooterAnnotationWithNativeAdObject:(id)arg1 verticalPosition:(long long)arg2 ;
+(id)footerAnnotationWithNativeAdObject:(id)arg1 verticalPosition:(long long)arg2 ;
-(void)handleIntent:(id)arg1 ;
-(id)richStoryRenderable;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)_handleTapOnFooterActionWithClickType:(unsigned long long)arg1 ;
-(void)didTapNativeAdMediaFooterNode:(id)arg1 ;
-(void)nativeAdMediaFooterNode:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)nativeAdRedesignFooterNode:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)didTapNativeAdRedesignFooterNode:(id)arg1 ;
@end
