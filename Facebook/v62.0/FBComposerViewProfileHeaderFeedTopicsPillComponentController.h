/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBComposerFeedTopicNUXController.h>

@class NSString;

@interface FBComposerViewProfileHeaderFeedTopicsPillComponentController : CKComponentController <FBComposerFeedTopicNUXController> {

	BOOL _didShowNUX;
	/*^block*/id _topicFeedNuxTooltipProvider;

}

@property (assign,nonatomic) BOOL didShowNUX;                           //@synthesize didShowNUX=_didShowNUX - In the implementation block
@property (nonatomic,copy) id topicFeedNuxTooltipProvider;              //@synthesize topicFeedNuxTooltipProvider=_topicFeedNuxTooltipProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateComponent;
-(BOOL)didShowNUX;
-(void)setupNux;
-(id)viewForNUX;
-(void)setDidShowNUX:(BOOL)arg1 ;
-(id)topicFeedNuxTooltipProvider;
-(void)setTopicFeedNuxTooltipProvider:(id)arg1 ;
@end
