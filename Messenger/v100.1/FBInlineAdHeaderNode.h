/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@protocol FBInlineAdHeaderNodeDelegate;
@class FBInlineAdHeaderNodeMetrics, ASTextNode, ASDisplayNode;

@interface FBInlineAdHeaderNode : ASDisplayNode {

	FBInlineAdHeaderNodeMetrics* _metrics;
	ASTextNode* _sponsoredLabelNode;
	ASDisplayNode* _chevronButtonNode;
	long long _layoutDirection;
	id<FBInlineAdHeaderNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInlineAdHeaderNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithMetrics:(id)arg1 layoutDirection:(long long)arg2 ;
-(void)_didTapChevronButtonNode;
-(void)setDelegate:(id<FBInlineAdHeaderNodeDelegate>)arg1 ;
-(id<FBInlineAdHeaderNodeDelegate>)delegate;
-(void)layout;
@end
