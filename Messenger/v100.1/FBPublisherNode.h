/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@protocol FBPublisherNodeDelegate;
@class FBPublisherNodeMetrics, ASNetworkImageNode, ASDisplayNode;

@interface FBPublisherNode : ASDisplayNode {

	FBPublisherNodeMetrics* _metrics;
	long long _layoutDirection;
	ASNetworkImageNode* _logoImageNode;
	ASDisplayNode* _borderLineNode;
	ASDisplayNode* _likeButtonNode;
	double _logoHeight;
	double _logoWidth;
	id<FBPublisherNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPublisherNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_logoImageTapped;
-(id)initWithLogoURLString:(id)arg1 logoSize:(CGSize)arg2 metrics:(id)arg3 imageCache:(id)arg4 imageDownload:(id)arg5 likeButtonNode:(id)arg6 layoutDirection:(long long)arg7 ;
-(void)updateLikeButtonLayout;
-(void)setDelegate:(id<FBPublisherNodeDelegate>)arg1 ;
-(id<FBPublisherNodeDelegate>)delegate;
-(void)layout;
@end

