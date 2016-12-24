/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASControlNode.h>

@class ASDisplayNode, NSArray, FBSmartClippingTextNode;

@interface FBNativeArticleUFIBarReactionSummaryButtonNode : ASControlNode {

	double _textImageSpacing;
	FBTextMetrics* _textMetrics;
	UIEdgeInsets _textContentInsets;
	long long _layoutDirection;
	ASDisplayNode* _separator;
	NSArray* _imageNodes;
	FBSmartClippingTextNode* _buttonTextNode;
	long long _buttonTextCountValue;
	NSArray* _reactionImages;

}

@property (assign,nonatomic) long long buttonTextCountValue;              //@synthesize buttonTextCountValue=_buttonTextCountValue - In the implementation block
@property (nonatomic,copy) NSArray * reactionImages;                      //@synthesize reactionImages=_reactionImages - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)setButtonTextCountValue:(long long)arg1 ;
-(void)setReactionImages:(NSArray *)arg1 ;
-(id)initWithTextImageSpacing:(double)arg1 textMetrics:(FBTextMetrics*)arg2 layoutDirection:(long long)arg3 ;
-(long long)buttonTextCountValue;
-(NSArray *)reactionImages;
-(void)layout;
@end
