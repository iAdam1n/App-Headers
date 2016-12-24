/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/ASDisplayNode.h>

@protocol _FBNativeArticleScrollNodeDelegate;
@class FBNativeArticleScrollView;

@interface _FBNativeArticleScrollNode : ASDisplayNode {

	id<_FBNativeArticleScrollNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_FBNativeArticleScrollNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBNativeArticleScrollView * scrollView; 
-(void)_staticInitialize;
-(void)didLoad;
-(void)subnodeDisplayDidFinish:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 delegate:(id)arg2 scrollViewDelegate:(id)arg3 scrollViewGestureHandler:(id)arg4 ;
-(void)setDelegate:(id<_FBNativeArticleScrollNodeDelegate>)arg1 ;
-(id<_FBNativeArticleScrollNodeDelegate>)delegate;
-(FBNativeArticleScrollView *)scrollView;
@end
