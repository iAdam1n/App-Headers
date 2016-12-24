/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBSmartClippingTextNode;

@interface FBEmailCTASelectionButton : ASControlNode {

	FBSmartClippingTextNode* _emailTextNode;
	FBSmartClippingTextNode* _changeLabelTextNode;

}

@property (nonatomic,readonly) FBSmartClippingTextNode * emailTextNode;                    //@synthesize emailTextNode=_emailTextNode - In the implementation block
@property (nonatomic,readonly) FBSmartClippingTextNode * changeLabelTextNode;              //@synthesize changeLabelTextNode=_changeLabelTextNode - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(FBSmartClippingTextNode *)emailTextNode;
-(FBSmartClippingTextNode *)changeLabelTextNode;
-(void)setEmailText:(id)arg1 ;
-(id)init;
-(void)layout;
@end
